#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_68AC57714A38FDF3_OFFSET UNITYSDK_OFFSET(0x19CF9AD0)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_B4568B8EA59C1FE5_OFFSET UNITYSDK_OFFSET(0x19D0CF70)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_D9ACCD576F49D48B_OFFSET UNITYSDK_OFFSET(0x19D0D050)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_E82E109EE0D85332_OFFSET UNITYSDK_OFFSET(0x19D05C50)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF9A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastKillTarget_TypeDefinitionIndex = 22686;

	class TargetFetchLastKillTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B4568B8EA59C1FE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_B4568B8EA59C1FE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_68AC57714A38FDF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_68AC57714A38FDF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E82E109EE0D85332(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_E82E109EE0D85332_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D9ACCD576F49D48B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_D9ACCD576F49D48B_OFFSET))(a1, a2);
		}
	};
}

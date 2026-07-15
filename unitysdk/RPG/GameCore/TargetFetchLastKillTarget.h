#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_262157CE715DF7E7_OFFSET UNITYSDK_OFFSET(0x1D0BA4A0)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_68AC57714A38FDF3_OFFSET UNITYSDK_OFFSET(0x1D0BA440)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_960ECEBFC83D7972_OFFSET UNITYSDK_OFFSET(0x1D0BA3A0)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_D9ACCD576F49D48B_OFFSET UNITYSDK_OFFSET(0x1D0BA4E0)
#define RPG_GAMECORE_TARGETFETCHLASTKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BA430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastKillTarget_TypeDefinitionIndex = 23149;

	class TargetFetchLastKillTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_960ECEBFC83D7972(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_960ECEBFC83D7972_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_68AC57714A38FDF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_68AC57714A38FDF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_262157CE715DF7E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_262157CE715DF7E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D9ACCD576F49D48B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLTARGET_METHOD_4_D9ACCD576F49D48B_OFFSET))(a1, a2);
		}
	};
}

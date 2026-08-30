#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_1263BD42B8D5ED69_OFFSET UNITYSDK_OFFSET(0x1D5AD1C0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_7E97654CA20283B4_OFFSET UNITYSDK_OFFSET(0x1D5AD2C0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_B8ABCCA46D671E94_OFFSET UNITYSDK_OFFSET(0x1D5AD240)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_FE35D014955183E1_OFFSET UNITYSDK_OFFSET(0x1D5AD2A0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AD230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchParamEntity_TypeDefinitionIndex = 23639;

	class TargetFetchParamEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1263BD42B8D5ED69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_1263BD42B8D5ED69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8ABCCA46D671E94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_B8ABCCA46D671E94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE35D014955183E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_FE35D014955183E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E97654CA20283B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_METHOD_4_7E97654CA20283B4_OFFSET))(a1, a2);
		}
	};
}

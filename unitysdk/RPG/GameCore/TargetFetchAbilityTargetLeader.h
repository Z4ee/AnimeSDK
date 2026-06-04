#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_77161C5D1728BF11_OFFSET UNITYSDK_OFFSET(0x19CF4320)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_8325514E8BABEE33_OFFSET UNITYSDK_OFFSET(0x19D08020)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_D54AC7238F1AEB6E_OFFSET UNITYSDK_OFFSET(0x19D07ED0)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_F1BEEC778192E08E_OFFSET UNITYSDK_OFFSET(0x19D02D00)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF42D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAbilityTargetLeader_TypeDefinitionIndex = 22594;

	class TargetFetchAbilityTargetLeader : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean ReadFromCache; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D54AC7238F1AEB6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_D54AC7238F1AEB6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77161C5D1728BF11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_77161C5D1728BF11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1BEEC778192E08E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_F1BEEC778192E08E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8325514E8BABEE33(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_8325514E8BABEE33_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_18332F5523BD995A_OFFSET UNITYSDK_OFFSET(0x1D5A33B0)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_6B5B661EDF362777_OFFSET UNITYSDK_OFFSET(0x1D5A3350)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_97103BCD9C999D86_OFFSET UNITYSDK_OFFSET(0x1D5A32D0)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_E59C0874F8ACB727_OFFSET UNITYSDK_OFFSET(0x1D5A33D0)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A3340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAbilityTarget_TypeDefinitionIndex = 23635;

	class TargetFetchAbilityTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_97103BCD9C999D86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_97103BCD9C999D86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B5B661EDF362777(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_6B5B661EDF362777_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_18332F5523BD995A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_18332F5523BD995A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E59C0874F8ACB727(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_E59C0874F8ACB727_OFFSET))(a1, a2);
		}
	};
}

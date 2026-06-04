#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_1FD313AAAC3EA8B7_OFFSET UNITYSDK_OFFSET(0x19D02C30)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_6B5B661EDF362777_OFFSET UNITYSDK_OFFSET(0x19CF4130)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_E4848C2294D35D19_OFFSET UNITYSDK_OFFSET(0x19D07E00)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_E59C0874F8ACB727_OFFSET UNITYSDK_OFFSET(0x19D07EC0)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF40E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAbilityTarget_TypeDefinitionIndex = 22592;

	class TargetFetchAbilityTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E4848C2294D35D19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_E4848C2294D35D19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B5B661EDF362777(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_6B5B661EDF362777_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FD313AAAC3EA8B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_1FD313AAAC3EA8B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E59C0874F8ACB727(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_METHOD_4_E59C0874F8ACB727_OFFSET))(a1, a2);
		}
	};
}

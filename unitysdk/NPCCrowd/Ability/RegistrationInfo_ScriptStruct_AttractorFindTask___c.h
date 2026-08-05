#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORFINDTASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE5596A0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORFINDTASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE5596E0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORFINDTASK___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xE5596F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_AttractorFindTask___c_TypeDefinitionIndex = 46176;

	class RegistrationInfo_ScriptStruct_AttractorFindTask___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_AttractorFindTask___c** StaticGet___9()
		{
			return (::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_AttractorFindTask___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AttractorFindTask___c_TypeDefinitionIndex)->GetStaticField(0x33900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORFINDTASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORFINDTASK___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORFINDTASK___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}

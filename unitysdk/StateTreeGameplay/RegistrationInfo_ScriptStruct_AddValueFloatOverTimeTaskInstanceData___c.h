#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3E8F50)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E8F90)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C3E8FA0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData___c_TypeDefinitionIndex = 86287;

	class RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTaskInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x497B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__8_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA___C___CCTOR_B__8_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC67510)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC67550)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EC67560)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData___c_TypeDefinitionIndex = 58466;

	class RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTaskInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x479B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__7_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA___C___CCTOR_B__7_0_OFFSET))(this);
		}
	};
}

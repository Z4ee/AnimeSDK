#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C13E020)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13E060)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C13E070)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask___c_TypeDefinitionIndex = 89071;

	class RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTask___c_TypeDefinitionIndex)->GetStaticField(0x41260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__6_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASK___C___CCTOR_B__6_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C13E100)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13E140)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C13E150)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData___c_TypeDefinitionIndex = 51546;

	class RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x41270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__4_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}

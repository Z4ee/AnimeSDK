#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C52D860)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C52D8A0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C52D8B0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration___c_TypeDefinitionIndex = 28440;

	class RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration___c_TypeDefinitionIndex)->GetStaticField(0x21970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__5_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION___C___CCTOR_B__5_0_OFFSET))(this);
		}
	};
}

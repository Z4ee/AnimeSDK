#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC1A740)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1A780)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE___C___CCTOR_B__10_0_OFFSET UNITYSDK_OFFSET(0x1FC1A790)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeTaskBase___c_TypeDefinitionIndex = 31678;

	class RegistrationInfo_ScriptStruct_StateTreeTaskBase___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeTaskBase___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeTaskBase___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase___c_TypeDefinitionIndex)->GetStaticField(0x263E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__10_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE___C___CCTOR_B__10_0_OFFSET))(this);
		}
	};
}

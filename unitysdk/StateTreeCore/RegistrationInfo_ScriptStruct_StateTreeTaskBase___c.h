#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5089C0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C508A00)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREETASKBASE___C___CCTOR_B__10_0_OFFSET UNITYSDK_OFFSET(0x1C508A10)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeTaskBase___c_TypeDefinitionIndex = 28404;

	class RegistrationInfo_ScriptStruct_StateTreeTaskBase___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeTaskBase___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeTaskBase___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeTaskBase___c_TypeDefinitionIndex)->GetStaticField(0x20F20);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85FE20)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E85FE60)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1E85FE70)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeNodeBase___c_TypeDefinitionIndex = 30992;

	class RegistrationInfo_ScriptStruct_StateTreeNodeBase___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeNodeBase___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeNodeBase___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeNodeBase___c_TypeDefinitionIndex)->GetStaticField(0x25670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__7_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREENODEBASE___C___CCTOR_B__7_0_OFFSET))(this);
		}
	};
}

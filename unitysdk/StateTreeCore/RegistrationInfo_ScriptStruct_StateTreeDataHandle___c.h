#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78A3C0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78A400)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1E78A410)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeDataHandle___c_TypeDefinitionIndex = 31093;

	class RegistrationInfo_ScriptStruct_StateTreeDataHandle___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeDataHandle___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeDataHandle___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle___c_TypeDefinitionIndex)->GetStaticField(0x253C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__7_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE___C___CCTOR_B__7_0_OFFSET))(this);
		}
	};
}

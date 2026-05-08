#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5B9C6A6280E9B7AE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_68C66897AA3438C2_METHOD_3_4BAA9842BDFA85A4_OFFSET UNITYSDK_OFFSET(0x138F89D0)
#define CLASS_3_68C66897AA3438C2_METHOD_3_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x138F8B80)
#define CLASS_3_68C66897AA3438C2__CTOR_OFFSET UNITYSDK_OFFSET(0x138F8920)

inline static constexpr unsigned int Class_3_68C66897AA3438C2_TypeDefinitionIndex = 72279;

class Class_3_68C66897AA3438C2 : public ::Class_2_5B9C6A6280E9B7AE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_68C66897AA3438C2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_4BAA9842BDFA85A4(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_68C66897AA3438C2_METHOD_3_4BAA9842BDFA85A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_68C66897AA3438C2_METHOD_3_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}
};

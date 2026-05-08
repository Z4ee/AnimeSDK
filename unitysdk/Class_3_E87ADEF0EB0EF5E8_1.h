#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5B9C6A6280E9B7AE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_E87ADEF0EB0EF5E8_1_METHOD_3_15FBB8D417D47F10_OFFSET UNITYSDK_OFFSET(0x132CF9A0)
#define CLASS_3_E87ADEF0EB0EF5E8_1_METHOD_3_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x132CFBB0)
#define CLASS_3_E87ADEF0EB0EF5E8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x132CF8F0)

inline static constexpr unsigned int Class_3_E87ADEF0EB0EF5E8_1_TypeDefinitionIndex = 74973;

class Class_3_E87ADEF0EB0EF5E8_1 : public ::Class_2_5B9C6A6280E9B7AE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_E87ADEF0EB0EF5E8_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_15FBB8D417D47F10(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E87ADEF0EB0EF5E8_1_METHOD_3_15FBB8D417D47F10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E87ADEF0EB0EF5E8_1_METHOD_3_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}
};

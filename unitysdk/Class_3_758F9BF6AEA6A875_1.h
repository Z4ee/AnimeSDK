#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_1_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x123CFB20)
#define CLASS_3_758F9BF6AEA6A875_1_METHOD_3_C897539747E686AC_OFFSET UNITYSDK_OFFSET(0x123CF8F0)
#define CLASS_3_758F9BF6AEA6A875_1__CTOR_OFFSET UNITYSDK_OFFSET(0x123CF8E0)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_1_TypeDefinitionIndex = 40309;

class Class_3_758F9BF6AEA6A875_1 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_C897539747E686AC(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_1_METHOD_3_C897539747E686AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_1_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

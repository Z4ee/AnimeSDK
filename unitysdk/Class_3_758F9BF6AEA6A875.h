#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0xDB4DE90)
#define CLASS_3_758F9BF6AEA6A875_METHOD_3_8453CE2C39B6F38C_OFFSET UNITYSDK_OFFSET(0xDB4DB80)
#define CLASS_3_758F9BF6AEA6A875__CTOR_OFFSET UNITYSDK_OFFSET(0xDB4DB70)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_TypeDefinitionIndex = 40434;

class Class_3_758F9BF6AEA6A875 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_8453CE2C39B6F38C(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_METHOD_3_8453CE2C39B6F38C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

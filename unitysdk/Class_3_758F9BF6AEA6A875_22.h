#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_22_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0xE4D70C0)
#define CLASS_3_758F9BF6AEA6A875_22_METHOD_3_B5C3FEFD7DA82C08_OFFSET UNITYSDK_OFFSET(0xE4D6F30)
#define CLASS_3_758F9BF6AEA6A875_22__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D6F20)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_22_TypeDefinitionIndex = 70261;

class Class_3_758F9BF6AEA6A875_22 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_22__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_B5C3FEFD7DA82C08(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_22_METHOD_3_B5C3FEFD7DA82C08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_22_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

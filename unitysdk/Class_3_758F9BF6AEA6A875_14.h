#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_14_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x156F5090)
#define CLASS_3_758F9BF6AEA6A875_14_METHOD_3_B5C3FEFD7DA82C08_OFFSET UNITYSDK_OFFSET(0x156F4F00)
#define CLASS_3_758F9BF6AEA6A875_14__CTOR_OFFSET UNITYSDK_OFFSET(0x156F4EF0)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_14_TypeDefinitionIndex = 54745;

class Class_3_758F9BF6AEA6A875_14 : public ::Class_2_76B74AA768347996
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_14__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_B5C3FEFD7DA82C08(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_14_METHOD_3_B5C3FEFD7DA82C08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_14_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

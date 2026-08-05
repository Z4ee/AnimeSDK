#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_1_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x147890E0)
#define CLASS_3_758F9BF6AEA6A875_1_METHOD_3_665904E4E791279B_OFFSET UNITYSDK_OFFSET(0x14788F30)
#define CLASS_3_758F9BF6AEA6A875_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14788F20)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_1_TypeDefinitionIndex = 42180;

class Class_3_758F9BF6AEA6A875_1 : public ::Class_2_76B74AA768347996
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_665904E4E791279B(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_1_METHOD_3_665904E4E791279B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_1_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

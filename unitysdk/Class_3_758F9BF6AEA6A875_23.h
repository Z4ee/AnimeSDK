#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_23_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x12A05280)
#define CLASS_3_758F9BF6AEA6A875_23_METHOD_3_665904E4E791279B_OFFSET UNITYSDK_OFFSET(0x12A05040)
#define CLASS_3_758F9BF6AEA6A875_23__CTOR_OFFSET UNITYSDK_OFFSET(0x12A05030)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_23_TypeDefinitionIndex = 70673;

class Class_3_758F9BF6AEA6A875_23 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_23__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_665904E4E791279B(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_23_METHOD_3_665904E4E791279B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_23_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

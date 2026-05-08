#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_24_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x12489260)
#define CLASS_3_758F9BF6AEA6A875_24_METHOD_3_ECF1B0373BCC464E_OFFSET UNITYSDK_OFFSET(0x12488AD0)
#define CLASS_3_758F9BF6AEA6A875_24__CTOR_OFFSET UNITYSDK_OFFSET(0x12488AC0)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_24_TypeDefinitionIndex = 71166;

class Class_3_758F9BF6AEA6A875_24 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_24__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_ECF1B0373BCC464E(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_24_METHOD_3_ECF1B0373BCC464E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_24_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

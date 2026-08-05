#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_9_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x16B02BE0)
#define CLASS_3_758F9BF6AEA6A875_9_METHOD_3_C897539747E686AC_OFFSET UNITYSDK_OFFSET(0x16B029B0)
#define CLASS_3_758F9BF6AEA6A875_9__CTOR_OFFSET UNITYSDK_OFFSET(0x16B029A0)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_9_TypeDefinitionIndex = 45458;

class Class_3_758F9BF6AEA6A875_9 : public ::Class_2_76B74AA768347996
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_C897539747E686AC(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_9_METHOD_3_C897539747E686AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_9_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

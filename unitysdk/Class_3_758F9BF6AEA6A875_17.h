#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_17_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x12ED01E0)
#define CLASS_3_758F9BF6AEA6A875_17_METHOD_3_F660DF88A8DC0100_OFFSET UNITYSDK_OFFSET(0x12ECFEE0)
#define CLASS_3_758F9BF6AEA6A875_17__CTOR_OFFSET UNITYSDK_OFFSET(0x12ECFED0)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_17_TypeDefinitionIndex = 64138;

class Class_3_758F9BF6AEA6A875_17 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_17__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_F660DF88A8DC0100(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_17_METHOD_3_F660DF88A8DC0100_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_17_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

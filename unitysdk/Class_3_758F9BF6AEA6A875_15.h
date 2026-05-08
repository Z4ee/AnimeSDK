#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_15_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x16C431C0)
#define CLASS_3_758F9BF6AEA6A875_15_METHOD_3_D9FF4AD376B27FFE_OFFSET UNITYSDK_OFFSET(0x16C43130)
#define CLASS_3_758F9BF6AEA6A875_15__CTOR_OFFSET UNITYSDK_OFFSET(0x16C43120)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_15_TypeDefinitionIndex = 63771;

class Class_3_758F9BF6AEA6A875_15 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_15__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_D9FF4AD376B27FFE(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_15_METHOD_3_D9FF4AD376B27FFE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_15_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

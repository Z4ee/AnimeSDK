#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_EBE308E4B5055E6D_1_METHOD_3_3450940FD6179289_OFFSET UNITYSDK_OFFSET(0x111CE2F0)
#define CLASS_3_EBE308E4B5055E6D_1_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x111CE820)
#define CLASS_3_EBE308E4B5055E6D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x111CE2E0)

inline static constexpr unsigned int Class_3_EBE308E4B5055E6D_1_TypeDefinitionIndex = 64135;

class Class_3_EBE308E4B5055E6D_1 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_EBE308E4B5055E6D_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_3450940FD6179289(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EBE308E4B5055E6D_1_METHOD_3_3450940FD6179289_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EBE308E4B5055E6D_1_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_82CFFD142F1EBB1A_METHOD_3_384BB1C2D8D551DB_OFFSET UNITYSDK_OFFSET(0x11441190)
#define CLASS_3_82CFFD142F1EBB1A_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x114414E0)
#define CLASS_3_82CFFD142F1EBB1A__CTOR_OFFSET UNITYSDK_OFFSET(0x11441180)

inline static constexpr unsigned int Class_3_82CFFD142F1EBB1A_TypeDefinitionIndex = 57155;

class Class_3_82CFFD142F1EBB1A : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_82CFFD142F1EBB1A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_384BB1C2D8D551DB(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_82CFFD142F1EBB1A_METHOD_3_384BB1C2D8D551DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_82CFFD142F1EBB1A_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

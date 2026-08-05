#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_04960D4DB9C6BAD4_METHOD_3_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x15B59D50)
#define CLASS_3_04960D4DB9C6BAD4_METHOD_3_23AFA19AE823C3CE_OFFSET UNITYSDK_OFFSET(0x15B595F0)
#define CLASS_3_04960D4DB9C6BAD4_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x15B59CB0)
#define CLASS_3_04960D4DB9C6BAD4_METHOD_3_EEF4B7F98C2E56E0_OFFSET UNITYSDK_OFFSET(0x15B59BB0)
#define CLASS_3_04960D4DB9C6BAD4__CTOR_OFFSET UNITYSDK_OFFSET(0x15B595E0)

inline static constexpr unsigned int Class_3_04960D4DB9C6BAD4_TypeDefinitionIndex = 51356;

class Class_3_04960D4DB9C6BAD4 : public ::Class_2_76B74AA768347996
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_04960D4DB9C6BAD4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_23AFA19AE823C3CE(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_04960D4DB9C6BAD4_METHOD_3_23AFA19AE823C3CE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_EEF4B7F98C2E56E0(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_04960D4DB9C6BAD4_METHOD_3_EEF4B7F98C2E56E0_OFFSET))(this, a1);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_04960D4DB9C6BAD4_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_04DE4FBB293DFBD6(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_04960D4DB9C6BAD4_METHOD_3_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}
};

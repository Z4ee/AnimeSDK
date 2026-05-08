#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_EBE308E4B5055E6D_METHOD_3_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x13F94F60)
#define CLASS_3_EBE308E4B5055E6D_METHOD_3_3450940FD6179289_OFFSET UNITYSDK_OFFSET(0x13F93FA0)
#define CLASS_3_EBE308E4B5055E6D_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x13F94EC0)
#define CLASS_3_EBE308E4B5055E6D_METHOD_3_DED213D141D47C4F_OFFSET UNITYSDK_OFFSET(0x13F94D00)
#define CLASS_3_EBE308E4B5055E6D__CTOR_OFFSET UNITYSDK_OFFSET(0x13F93F90)

inline static constexpr unsigned int Class_3_EBE308E4B5055E6D_TypeDefinitionIndex = 44989;

class Class_3_EBE308E4B5055E6D : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_EBE308E4B5055E6D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_3450940FD6179289(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EBE308E4B5055E6D_METHOD_3_3450940FD6179289_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DED213D141D47C4F(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_EBE308E4B5055E6D_METHOD_3_DED213D141D47C4F_OFFSET))(this, a1);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EBE308E4B5055E6D_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_04DE4FBB293DFBD6(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_EBE308E4B5055E6D_METHOD_3_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_758F9BF6AEA6A875_30_METHOD_3_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x16539D50)
#define CLASS_3_758F9BF6AEA6A875_30_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x16539DF0)
#define CLASS_3_758F9BF6AEA6A875_30_METHOD_3_665904E4E791279B_OFFSET UNITYSDK_OFFSET(0x16539820)
#define CLASS_3_758F9BF6AEA6A875_30_METHOD_3_DED213D141D47C4F_OFFSET UNITYSDK_OFFSET(0x16539B90)
#define CLASS_3_758F9BF6AEA6A875_30__CTOR_OFFSET UNITYSDK_OFFSET(0x16539810)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_30_TypeDefinitionIndex = 77380;

class Class_3_758F9BF6AEA6A875_30 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_30__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_665904E4E791279B(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_30_METHOD_3_665904E4E791279B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DED213D141D47C4F(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_30_METHOD_3_DED213D141D47C4F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_04DE4FBB293DFBD6(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_30_METHOD_3_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_30_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System::Collections { class IEnumerator; }

#define CLASS_3_758F9BF6AEA6A875_4_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x171FD1B0)
#define CLASS_3_758F9BF6AEA6A875_4_METHOD_3_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x171FD130)
#define CLASS_3_758F9BF6AEA6A875_4_METHOD_3_665904E4E791279B_OFFSET UNITYSDK_OFFSET(0x171FCF50)
#define CLASS_3_758F9BF6AEA6A875_4__CTOR_OFFSET UNITYSDK_OFFSET(0x171FCF40)

inline static constexpr unsigned int Class_3_758F9BF6AEA6A875_4_TypeDefinitionIndex = 43977;

class Class_3_758F9BF6AEA6A875_4 : public ::Class_2_76B74AA768347996
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_665904E4E791279B(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_4_METHOD_3_665904E4E791279B_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_3_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_4_METHOD_3_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_758F9BF6AEA6A875_4_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};

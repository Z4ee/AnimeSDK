#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_10B60098A2F46A6F.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_D3C3824045B84ED6_1_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17D98C00)
#define CLASS_3_D3C3824045B84ED6_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D98BC0)
#define CLASS_3_D3C3824045B84ED6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D98B80)

inline static constexpr unsigned int Class_3_D3C3824045B84ED6_1_TypeDefinitionIndex = 44429;

class Class_3_D3C3824045B84ED6_1 : public ::Class_2_10B60098A2F46A6F
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_1_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};

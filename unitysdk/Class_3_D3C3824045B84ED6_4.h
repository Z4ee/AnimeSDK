#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_10B60098A2F46A6F.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_D3C3824045B84ED6_4_METHOD_3_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x10124D00)
#define CLASS_3_D3C3824045B84ED6_4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10124E40)
#define CLASS_3_D3C3824045B84ED6_4__CTOR_OFFSET UNITYSDK_OFFSET(0x10124CC0)

inline static constexpr unsigned int Class_3_D3C3824045B84ED6_4_TypeDefinitionIndex = 42684;

class Class_3_D3C3824045B84ED6_4 : public ::Class_2_10B60098A2F46A6F
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_4_METHOD_3_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

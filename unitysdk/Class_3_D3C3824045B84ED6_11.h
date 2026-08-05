#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_10B60098A2F46A6F.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_D3C3824045B84ED6_11_METHOD_3_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x1754C5D0)
#define CLASS_3_D3C3824045B84ED6_11_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1754C710)
#define CLASS_3_D3C3824045B84ED6_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1754C590)

inline static constexpr unsigned int Class_3_D3C3824045B84ED6_11_TypeDefinitionIndex = 82897;

class Class_3_D3C3824045B84ED6_11 : public ::Class_2_10B60098A2F46A6F
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_11__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_11_METHOD_3_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_11_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

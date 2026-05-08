#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_10B60098A2F46A6F.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_D3C3824045B84ED6_3_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xDEE2C50)
#define CLASS_3_D3C3824045B84ED6_3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDEE2D40)
#define CLASS_3_D3C3824045B84ED6_3__CTOR_OFFSET UNITYSDK_OFFSET(0xDEE2C10)

inline static constexpr unsigned int Class_3_D3C3824045B84ED6_3_TypeDefinitionIndex = 40513;

class Class_3_D3C3824045B84ED6_3 : public ::Class_2_10B60098A2F46A6F
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_3_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

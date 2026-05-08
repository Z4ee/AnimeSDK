#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_10B60098A2F46A6F.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_D3C3824045B84ED6_7_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12A3F540)
#define CLASS_3_D3C3824045B84ED6_7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A3F7A0)
#define CLASS_3_D3C3824045B84ED6_7__CTOR_OFFSET UNITYSDK_OFFSET(0x12A3F500)

inline static constexpr unsigned int Class_3_D3C3824045B84ED6_7_TypeDefinitionIndex = 49397;

class Class_3_D3C3824045B84ED6_7 : public ::Class_2_10B60098A2F46A6F
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_7_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_10B60098A2F46A6F.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_D3C3824045B84ED6_2_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x17596510)
#define CLASS_3_D3C3824045B84ED6_2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17596600)
#define CLASS_3_D3C3824045B84ED6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x175964D0)

inline static constexpr unsigned int Class_3_D3C3824045B84ED6_2_TypeDefinitionIndex = 40303;

class Class_3_D3C3824045B84ED6_2 : public ::Class_2_10B60098A2F46A6F
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_2_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

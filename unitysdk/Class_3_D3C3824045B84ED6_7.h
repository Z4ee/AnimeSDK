#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_10B60098A2F46A6F.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_D3C3824045B84ED6_7_METHOD_3_2091F34306E68C88_OFFSET UNITYSDK_OFFSET(0x154101F0)
#define CLASS_3_D3C3824045B84ED6_7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154102E0)
#define CLASS_3_D3C3824045B84ED6_7__CTOR_OFFSET UNITYSDK_OFFSET(0x154101B0)

inline static constexpr unsigned int Class_3_D3C3824045B84ED6_7_TypeDefinitionIndex = 72767;

class Class_3_D3C3824045B84ED6_7 : public ::Class_2_10B60098A2F46A6F
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_2091F34306E68C88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_7_METHOD_3_2091F34306E68C88_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

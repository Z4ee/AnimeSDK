#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RegionExtension; }

#define CLASS_1_4086E331FEFBC044_METHOD_1_3F07C2A9C0D0F116_OFFSET UNITYSDK_OFFSET(0x180017C0)
#define CLASS_1_4086E331FEFBC044_METHOD_1_9D7F0EDAC14955B1_OFFSET UNITYSDK_OFFSET(0x180021C0)
#define CLASS_1_4086E331FEFBC044__CTOR_OFFSET UNITYSDK_OFFSET(0x180017B0)

inline static constexpr unsigned int Class_1_4086E331FEFBC044_TypeDefinitionIndex = 65480;

class Class_1_4086E331FEFBC044 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4086E331FEFBC044__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_3F07C2A9C0D0F116(::MoleMole::RegionExtension* a1)
	{
		return ((::System::Void(*)(::MoleMole::RegionExtension*))((::PBYTE)hIl2Cpp + CLASS_1_4086E331FEFBC044_METHOD_1_3F07C2A9C0D0F116_OFFSET))(a1);
	}

	static ::System::Void Method_1_9D7F0EDAC14955B1(::MoleMole::RegionExtension* a1)
	{
		return ((::System::Void(*)(::MoleMole::RegionExtension*))((::PBYTE)hIl2Cpp + CLASS_1_4086E331FEFBC044_METHOD_1_9D7F0EDAC14955B1_OFFSET))(a1);
	}
};

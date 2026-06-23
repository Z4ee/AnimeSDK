#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C3E5AF96E93F7282.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_24CFA196D6CAF3C5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18FCD5D0)
#define CLASS_1_24CFA196D6CAF3C5_METHOD_1_4367ABB6EEF37BC1_OFFSET UNITYSDK_OFFSET(0x18FCD5F0)
#define CLASS_1_24CFA196D6CAF3C5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18FCD5E0)
#define CLASS_1_24CFA196D6CAF3C5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18FCD5C0)
#define CLASS_1_24CFA196D6CAF3C5__CTOR_OFFSET UNITYSDK_OFFSET(0x18FCD630)

inline static constexpr unsigned int Class_1_24CFA196D6CAF3C5_TypeDefinitionIndex = 73641;

class Class_1_24CFA196D6CAF3C5 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Nullable_1<::System::Boolean> Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CFA196D6CAF3C5__CTOR_OFFSET))(this);
	}

	::Enum_3_C3E5AF96E93F7282 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_C3E5AF96E93F7282(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CFA196D6CAF3C5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CFA196D6CAF3C5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24CFA196D6CAF3C5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Boolean> Method_1_4367ABB6EEF37BC1()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CFA196D6CAF3C5_METHOD_1_4367ABB6EEF37BC1_OFFSET))(this);
	}
};

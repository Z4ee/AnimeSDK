#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_BB1B4186BE9F4D64_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1874F930)
#define CLASS_2_BB1B4186BE9F4D64_1_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x1874FB80)
#define CLASS_2_BB1B4186BE9F4D64_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1874FB40)
#define CLASS_2_BB1B4186BE9F4D64_1_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1874F940)
#define CLASS_2_BB1B4186BE9F4D64_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1874FC40)

inline static constexpr unsigned int Class_2_BB1B4186BE9F4D64_1_TypeDefinitionIndex = 53601;

class Class_2_BB1B4186BE9F4D64_1 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_1_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_1_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

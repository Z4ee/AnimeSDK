#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_BB1B4186BE9F4D64_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1684C210)
#define CLASS_2_BB1B4186BE9F4D64_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x1684C460)
#define CLASS_2_BB1B4186BE9F4D64_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1684C420)
#define CLASS_2_BB1B4186BE9F4D64_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1684C220)
#define CLASS_2_BB1B4186BE9F4D64__CTOR_OFFSET UNITYSDK_OFFSET(0x1684C520)

inline static constexpr unsigned int Class_2_BB1B4186BE9F4D64_TypeDefinitionIndex = 56314;

class Class_2_BB1B4186BE9F4D64 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* ICEPLFPKAHC; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
	::System::UInt32 CEGOPEIKDLA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

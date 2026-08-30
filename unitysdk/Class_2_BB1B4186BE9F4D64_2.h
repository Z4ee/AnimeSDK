#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_BB1B4186BE9F4D64_2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16154F40)
#define CLASS_2_BB1B4186BE9F4D64_2_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x161551B0)
#define CLASS_2_BB1B4186BE9F4D64_2_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x16154F50)
#define CLASS_2_BB1B4186BE9F4D64_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16155170)
#define CLASS_2_BB1B4186BE9F4D64_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16155290)

inline static constexpr unsigned int Class_2_BB1B4186BE9F4D64_2_TypeDefinitionIndex = 56322;

class Class_2_BB1B4186BE9F4D64_2 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* FCOOFCJFFNP; // 0x10
	::System::String* BBMMBAKDJBC; // 0x18
	::System::UInt32 BOKJJKFCFME; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_2_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_2_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_2_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB1B4186BE9F4D64_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_BB1B4186BE9F4D64_2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x179CCFE0)
#define CLASS_2_BB1B4186BE9F4D64_2_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x179CD250)
#define CLASS_2_BB1B4186BE9F4D64_2_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x179CCFF0)
#define CLASS_2_BB1B4186BE9F4D64_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x179CD210)
#define CLASS_2_BB1B4186BE9F4D64_2__CTOR_OFFSET UNITYSDK_OFFSET(0x179CD330)

inline static constexpr unsigned int Class_2_BB1B4186BE9F4D64_2_TypeDefinitionIndex = 53608;

class Class_2_BB1B4186BE9F4D64_2 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20
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

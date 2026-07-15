#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_5EC82700898B9861_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16CF4C90)
#define CLASS_2_5EC82700898B9861_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x16CF4FF0)
#define CLASS_2_5EC82700898B9861_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16CF4FB0)
#define CLASS_2_5EC82700898B9861_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x16CF4CA0)
#define CLASS_2_5EC82700898B9861__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF51D0)

inline static constexpr unsigned int Class_2_5EC82700898B9861_TypeDefinitionIndex = 53580;

class Class_2_5EC82700898B9861 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
	::System::Byte Field_2_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

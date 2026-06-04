#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A1DFE1822B872F8.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_D2D622072C8F0C9C_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xAB7BF60)
#define CLASS_2_D2D622072C8F0C9C_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xAB7C2C0)
#define CLASS_2_D2D622072C8F0C9C_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAB7C560)
#define CLASS_2_D2D622072C8F0C9C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAB7C4F0)
#define CLASS_2_D2D622072C8F0C9C_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xAB7C4E0)
#define CLASS_2_D2D622072C8F0C9C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB7C280)
#define CLASS_2_D2D622072C8F0C9C_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xAB7BF70)
#define CLASS_2_D2D622072C8F0C9C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7C4D0)

inline static constexpr unsigned int Class_2_D2D622072C8F0C9C_TypeDefinitionIndex = 52376;

class Class_2_D2D622072C8F0C9C : public ::Class_1_6A1DFE1822B872F8
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::System::Byte Field_2_4; // 0x28
	::System::Int32 Field_2_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D622072C8F0C9C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D622072C8F0C9C_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D622072C8F0C9C_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D622072C8F0C9C_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D622072C8F0C9C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D622072C8F0C9C_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D622072C8F0C9C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D622072C8F0C9C_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};

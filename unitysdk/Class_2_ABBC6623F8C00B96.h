#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_ABBC6623F8C00B96_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17852D40)
#define CLASS_2_ABBC6623F8C00B96_METHOD_2_2A06FF69BDFDBD4F_OFFSET UNITYSDK_OFFSET(0x17853000)
#define CLASS_2_ABBC6623F8C00B96_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x178530C0)
#define CLASS_2_ABBC6623F8C00B96_METHOD_2_E041300CFBBD9160_OFFSET UNITYSDK_OFFSET(0x17852D50)
#define CLASS_2_ABBC6623F8C00B96__CTOR_OFFSET UNITYSDK_OFFSET(0x178531C0)

inline static constexpr unsigned int Class_2_ABBC6623F8C00B96_TypeDefinitionIndex = 53590;

class Class_2_ABBC6623F8C00B96 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABBC6623F8C00B96__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABBC6623F8C00B96_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_E041300CFBBD9160()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABBC6623F8C00B96_METHOD_2_E041300CFBBD9160_OFFSET))(this);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABBC6623F8C00B96_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_2_2A06FF69BDFDBD4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABBC6623F8C00B96_METHOD_2_2A06FF69BDFDBD4F_OFFSET))(this);
	}
};

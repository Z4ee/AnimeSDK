#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_ABBC6623F8C00B96_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB5B6E30)
#define CLASS_2_ABBC6623F8C00B96_METHOD_2_2A06FF69BDFDBD4F_OFFSET UNITYSDK_OFFSET(0xB5B70F0)
#define CLASS_2_ABBC6623F8C00B96_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xB5B71B0)
#define CLASS_2_ABBC6623F8C00B96_METHOD_2_E041300CFBBD9160_OFFSET UNITYSDK_OFFSET(0xB5B6E40)
#define CLASS_2_ABBC6623F8C00B96__CTOR_OFFSET UNITYSDK_OFFSET(0xB5B72B0)

inline static constexpr unsigned int Class_2_ABBC6623F8C00B96_TypeDefinitionIndex = 56117;

class Class_2_ABBC6623F8C00B96 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* BHLPBOBCJFK; // 0x10
	::System::String* DINBCKPJJEL; // 0x18
	::System::String* KBKOGLCAEKG; // 0x20
	::System::String* PMGPFPNHJAA; // 0x28
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

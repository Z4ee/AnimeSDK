#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_171F9D986BE70A7F.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"

class Class_1_81F53C7C543C5D72;
namespace System { class String; }

#define CLASS_2_00671EEC42FB2B53_METHOD_2_12FE4673A6310804_OFFSET UNITYSDK_OFFSET(0xA740F90)
#define CLASS_2_00671EEC42FB2B53_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xA740FF0)
#define CLASS_2_00671EEC42FB2B53_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA741040)
#define CLASS_2_00671EEC42FB2B53__CTOR_OFFSET UNITYSDK_OFFSET(0xA740F80)
#define CLASS_2_00671EEC42FB2B53___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA741100)

inline static constexpr unsigned int Class_2_00671EEC42FB2B53_TypeDefinitionIndex = 59944;

class Class_2_00671EEC42FB2B53 : public ::Class_1_171F9D986BE70A7F
{
public:
	::Class_1_81F53C7C543C5D72* Field_2_0; // 0x10
	::RPG::GameCore::FateLevelParamType Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::FateLevelParamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateLevelParamType))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_12FE4673A6310804()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53_METHOD_2_12FE4673A6310804_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_81F53C7C543C5D72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_81F53C7C543C5D72*))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};

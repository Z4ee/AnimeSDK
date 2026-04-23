#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_171F9D986BE70A7F.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"

class Class_1_5B1D050D81192A0F;
namespace System { class String; }

#define CLASS_2_00671EEC42FB2B53_METHOD_2_131AC718CA83068D_OFFSET UNITYSDK_OFFSET(0x9A011F0)
#define CLASS_2_00671EEC42FB2B53_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x9A01250)
#define CLASS_2_00671EEC42FB2B53_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A012A0)
#define CLASS_2_00671EEC42FB2B53__CTOR_OFFSET UNITYSDK_OFFSET(0x9A011E0)
#define CLASS_2_00671EEC42FB2B53___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A01360)

inline static constexpr unsigned int Class_2_00671EEC42FB2B53_TypeDefinitionIndex = 59014;

class Class_2_00671EEC42FB2B53 : public ::Class_1_171F9D986BE70A7F
{
public:
	::Class_1_5B1D050D81192A0F* Field_2_1; // 0x10
	::RPG::GameCore::FateLevelParamType Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::FateLevelParamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateLevelParamType))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_131AC718CA83068D()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53_METHOD_2_131AC718CA83068D_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_5B1D050D81192A0F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B1D050D81192A0F*))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
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

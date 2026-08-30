#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_171F9D986BE70A7F.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"

class Class_1_F9FBCC956DFCF137_19;
namespace System { class String; }

#define CLASS_2_00671EEC42FB2B53_METHOD_2_7A69EC12677DB3D3_OFFSET UNITYSDK_OFFSET(0xBA3B1C0)
#define CLASS_2_00671EEC42FB2B53_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xBA3B220)
#define CLASS_2_00671EEC42FB2B53_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBA3B270)
#define CLASS_2_00671EEC42FB2B53__CTOR_OFFSET UNITYSDK_OFFSET(0xBA3B1B0)

inline static constexpr unsigned int Class_2_00671EEC42FB2B53_TypeDefinitionIndex = 64210;

class Class_2_00671EEC42FB2B53 : public ::Class_1_171F9D986BE70A7F
{
public:
	::Class_1_F9FBCC956DFCF137_19* COKDGBEABHP; // 0x10
	::RPG::GameCore::FateLevelParamType KECDAFAFJFA; // 0x18

	::System::Void _ctor(::RPG::GameCore::FateLevelParamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateLevelParamType))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_7A69EC12677DB3D3()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53_METHOD_2_7A69EC12677DB3D3_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_F9FBCC956DFCF137_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_19*))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00671EEC42FB2B53_TOSTRING_OFFSET))(this);
	}
};

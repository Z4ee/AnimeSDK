#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_32ECD853F7E416E3_METHOD_2_0A515C1C101D7A3B_OFFSET UNITYSDK_OFFSET(0x3B92B10)
#define STRUCT_2_32ECD853F7E416E3_METHOD_2_21B7C8D080A6A766_OFFSET UNITYSDK_OFFSET(0x3B92B80)

inline static constexpr unsigned int Struct_2_32ECD853F7E416E3_TypeDefinitionIndex = 6245;

struct alignas(4) Struct_2_32ECD853F7E416E3
{
	::Dest::Math::IntersectionTypes DLMLMAGCHJK; // 0x10
	::Dest::Math::IntersectionTypes GMFBKGEACCL; // 0x14
	::System::Boolean GOJIFBNIMBI; // 0x18
	::System::Int32 LLAODKFHDOD; // 0x1C
	::RPG::MVector3 CPFJGMEMLGM; // 0x20
	::RPG::MVector3 BOHPLLMNCHE; // 0x2C
	::RPG::MVector3 FJIOOLKFJPL; // 0x38
	::RPG::MVector3 NDNEOOIPNAC; // 0x44
	::RPG::MVector3 IKOJENBMLGO; // 0x50
	::RPG::MVector3 MOOIFDBKPOD; // 0x5C

	::RPG::MVector3 Method_2_0A515C1C101D7A3B(::System::Int32 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_32ECD853F7E416E3_METHOD_2_0A515C1C101D7A3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_21B7C8D080A6A766(::System::Int32 a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_32ECD853F7E416E3_METHOD_2_21B7C8D080A6A766_OFFSET))(this, a1, a2);
	}
};

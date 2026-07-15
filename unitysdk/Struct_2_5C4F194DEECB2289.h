#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_066AB55B5826B0C9;

#define STRUCT_2_5C4F194DEECB2289_METHOD_2_2188D65D89E63CD4_1_OFFSET UNITYSDK_OFFSET(0x1A4730C0)
#define STRUCT_2_5C4F194DEECB2289_METHOD_2_2188D65D89E63CD4_OFFSET UNITYSDK_OFFSET(0x1A472FF0)
#define STRUCT_2_5C4F194DEECB2289_METHOD_2_9FCD8875B177BC0E_OFFSET UNITYSDK_OFFSET(0x1A472ED0)
#define STRUCT_2_5C4F194DEECB2289_METHOD_2_A5CEFBC2F1F2CC5A_OFFSET UNITYSDK_OFFSET(0x1A4731A0)

inline static constexpr unsigned int Struct_2_5C4F194DEECB2289_TypeDefinitionIndex = 40474;

struct alignas(8) Struct_2_5C4F194DEECB2289
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::Class_1_066AB55B5826B0C9* Field_2_2; // 0x18
	::RPG::GameCore::Match3::BombType Field_2_3; // 0x20
	::System::UInt32 Field_2_4; // 0x24
	::System::Boolean Field_2_5; // 0x28
	::RPG::GameCore::Match3::BombType Field_2_6; // 0x2C
	::System::Boolean Field_2_7; // 0x30
	::System::UInt32 Field_2_8; // 0x34
	::System::UInt32 Field_2_9; // 0x38

	static ::Struct_2_5C4F194DEECB2289 Method_2_9FCD8875B177BC0E(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_066AB55B5826B0C9* a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::Boolean a6, ::RPG::GameCore::Match3::BombType a7, ::System::UInt32 a8, ::System::UInt32 a9)
	{
		return ((::Struct_2_5C4F194DEECB2289(*)(::System::UInt32, ::System::UInt32, ::Class_1_066AB55B5826B0C9*, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_5C4F194DEECB2289_METHOD_2_9FCD8875B177BC0E_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::Struct_2_5C4F194DEECB2289 Method_2_2188D65D89E63CD4(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_066AB55B5826B0C9* a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::Struct_2_5C4F194DEECB2289(*)(::System::UInt32, ::System::UInt32, ::Class_1_066AB55B5826B0C9*, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_5C4F194DEECB2289_METHOD_2_2188D65D89E63CD4_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Struct_2_5C4F194DEECB2289 Method_2_2188D65D89E63CD4_1(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_066AB55B5826B0C9* a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::Struct_2_5C4F194DEECB2289(*)(::System::UInt32, ::System::UInt32, ::Class_1_066AB55B5826B0C9*, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_5C4F194DEECB2289_METHOD_2_2188D65D89E63CD4_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Struct_2_5C4F194DEECB2289 Method_2_A5CEFBC2F1F2CC5A(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_066AB55B5826B0C9* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::Struct_2_5C4F194DEECB2289(*)(::System::UInt32, ::System::UInt32, ::Class_1_066AB55B5826B0C9*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_5C4F194DEECB2289_METHOD_2_A5CEFBC2F1F2CC5A_OFFSET))(a1, a2, a3, a4, a5);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class CharacterAimControlConfig; }

#define STRUCT_2_8F09B36EC2E2FB2D_METHOD_2_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0x730EE0)
#define STRUCT_2_8F09B36EC2E2FB2D_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x11BE8AC0)
#define STRUCT_2_8F09B36EC2E2FB2D_METHOD_2_8DBF80D8758E68B9_OFFSET UNITYSDK_OFFSET(0x730F40)

inline static constexpr unsigned int Struct_2_8F09B36EC2E2FB2D_TypeDefinitionIndex = 52393;

struct alignas(4) Struct_2_8F09B36EC2E2FB2D
{
	::Enum_3_A019F766F8C74696 Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x14
	::UnityEngine::Vector2 Field_2_2; // 0x1C
	::UnityEngine::Vector2 Field_2_3; // 0x24
	::System::Boolean Field_2_4; // 0x2C
	::System::Single Field_2_5; // 0x30
	::System::Single Field_2_6; // 0x34
	::System::Boolean Field_2_7; // 0x38
	::UnityEngine::Vector2 Field_2_8; // 0x3C

	::System::Void Method_2_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_8F09B36EC2E2FB2D_METHOD_2_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}

	/*
	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_8DBF80D8758E68B9(::MoleMole::Config::CharacterAimControlConfig* a1, ::System::Single a2)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::MoleMole::Config::CharacterAimControlConfig*, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_8F09B36EC2E2FB2D_METHOD_2_8DBF80D8758E68B9_OFFSET))(this, a1, a2);
	}
	*/

	static ::Struct_2_8F09B36EC2E2FB2D Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_8F09B36EC2E2FB2D(*)())((::PBYTE)hIl2Cpp + STRUCT_2_8F09B36EC2E2FB2D_METHOD_2_71E25A039EF7FB83_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CharacterLineLightGroup_CLLG_Point;

#define CHARACTERLINELIGHTGROUP_CLLG_LINE_METHOD_1_F54DE4640CE99063_OFFSET UNITYSDK_OFFSET(0xDDAA4D0)
#define CHARACTERLINELIGHTGROUP_CLLG_LINE__CTOR_OFFSET UNITYSDK_OFFSET(0xDDAA140)

inline static constexpr unsigned int CharacterLineLightGroup_CLLG_Line_TypeDefinitionIndex = 47923;

class CharacterLineLightGroup_CLLG_Line : public ::System::Object
{
public:
	::System::Int32 P1; // 0x10
	::System::Int32 P2; // 0x14
	::CharacterLineLightGroup_CLLG_Point* EditorP1; // 0x18
	::CharacterLineLightGroup_CLLG_Point* EditorP2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CLLG_LINE__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F54DE4640CE99063(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CLLG_LINE_METHOD_1_F54DE4640CE99063_OFFSET))(this, a1);
	}
};

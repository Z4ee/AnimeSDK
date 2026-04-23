#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UITransitionAnimType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_82A1455F3BBBFC10__CTOR_OFFSET UNITYSDK_OFFSET(0x74D60)

inline static constexpr unsigned int Struct_2_82A1455F3BBBFC10_TypeDefinitionIndex = 67338;

struct alignas(4) Struct_2_82A1455F3BBBFC10
{
	::RPG::Client::UITransitionAnimType Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x15
	::System::Boolean Field_2_3; // 0x16
	::System::Boolean Field_2_4; // 0x17
	::System::Boolean Field_2_5; // 0x18
	::System::Boolean Field_2_6; // 0x19

	::System::Void _ctor(::RPG::Client::UITransitionAnimType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UITransitionAnimType))((::PBYTE)hIl2Cpp + STRUCT_2_82A1455F3BBBFC10__CTOR_OFFSET))(this, a1);
	}
};

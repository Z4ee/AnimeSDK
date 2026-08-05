#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIAdataporRectTransform; }

#define STRUCT_2_D4602BB15CF6D7C1_METHOD_2_4153F7F31E7B0F36_OFFSET UNITYSDK_OFFSET(0x15C17BE0)
#define STRUCT_2_D4602BB15CF6D7C1_METHOD_2_A40DF800A5AB72CB_OFFSET UNITYSDK_OFFSET(0x832120)

inline static constexpr unsigned int Struct_2_D4602BB15CF6D7C1_TypeDefinitionIndex = 89916;

struct alignas(4) Struct_2_D4602BB15CF6D7C1
{
	::UnityEngine::Vector2 Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_7; // 0x18
	::UnityEngine::Vector2 Field_2_6; // 0x20
	::UnityEngine::Vector2 Field_2_5; // 0x28
	::UnityEngine::Vector2 Field_2_4; // 0x30
	::UnityEngine::Vector2 Field_2_11; // 0x38

	static ::Struct_2_D4602BB15CF6D7C1 Method_2_4153F7F31E7B0F36(::MoleMole::UIAdataporRectTransform* a1)
	{
		return ((::Struct_2_D4602BB15CF6D7C1(*)(::MoleMole::UIAdataporRectTransform*))((::PBYTE)hIl2Cpp + STRUCT_2_D4602BB15CF6D7C1_METHOD_2_4153F7F31E7B0F36_OFFSET))(a1);
	}

	::System::Void Method_2_A40DF800A5AB72CB(::MoleMole::UIAdataporRectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*))((::PBYTE)hIl2Cpp + STRUCT_2_D4602BB15CF6D7C1_METHOD_2_A40DF800A5AB72CB_OFFSET))(this, a1);
	}
};

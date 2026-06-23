#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define CLASS_1_4BB73BC1050D704C_METHOD_1_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x13BEA970)
#define CLASS_1_4BB73BC1050D704C_METHOD_1_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0x13BEA400)
#define CLASS_1_4BB73BC1050D704C_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x13BEAA90)
#define CLASS_1_4BB73BC1050D704C_METHOD_1_A45A820EF9D1A2A1_OFFSET UNITYSDK_OFFSET(0x13BEACC0)
#define CLASS_1_4BB73BC1050D704C__CTOR_OFFSET UNITYSDK_OFFSET(0x13BEA3A0)

inline static constexpr unsigned int Class_1_4BB73BC1050D704C_TypeDefinitionIndex = 51186;

class Class_1_4BB73BC1050D704C : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_2; // 0x10
	::UnityEngine::UI::VerticalLayoutGroup* Field_1_10; // 0x18
	::UnityEngine::UI::ContentSizeFitter* Field_1_9; // 0x20
	::UnityEngine::RectTransform* Field_1_0; // 0x28
	::UnityEngine::UI::GridLayoutGroup* Field_1_1; // 0x30
	::UnityEngine::RectTransform* Field_1_8; // 0x38
	::UnityEngine::TextAnchor Field_1_6; // 0x40
	::System::Int32 Field_1_5; // 0x44
	::System::Boolean Field_1_3; // 0x48
	::UnityEngine::Vector2 Field_1_4; // 0x4C
	::System::Single Field_1_7; // 0x54

	::System::Void _ctor(::UnityEngine::RectTransform* a1, ::UnityEngine::UI::GridLayoutGroup* a2, ::UnityEngine::RectTransform* a3, ::UnityEngine::UI::ContentSizeFitter* a4, ::UnityEngine::UI::VerticalLayoutGroup* a5, ::UnityEngine::RectTransform* a6, ::System::Boolean a7, ::UnityEngine::Vector2 a8, ::System::Int32 a9, ::UnityEngine::TextAnchor a10, ::System::Single a11)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::UI::GridLayoutGroup*, ::UnityEngine::RectTransform*, ::UnityEngine::UI::ContentSizeFitter*, ::UnityEngine::UI::VerticalLayoutGroup*, ::UnityEngine::RectTransform*, ::System::Boolean, ::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::TextAnchor, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_1_78037B64B814568E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C_METHOD_1_78037B64B814568E_OFFSET))(this);
	}

	::System::Single Method_1_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C_METHOD_1_68A2CA32DC720C44_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	static ::System::Single Method_1_A45A820EF9D1A2A1(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C_METHOD_1_A45A820EF9D1A2A1_OFFSET))(a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_B4D062A3AA74182F;
namespace System { class String; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9D88160)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_D8F6D70D1D015823_OFFSET UNITYSDK_OFFSET(0x9D88260)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_E2B51C21E92F614C_OFFSET UNITYSDK_OFFSET(0x9D87680)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x9D874E0)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D88060)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9D88920)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int ManualCtrlTextMotion_TypeDefinitionIndex = 60260;

	class ManualCtrlTextMotion : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		// static const ::System::String* Field_7_10; // 0x0
		::System::Int32 visibleCharCount; // 0x20
		::System::Boolean enable; // 0x24
		::System::Boolean showOutline; // 0x25
		::UnityEngine::Color effectColor; // 0x28
		::UnityEngine::Vector2 effectDistance; // 0x38
		::System::Boolean useGraphicAlpha; // 0x40
		::UnityEngine::UI::Text* Field_7_6; // 0x48
		::Class_1_B4D062A3AA74182F* Field_7_7; // 0x50
		::System::Single Field_7_8; // 0x58
		::System::Boolean Field_7_9; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_MODIFYMESH_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_UPDATE_OFFSET))(this);
		}

		::System::Void Method_7_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_7_E2B51C21E92F614C(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Color a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Color, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_E2B51C21E92F614C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_7_D8F6D70D1D015823(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Color32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_D8F6D70D1D015823_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}

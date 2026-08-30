#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_57FDA42592C5189D;
namespace System { class String; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_17BB6E91B2585477_OFFSET UNITYSDK_OFFSET(0xD8BF710)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_AD6DFF3647AB2AE7_OFFSET UNITYSDK_OFFSET(0xD8BF080)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xD8BF5A0)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xD8BEEF0)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xD8BF430)
#define RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD8BF990)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int ManualCtrlTextMotion_TypeDefinitionIndex = 73434;

	class ManualCtrlTextMotion : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		// static const ::System::String* KHHLHOCDBBM; // 0x0
		::System::Int32 visibleCharCount; // 0x20
		::System::Boolean enable; // 0x24
		::System::Boolean showOutline; // 0x25
		::UnityEngine::Color effectColor; // 0x28
		::UnityEngine::Vector2 effectDistance; // 0x38
		::System::Boolean useGraphicAlpha; // 0x40
		::UnityEngine::UI::Text* PMGCDJEFFIL; // 0x48
		::Class_1_57FDA42592C5189D* BKIBLEGOACO; // 0x50
		::System::Single EMCGACPENFP; // 0x58
		::System::Boolean HDJOGGDMCIO; // 0x5C

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

		::System::Void Method_7_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_7_AD6DFF3647AB2AE7(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Color a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Color, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_AD6DFF3647AB2AE7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_7_17BB6E91B2585477(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Color32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MANUALCTRLTEXTMOTION_METHOD_7_17BB6E91B2585477_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}

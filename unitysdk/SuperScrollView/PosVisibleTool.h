#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xAC1F6A0)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLE_OFFSET UNITYSDK_OFFSET(0xAC1F760)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_SETRECTTRANSFORMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xAC1F4F0)
#define SUPERSCROLLVIEW_POSVISIBLETOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC1F940)

namespace SuperScrollView
{
	inline static constexpr unsigned int PosVisibleTool_TypeDefinitionIndex = 38499;

	class PosVisibleTool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_primeN2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PosVisibleTool_TypeDefinitionIndex)->GetStaticField(0x2BC0);
		}
		static ::System::Int32* StaticGet_primeN1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PosVisibleTool_TypeDefinitionIndex)->GetStaticField(0x2BC4);
		}
		static ::UnityEngine::Vector3* StaticGet__VeryFarPos()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(PosVisibleTool_TypeDefinitionIndex)->GetStaticField(0x2BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL__CCTOR_OFFSET))();
		}

		static ::System::Void SetRectTransformVisibleByPos(::UnityEngine::RectTransform* item, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_SETRECTTRANSFORMVISIBLEBYPOS_OFFSET))(item, visible);
		}

		static ::System::Boolean IsInvisibleByPos(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEBYPOS_OFFSET))(rectTransform);
		}

		static ::System::Boolean IsInvisible(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLE_OFFSET))(rectTransform);
		}
	};
}

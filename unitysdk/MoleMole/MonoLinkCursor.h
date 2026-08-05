#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOLINKCURSOR_GET_BOTTOMLEFT_OFFSET UNITYSDK_OFFSET(0x136DD8C0)
#define MOLEMOLE_MONOLINKCURSOR_GET_BOTTOMRIGHT_OFFSET UNITYSDK_OFFSET(0x136DD8D0)
#define MOLEMOLE_MONOLINKCURSOR_GET_REFERENCECORNERSIZE_OFFSET UNITYSDK_OFFSET(0x136DD880)
#define MOLEMOLE_MONOLINKCURSOR_GET_REFERENCEFONTSIZE_OFFSET UNITYSDK_OFFSET(0x136DD890)
#define MOLEMOLE_MONOLINKCURSOR_GET_TOPLEFT_OFFSET UNITYSDK_OFFSET(0x136DD8A0)
#define MOLEMOLE_MONOLINKCURSOR_GET_TOPRIGHT_OFFSET UNITYSDK_OFFSET(0x136DD8B0)
#define MOLEMOLE_MONOLINKCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x136DD8E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLinkCursor_TypeDefinitionIndex = 72670;

	class MonoLinkCursor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _referenceCornerSize; // 0x18
		::System::Single _referenceFontSize; // 0x1C
		::UnityEngine::RectTransform* _topLeft; // 0x20
		::UnityEngine::RectTransform* _topRight; // 0x28
		::UnityEngine::RectTransform* _bottomLeft; // 0x30
		::UnityEngine::RectTransform* _bottomRight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKCURSOR__CTOR_OFFSET))(this);
		}

		::System::Single get_ReferenceCornerSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKCURSOR_GET_REFERENCECORNERSIZE_OFFSET))(this);
		}

		::System::Single get_ReferenceFontSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKCURSOR_GET_REFERENCEFONTSIZE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_TopLeft()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKCURSOR_GET_TOPLEFT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_TopRight()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKCURSOR_GET_TOPRIGHT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_BottomLeft()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKCURSOR_GET_BOTTOMLEFT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_BottomRight()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKCURSOR_GET_BOTTOMRIGHT_OFFSET))(this);
		}
	};
}

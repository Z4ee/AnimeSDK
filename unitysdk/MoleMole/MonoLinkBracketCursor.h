#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_EDGEALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1163B110)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_LEFTBRACKETRT_OFFSET UNITYSDK_OFFSET(0x1163B120)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_REFERENCEFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1163B100)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_REFERENCEWIDTH_OFFSET UNITYSDK_OFFSET(0x1163B0F0)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_RIGHTBRACKETRT_OFFSET UNITYSDK_OFFSET(0x1163B130)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_SLICEMINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1163B3F0)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_SLICEMINWIDTH_OFFSET UNITYSDK_OFFSET(0x1163B140)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_METHOD_5_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1163B160)
#define MOLEMOLE_MONOLINKBRACKETCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1163B410)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLinkBracketCursor_TypeDefinitionIndex = 85514;

	class MonoLinkBracketCursor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _referenceWidth; // 0x18
		::System::Single _referenceFontSize; // 0x1C
		::System::Single _edgeAlignment; // 0x20
		::UnityEngine::RectTransform* _leftBracketRT; // 0x28
		::UnityEngine::RectTransform* _rightBracketRT; // 0x30
		::UnityEngine::UI::Image* _leftBracketImg; // 0x38
		::UnityEngine::UI::Image* _rightBracketImg; // 0x40
		::System::Single Field_5_7; // 0x48
		::System::Single Field_5_8; // 0x4C
		::System::Boolean Field_5_9; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR__CTOR_OFFSET))(this);
		}

		::System::Single get_ReferenceWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_REFERENCEWIDTH_OFFSET))(this);
		}

		::System::Single get_ReferenceFontSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_REFERENCEFONTSIZE_OFFSET))(this);
		}

		::System::Single get_EdgeAlignment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_EDGEALIGNMENT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_LeftBracketRT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_LEFTBRACKETRT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RightBracketRT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_RIGHTBRACKETRT_OFFSET))(this);
		}

		::System::Single get_SliceMinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_SLICEMINWIDTH_OFFSET))(this);
		}

		::System::Single get_SliceMinHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_SLICEMINHEIGHT_OFFSET))(this);
		}

		::System::Void Method_5_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_METHOD_5_7DB49B5407C8FD68_OFFSET))(this);
		}
	};
}

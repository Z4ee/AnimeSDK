#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xAF432A0)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xAF432E0)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0xAF43260)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0xAF43270)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0xAF43250)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0xAF43280)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0xAF43290)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0xAF431A0)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0xAF430F0)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0xAF43010)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0xAF42F30)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xAF43320)
#define RPG_CLIENT_RPGCOPYLAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAF43520)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCopyLayoutElement_TypeDefinitionIndex = 66927;

	class RPGCopyLayoutElement : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Boolean CopyMinHeight; // 0x18
		::System::Boolean CopyMinWidth; // 0x19
		::System::Boolean CopyPreferredHeight; // 0x1A
		::System::Boolean CopyPreferredWidth; // 0x1B
		::UnityEngine::RectTransform* CopySource; // 0x20
		::System::Boolean UseRectTransform; // 0x28
		::System::Single PaddingMinHeight; // 0x2C
		::System::Single PaddingMinWidth; // 0x30
		::System::Single PaddingPreferredHeight; // 0x34
		::System::Single PaddingPreferredWidth; // 0x38
		::UnityEngine::Vector2 Field_6_10; // 0x3C
		::System::Single Field_6_11; // 0x44
		::System::Single Field_6_12; // 0x48
		::System::Boolean Field_6_13; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYLAYOUTELEMENT_UPDATE_OFFSET))(this);
		}
	};
}

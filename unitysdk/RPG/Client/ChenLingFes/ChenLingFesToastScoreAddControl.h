#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4E3AF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E3AC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A4E3840)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4E3740)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastScoreAddControl_TypeDefinitionIndex = 76399;

	class ChenLingFesToastScoreAddControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		static ::UnityEngine::Color* StaticGet__NumInitialColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesToastScoreAddControl_TypeDefinitionIndex)->GetStaticField(0x13CE0);
		}
		// static const ::System::String* PREFAB_PATH; // 0x0
		// static const ::System::Single Duration; // 0x0
		::UnityEngine::UI::Text* _Text; // 0x50
		::UnityEngine::Animation* _Animation; // 0x58
		::UnityEngine::UI::ContentSizeFitter* _ContentSizeFitter; // 0x60
		::UnityEngine::UI::HorizontalLayoutGroup* _HorizontalLayoutGroup; // 0x68
		::UnityEngine::RectTransform* _ContentRect; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__CCTOR_OFFSET))();
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}

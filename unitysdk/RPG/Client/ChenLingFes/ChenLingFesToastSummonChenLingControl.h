#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4E3DD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E3E80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A4E3D40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4E3CA0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastSummonChenLingControl_TypeDefinitionIndex = 76401;

	class ChenLingFesToastSummonChenLingControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		// static const ::System::String* PREFAB_PATH; // 0x0
		::UnityEngine::RectTransform* _NodeRoot; // 0x50
		::UnityEngine::UI::Text* _Text; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Single GetHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL_GETHEIGHT_OFFSET))(this);
		}
	};
}

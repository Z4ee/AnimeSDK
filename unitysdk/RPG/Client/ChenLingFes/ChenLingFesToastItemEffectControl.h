#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMEFFECTCONTROL_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0xCAC9D30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMEFFECTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC9DE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMEFFECTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAC9B80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMEFFECTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCAC9AE0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastItemEffectControl_TypeDefinitionIndex = 81358;

	class ChenLingFesToastItemEffectControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		// static const ::System::String* PREFAB_PATH; // 0x0
		::UnityEngine::RectTransform* _NodeRoot; // 0x58
		::UnityEngine::UI::Text* _Text; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMEFFECTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMEFFECTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMEFFECTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Single GetHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMEFFECTCONTROL_GETHEIGHT_OFFSET))(this);
		}
	};
}

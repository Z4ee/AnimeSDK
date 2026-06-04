#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB62BC10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB62B2A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB62B180)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB62BCD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB62BC70)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastFeverAddControl_TypeDefinitionIndex = 74012;

	class ChenLingFesToastFeverAddControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		// static const ::System::String* PREFAB_PATH; // 0x0
		::UnityEngine::Transform* _NodeEnd; // 0x50
		::UnityEngine::Animation* _Animation; // 0x58
		::UnityEngine::UI::Text* _TextValue; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}

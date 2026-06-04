#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB62D3C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL__FORMATDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0xB62D340)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB62CE60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB62CDA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB62D450)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB62D3F0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastResidentHintControl_TypeDefinitionIndex = 74016;

	class ChenLingFesToastResidentHintControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		// static const ::System::String* PREFAB_PATH_COUNT_UP; // 0x0
		// static const ::System::String* PREFAB_PATH_MULTIPLIER; // 0x0
		// static const ::System::String* PREFAB_PATH_PENDING_CHENLING; // 0x0
		// static const ::System::String* PREFAB_PATH_COUNT_DOWN; // 0x0
		::UnityEngine::UI::Text* _Text; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		static ::System::String* _FormatDynamicValue(::System::Single a1)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL__FORMATDYNAMICVALUE_OFFSET))(a1);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTRESIDENTHINTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}

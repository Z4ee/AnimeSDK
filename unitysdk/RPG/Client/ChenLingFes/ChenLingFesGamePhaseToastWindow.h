#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::ChenLingFes { class ChenLingFesGamePhaseToastViewModel; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC55D40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC55780)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC55960)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1CC55DF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CC55840)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGamePhaseToastWindow_TypeDefinitionIndex = 80023;

	class ChenLingFesGamePhaseToastWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Text* _Text; // 0x48

		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}

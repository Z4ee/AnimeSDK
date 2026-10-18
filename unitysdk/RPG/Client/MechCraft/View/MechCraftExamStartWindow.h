#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_ECF740E1BEC9395A;
namespace RPG::Client::MechCraft::View { class MechCraftExamStartControl; }
namespace System { class Action; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_GET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD644DB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_SET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD644E60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xD644E70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD6450A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD645460)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD644F60)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamStartWindow_TypeDefinitionIndex = 79967;

	class MechCraftExamStartWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::System::Action* _OnClosed; // 0x48
		::RPG::Client::MechCraft::View::MechCraftExamStartControl* _Control; // 0x50

		::System::Void _ctor(::Class_1_ECF740E1BEC9395A* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECF740E1BEC9395A*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::Class_1_ECF740E1BEC9395A* get__TypedDataContext()
		{
			return ((::Class_1_ECF740E1BEC9395A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_GET__TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set__TypedDataContext(::Class_1_ECF740E1BEC9395A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECF740E1BEC9395A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_SET__TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}
	};
}

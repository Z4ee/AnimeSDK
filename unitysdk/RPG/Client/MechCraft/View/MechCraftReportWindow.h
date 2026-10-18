#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_0_16E4307DCC419505_1504;
namespace RPG::Client::MechCraft::View { class MechCraftReportControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_GET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD65B330)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_SET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD65B3C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xD65B3D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD65B6B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD65B4C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftReportWindow_TypeDefinitionIndex = 80027;

	class MechCraftReportWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftReportControl* _Control; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_1504* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1504*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__CTOR_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1504* get__TypedDataContext()
		{
			return ((::Class_0_16E4307DCC419505_1504*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_GET__TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set__TypedDataContext(::Class_0_16E4307DCC419505_1504* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1504*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_SET__TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}

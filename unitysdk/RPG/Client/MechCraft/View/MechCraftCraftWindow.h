#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_9676F1C43235E384;
namespace RPG::Client::MechCraft::View { class MechCraftCraftControl; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW_GET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD6302F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW_SET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD6303A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xD6303B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__HANDLECONFIRMEXIT_OFFSET UNITYSDK_OFFSET(0xD6310F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD630660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD631000)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD6304B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW___ONBINDVIEWMODEL_B__7_0_OFFSET UNITYSDK_OFFSET(0xD631150)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW___ONBINDVIEWMODEL_B__7_1_OFFSET UNITYSDK_OFFSET(0xD631330)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW___ONBINDVIEWMODEL_B__7_2_OFFSET UNITYSDK_OFFSET(0xD631560)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW___ONBINDVIEWMODEL_B__7_3_OFFSET UNITYSDK_OFFSET(0xD6315B0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftWindow_TypeDefinitionIndex = 79906;

	class MechCraftCraftWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::Coroutine* _WaitForFadeInProtectEnd; // 0x48
		::RPG::Client::MechCraft::View::MechCraftCraftControl* _Content; // 0x50

		::System::Void _ctor(::Class_1_9676F1C43235E384* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9676F1C43235E384*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__CTOR_OFFSET))(this, a1);
		}

		::Class_1_9676F1C43235E384* get__TypedDataContext()
		{
			return ((::Class_1_9676F1C43235E384*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW_GET__TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set__TypedDataContext(::Class_1_9676F1C43235E384* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9676F1C43235E384*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW_SET__TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _HandleConfirmExit()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW__HANDLECONFIRMEXIT_OFFSET))(this);
		}

		::System::Void __OnBindViewModel_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW___ONBINDVIEWMODEL_B__7_0_OFFSET))(this);
		}

		::System::Boolean __OnBindViewModel_b__7_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW___ONBINDVIEWMODEL_B__7_1_OFFSET))(this);
		}

		::System::Void __OnBindViewModel_b__7_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW___ONBINDVIEWMODEL_B__7_2_OFFSET))(this, a1);
		}

		::System::Void __OnBindViewModel_b__7_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTWINDOW___ONBINDVIEWMODEL_B__7_3_OFFSET))(this);
		}
	};
}

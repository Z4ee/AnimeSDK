#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/ObservableCollections/NotifyCollectionChangedEventArgs_1.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_0BBFAB693B4F3D69;
class Class_2_B54CAA15F81198AA;
namespace MoleMole { class RepelPrepBuffSelectContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
template <typename T> class Class_1_B695D0FA5349962B;

#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x1227CCA0)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1227C870)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1227C880)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1227C8F0)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1227CAF0)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1227CF60)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_0_OFFSET UNITYSDK_OFFSET(0x1227D000)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_1_OFFSET UNITYSDK_OFFSET(0x1227D150)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1227CFF0)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1227D2E0)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1227D380)
#define MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1227D390)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepBuffSelectPopWindowController_TypeDefinitionIndex = 70261;

	class UIRepelPrepBuffSelectPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::MoleMole::RepelPrepBuffSelectContext* _context; // 0x318
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x320
		::Class_1_B695D0FA5349962B<::System::Int32>* _listPropertySync; // 0x328
		::Class_2_0BBFAB693B4F3D69* _model; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_B54CAA15F81198AA* get__viewModel()
		{
			return ((::Class_2_B54CAA15F81198AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_0(::ObservableCollections::NotifyCollectionChangedEventArgs_1<::System::Int32>& arg)
		{
			return ((::System::Void(*)(::PVOID, ::ObservableCollections::NotifyCollectionChangedEventArgs_1<::System::Int32>&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_0_OFFSET))(this, arg);
		}

		::System::Void _BuildViewModelDataBinding_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPBUFFSELECTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftEntranceControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftWorkshopStarControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftEntranceViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD63B660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD63BD40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD63B6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD63DD60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__INITHINTVISIBILITY_OFFSET UNITYSDK_OFFSET(0xD63D440)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__ONVMPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xD63BE40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0xD63C0F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__REFRESHHINTVISIBILITY_OFFSET UNITYSDK_OFFSET(0xD63D160)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__REFRESH_OFFSET UNITYSDK_OFFSET(0xD63B850)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftEntranceControl_TypeDefinitionIndex = 79953;

	class MechCraftEntranceControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel* _Content; // 0x18
		::RPG::Client::MechCraft::View::MechCraftEntranceControlBinder* _Binder; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftWorkshopStarControl*>* _Stars; // 0x28
		::System::String* _AnimEventTip; // 0x30
		::System::String* _AnimEventRevenue; // 0x38
		::System::String* _AnimNameHint; // 0x40
		::System::Boolean _IsHintActive; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel* get_Content()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnVmPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__ONVMPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _Refresh(::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__REFRESH_OFFSET))(this, a1);
		}

		::System::Void _RefreshContent(::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__REFRESHCONTENT_OFFSET))(this, a1);
		}

		::System::Void _InitHintVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__INITHINTVISIBILITY_OFFSET))(this);
		}

		::System::Void _RefreshHintVisibility(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECONTROL__REFRESHHINTVISIBILITY_OFFSET))(this, a1, a2);
		}
	};
}

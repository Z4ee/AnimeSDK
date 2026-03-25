#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

namespace RPG::Client::MVVM::Model { class LimaoNewsModule; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsMainEntranceEventViewModel; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsMainEntranceSceneViewModel; }

#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_EVENTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AAD2F0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_ISFIRSTIN_OFFSET UNITYSDK_OFFSET(0x9AAD2B0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_SCENEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AAD2D0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_SETISFIRSTIN_OFFSET UNITYSDK_OFFSET(0x9AAD260)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_EVENTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AAD300)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_ISFIRSTIN_OFFSET UNITYSDK_OFFSET(0x9AAD2C0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_SCENEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AAD2E0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x9AAD160)

namespace RPG::Client::MVVM::ViewModel
{
	inline static constexpr unsigned int LimaoNewsMainEntranceViewModel_TypeDefinitionIndex = 60941;

	class LimaoNewsMainEntranceViewModel : public ::Class_2_3DE15EA7F53A0550
	{
	public:
		::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceSceneViewModel* _SceneViewModel_k__BackingField; // 0x18
		::RPG::Client::MVVM::Model::LimaoNewsModule* _Module; // 0x20
		::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceEventViewModel* _EventViewModel_k__BackingField; // 0x28
		::System::Boolean _IsFirstIn_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::MVVM::Model::LimaoNewsModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsModule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL__CTOR_OFFSET))(this, module);
		}

		::System::Void SetIsFirstIn(::System::Boolean isFirst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_SETISFIRSTIN_OFFSET))(this, isFirst);
		}

		::System::Boolean get_IsFirstIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_ISFIRSTIN_OFFSET))(this);
		}

		::System::Void set_IsFirstIn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_ISFIRSTIN_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceSceneViewModel* get_SceneViewModel()
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceSceneViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_SCENEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_SceneViewModel(::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceSceneViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceSceneViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_SCENEVIEWMODEL_OFFSET))(this, value);
		}

		::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceEventViewModel* get_EventViewModel()
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceEventViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_EVENTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_EventViewModel(::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceEventViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceEventViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_EVENTVIEWMODEL_OFFSET))(this, value);
		}
	};
}

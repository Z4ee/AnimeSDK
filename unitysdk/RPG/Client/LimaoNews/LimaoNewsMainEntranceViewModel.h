#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMainEntranceEventViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMainEntranceSceneViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsModule; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_EVENTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A77EB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_ISFIRSTIN_OFFSET UNITYSDK_OFFSET(0x1A77EB00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_SCENEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A77EB20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SETISFIRSTIN_OFFSET UNITYSDK_OFFSET(0x1A77EAB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_EVENTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A77EB50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_ISFIRSTIN_OFFSET UNITYSDK_OFFSET(0x1A77EB10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_SCENEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A77EB30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A77E9B0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainEntranceViewModel_TypeDefinitionIndex = 75516;

	class LimaoNewsMainEntranceViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel* _EventViewModel_k__BackingField; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsModule* _Module; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel* _SceneViewModel_k__BackingField; // 0x30
		::System::Boolean _IsFirstIn_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsModule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetIsFirstIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SETISFIRSTIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_ISFIRSTIN_OFFSET))(this);
		}

		::System::Void set_IsFirstIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_ISFIRSTIN_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel* get_SceneViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_SCENEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_SceneViewModel(::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_SCENEVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel* get_EventViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_EVENTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_EventViewModel(::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_EVENTVIEWMODEL_OFFSET))(this, a1);
		}
	};
}

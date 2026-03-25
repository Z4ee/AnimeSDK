#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LevelNpcMaterialReplacer; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsMainEntranceSceneViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A9F500)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A9EDC0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A9E8E0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPDESKS_OFFSET UNITYSDK_OFFSET(0x9A9EE80)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPNPCS_OFFSET UNITYSDK_OFFSET(0x9A9F2D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A9F570)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A9F510)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsMainEntranceSceneControl_TypeDefinitionIndex = 60984;

	class LimaoNewsMainEntranceSceneControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LevelNpcMaterialReplacer*>* _NpcMaterialReplacers; // 0x30
		::RPG::Client::PrefabLoadMeta* _DeskPrefabLoader; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SetupDesks(::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceSceneViewModel* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceSceneViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPDESKS_OFFSET))(this, data);
		}

		::System::Void _SetupNpcs(::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceSceneViewModel* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsMainEntranceSceneViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPNPCS_OFFSET))(this, data);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINENTRANCESCENECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}

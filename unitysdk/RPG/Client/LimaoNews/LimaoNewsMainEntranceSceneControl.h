#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LevelNpcMaterialReplacer; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::LimaoNews { class LimaoNewsMainEntranceSceneViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD921F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD91560)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD91360)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPDESKS_OFFSET UNITYSDK_OFFSET(0xBD91620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPNPCS_OFFSET UNITYSDK_OFFSET(0xBD91B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD92280)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD92220)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainEntranceSceneControl_TypeDefinitionIndex = 73812;

	class LimaoNewsMainEntranceSceneControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LevelNpcMaterialReplacer*>* _NpcMaterialReplacers; // 0x38
		::RPG::Client::PrefabLoadMeta* _DeskPrefabLoader; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SetupDesks(::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPDESKS_OFFSET))(this, a1);
		}

		::System::Void _SetupNpcs(::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPNPCS_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}

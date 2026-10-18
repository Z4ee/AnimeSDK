#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class CharacterAtlasFace; }
namespace RPG::Client { class LevelNpcMaterialReplacer; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::LimaoNews { class LimaoNewsMainEntranceSceneViewModel; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL_HIDENPCSBYNPCIDS_OFFSET UNITYSDK_OFFSET(0xD3BE910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD3BE8B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__CLEARDESKS_OFFSET UNITYSDK_OFFSET(0xD3BE210)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3BEC20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3BD800)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD3BD650)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__RESTOREPREVIOUSLYHIDDENNPCS_OFFSET UNITYSDK_OFFSET(0xD3BEA80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPDESKS_OFFSET UNITYSDK_OFFSET(0xD3BD8C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPNPCS_OFFSET UNITYSDK_OFFSET(0xD3BDE50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__TRYOVERRIDEEYEEMOTION_OFFSET UNITYSDK_OFFSET(0xD3BE6B0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainEntranceSceneControl_TypeDefinitionIndex = 80364;

	class LimaoNewsMainEntranceSceneControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::UInt32 SpecialEyeNpcID = 0x9D4; // 0x0
		// static const ::System::Int32 SpecialEmotionIndex = 0x10; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::LevelNpcMaterialReplacer*>* _NpcMaterialReplacers; // 0x40
		::RPG::Client::PrefabLoadMeta* _DeskPrefabLoader; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _InstantiatedDesks; // 0x50
		::RPG::Client::CharacterAtlasFace* _OverrideEmotionFace; // 0x58
		::System::Collections::Generic::HashSet_1<::System::Int32>* _HiddenIndices; // 0x60

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

		::System::Void _ClearDesks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__CLEARDESKS_OFFSET))(this);
		}

		::System::Void _SetupNpcs(::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__SETUPNPCS_OFFSET))(this, a1);
		}

		::System::Void _TryOverrideEyeEmotion(::RPG::Client::LevelNpcMaterialReplacer* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LevelNpcMaterialReplacer*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__TRYOVERRIDEEYEEMOTION_OFFSET))(this, a1, a2);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void HideNpcsByNpcIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL_HIDENPCSBYNPCIDS_OFFSET))(this, a1);
		}

		::System::Void _RestorePreviouslyHiddenNpcs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENECONTROL__RESTOREPREVIOUSLYHIDDENNPCS_OFFSET))(this);
		}
	};
}

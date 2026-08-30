#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/OutlinePost/TrainPartyBuildOutlineState.h"
#include "unitysdk/System/Object.h"

class Class_1_8C1FA6D12B3CF102;
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_ADDSLOTOUTLINEEFFECT_OFFSET UNITYSDK_OFFSET(0xE244400)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_ADDSLOTRENDERER_OFFSET UNITYSDK_OFFSET(0xE2435B0)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_CLEARALLOUTLINEEFFECTS_OFFSET UNITYSDK_OFFSET(0xE244710)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_DESPAWNOUTLINEROOT_OFFSET UNITYSDK_OFFSET(0xE243500)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE2432D0)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_REMOVESLOTOUTLINEEFFECT_OFFSET UNITYSDK_OFFSET(0xE244550)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_REMOVESLOTRENDERER_OFFSET UNITYSDK_OFFSET(0xE243680)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xE243710)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_SETSTATE_OFFSET UNITYSDK_OFFSET(0xE244630)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_SPAWNOUTLINEROOT_OFFSET UNITYSDK_OFFSET(0xE2439E0)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__ADDCLICKOUTLINE_1_OFFSET UNITYSDK_OFFSET(0xE244030)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__ADDCLICKOUTLINE_OFFSET UNITYSDK_OFFSET(0xE2437A0)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__CLEARCLICKOUTLINE_OFFSET UNITYSDK_OFFSET(0xE243890)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__CLEARHOVERSTATE_OFFSET UNITYSDK_OFFSET(0xE244200)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE2431F0)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__GETSLOTRENDERER_OFFSET UNITYSDK_OFFSET(0xE243930)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__INITOUTLINEROOT_OFFSET UNITYSDK_OFFSET(0xE243C70)

namespace RPG::Client::TrainParty::OutlinePost
{
	inline static constexpr unsigned int OutlinePostManager_TypeDefinitionIndex = 74269;

	class OutlinePostManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::MeshRenderer*>* _SlotRendererDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8C1FA6D12B3CF102*>* _OutlineEffects; // 0x18
		::UnityEngine::Material* _HoverMaterial; // 0x20
		::RPG::OutlinePostFXMonoPlugin* _TrainPartyBuildOutlineRoot; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddSlotRenderer(::System::UInt32 a1, ::UnityEngine::MeshRenderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_ADDSLOTRENDERER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveSlotRenderer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_REMOVESLOTRENDERER_OFFSET))(this, a1);
		}

		::System::Void SetSelected(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_SETSELECTED_OFFSET))(this, a1, a2);
		}

		::UnityEngine::MeshRenderer* _GetSlotRenderer(::System::UInt32 a1)
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__GETSLOTRENDERER_OFFSET))(this, a1);
		}

		::System::Void SpawnOutlineRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_SPAWNOUTLINEROOT_OFFSET))(this);
		}

		::System::Void _InitOutlineRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__INITOUTLINEROOT_OFFSET))(this);
		}

		::System::Void DespawnOutlineRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_DESPAWNOUTLINEROOT_OFFSET))(this);
		}

		::System::Void _AddClickOutline(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__ADDCLICKOUTLINE_OFFSET))(this, a1);
		}

		::System::Void _AddClickOutline_1(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__ADDCLICKOUTLINE_1_OFFSET))(this, a1);
		}

		::System::Void _ClearClickOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__CLEARCLICKOUTLINE_OFFSET))(this);
		}

		::System::Void _ClearHoverState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER__CLEARHOVERSTATE_OFFSET))(this);
		}

		::System::Void AddSlotOutlineEffect(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::UnityEngine::MeshRenderer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_ADDSLOTOUTLINEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveSlotOutlineEffect(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_REMOVESLOTOUTLINEEFFECT_OFFSET))(this, a1);
		}

		::System::Void SetState(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_SETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearAllOutlineEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINEPOSTMANAGER_CLEARALLOUTLINEEFFECTS_OFFSET))(this);
		}
	};
}

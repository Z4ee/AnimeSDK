#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_36.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightElationTraitEquipComponent; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightTraitEffectBase; }
namespace RPG::Client { class GridFightTraitElationEffect; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_ADD_ONCHANGE_OFFSET UNITYSDK_OFFSET(0xA4785D0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CANCRAFT_OFFSET UNITYSDK_OFFSET(0xA478AE0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CANDRESS_OFFSET UNITYSDK_OFFSET(0xA4788E0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CRAFT_OFFSET UNITYSDK_OFFSET(0xA478BB0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_DRESS_OFFSET UNITYSDK_OFFSET(0xA478890)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_CANTRACK_OFFSET UNITYSDK_OFFSET(0xA478850)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0xA4786B0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_RECOMMENDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xA478870)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_RECOMMENDTITLE_OFFSET UNITYSDK_OFFSET(0xA478690)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_TRACKSOURCE_OFFSET UNITYSDK_OFFSET(0xA478840)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET__EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA478A80)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET__TRACKDATA_OFFSET UNITYSDK_OFFSET(0xA478740)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_ISEQUIPPED_OFFSET UNITYSDK_OFFSET(0xA478930)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_REMOVE_ONCHANGE_OFFSET UNITYSDK_OFFSET(0xA478630)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SETTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xA474CF0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_CANTRACK_OFFSET UNITYSDK_OFFSET(0xA478860)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_RECOMMENDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xA478880)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_RECOMMENDTITLE_OFFSET UNITYSDK_OFFSET(0xA4786A0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_TRACK_OFFSET UNITYSDK_OFFSET(0xA478C80)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_UNTRACK_OFFSET UNITYSDK_OFFSET(0xA478F30)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__CTOR_OFFSET UNITYSDK_OFFSET(0xA474C80)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__TRACK_B__26_0_OFFSET UNITYSDK_OFFSET(0xA479320)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__UNTRACK_B__27_0_OFFSET UNITYSDK_OFFSET(0xA479330)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEquipRecommend_TypeDefinitionIndex = 60181;

	class GridFightElationTraitEquipRecommend : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RecommendEquipIDs_k__BackingField; // 0x18
		::System::Action* OnChange; // 0x20
		::RPG::Client::TextID _RecommendTitle_k__BackingField; // 0x28
		::System::Boolean _CanTrack_k__BackingField; // 0x38

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* recommendIDs, ::RPG::Client::TextID title, ::System::Boolean canTrack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::RPG::Client::TextID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__CTOR_OFFSET))(this, recommendIDs, title, canTrack);
		}

		::System::Void add_OnChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_ADD_ONCHANGE_OFFSET))(this, value);
		}

		::System::Void remove_OnChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_REMOVE_ONCHANGE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_RecommendTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_RECOMMENDTITLE_OFFSET))(this);
		}

		::System::Void set_RecommendTitle(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_RECOMMENDTITLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_ISTRACKED_OFFSET))(this);
		}

		::System::Boolean get_CanTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_CANTRACK_OFFSET))(this);
		}

		::System::Void set_CanTrack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_CANTRACK_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecommendEquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_RECOMMENDEQUIPIDS_OFFSET))(this);
		}

		::System::Void set_RecommendEquipIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_RECOMMENDEQUIPIDS_OFFSET))(this, value);
		}

		::System::Void Dress(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_DRESS_OFFSET))(this, index);
		}

		::System::Boolean CanDress(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CANDRESS_OFFSET))(this, index);
		}

		::System::Boolean IsEquipped(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_ISEQUIPPED_OFFSET))(this, index);
		}

		::System::Boolean CanCraft(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CANCRAFT_OFFSET))(this, index);
		}

		::System::Void Craft(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CRAFT_OFFSET))(this, index);
		}

		::Enum_3_DB663931210BBC27_36 get_TrackSource()
		{
			return ((::Enum_3_DB663931210BBC27_36(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_TRACKSOURCE_OFFSET))(this);
		}

		::System::Void SetTraitEffect(::RPG::Client::GridFightTraitEffectBase* effect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SETTRAITEFFECT_OFFSET))(this, effect);
		}

		::System::Void Track()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_TRACK_OFFSET))(this);
		}

		::System::Void UnTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_UNTRACK_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipTrackData* get__TrackData()
		{
			return ((::RPG::Client::GridFightEquipTrackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET__TRACKDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightElationTraitEquipComponent* get__EquipComponent()
		{
			return ((::RPG::Client::GridFightElationTraitEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET__EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void _Track_b__26_0(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__TRACK_B__26_0_OFFSET))(this, _);
		}

		::System::Void _UnTrack_b__27_0(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__UNTRACK_B__27_0_OFFSET))(this, _);
		}
	};
}

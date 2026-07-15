#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_37.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightElationTraitEquipComponent; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightTraitEffectBase; }
namespace RPG::Client { class GridFightTraitElationEffect; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_ADD_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x1A644FA0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CANCRAFT_OFFSET UNITYSDK_OFFSET(0x1A645560)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CANDRESS_OFFSET UNITYSDK_OFFSET(0x1A645340)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CRAFT_OFFSET UNITYSDK_OFFSET(0x1A645650)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_DRESS_OFFSET UNITYSDK_OFFSET(0x1A6452F0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_CANTRACK_OFFSET UNITYSDK_OFFSET(0x1A6452B0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1A645080)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_RECOMMENDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1A6452D0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_RECOMMENDTITLE_OFFSET UNITYSDK_OFFSET(0x1A645060)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_TRACKSOURCE_OFFSET UNITYSDK_OFFSET(0x1A645260)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET__EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A645500)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET__TRACKDATA_OFFSET UNITYSDK_OFFSET(0x1A645140)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_ISEQUIPPED_OFFSET UNITYSDK_OFFSET(0x1A645390)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_REMOVE_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x1A645000)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SETTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1A6416F0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_CANTRACK_OFFSET UNITYSDK_OFFSET(0x1A6452C0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_RECOMMENDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1A6452E0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_RECOMMENDTITLE_OFFSET UNITYSDK_OFFSET(0x1A645070)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_TRACK_OFFSET UNITYSDK_OFFSET(0x1A645740)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_UNTRACK_OFFSET UNITYSDK_OFFSET(0x1A6459D0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1A641680)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__TRACK_B__26_0_OFFSET UNITYSDK_OFFSET(0x1A645D10)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__UNTRACK_B__27_0_OFFSET UNITYSDK_OFFSET(0x1A645D30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEquipRecommend_TypeDefinitionIndex = 62442;

	class GridFightElationTraitEquipRecommend : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RecommendEquipIDs_k__BackingField; // 0x10
		::System::Action* OnChange; // 0x18
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x20
		::System::Boolean _CanTrack_k__BackingField; // 0x28
		::RPG::Client::TextID _RecommendTitle_k__BackingField; // 0x30

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::RPG::Client::TextID a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::RPG::Client::TextID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void add_OnChange(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_ADD_ONCHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnChange(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_REMOVE_ONCHANGE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_RecommendTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_RECOMMENDTITLE_OFFSET))(this);
		}

		::System::Void set_RecommendTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_RECOMMENDTITLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_ISTRACKED_OFFSET))(this);
		}

		::System::Boolean get_CanTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_CANTRACK_OFFSET))(this);
		}

		::System::Void set_CanTrack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_CANTRACK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecommendEquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_RECOMMENDEQUIPIDS_OFFSET))(this);
		}

		::System::Void set_RecommendEquipIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SET_RECOMMENDEQUIPIDS_OFFSET))(this, a1);
		}

		::System::Void Dress(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_DRESS_OFFSET))(this, a1);
		}

		::System::Boolean CanDress(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CANDRESS_OFFSET))(this, a1);
		}

		::System::Boolean IsEquipped(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_ISEQUIPPED_OFFSET))(this, a1);
		}

		::System::Boolean CanCraft(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CANCRAFT_OFFSET))(this, a1);
		}

		::System::Void Craft(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_CRAFT_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_37 get_TrackSource()
		{
			return ((::Enum_3_DB663931210BBC27_37(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_GET_TRACKSOURCE_OFFSET))(this);
		}

		::System::Void SetTraitEffect(::RPG::Client::GridFightTraitEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND_SETTRAITEFFECT_OFFSET))(this, a1);
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

		::System::Void _Track_b__26_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__TRACK_B__26_0_OFFSET))(this, a1);
		}

		::System::Void _UnTrack_b__27_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPRECOMMEND__UNTRACK_B__27_0_OFFSET))(this, a1);
		}
	};
}

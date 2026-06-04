#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_1D95EF1836E9FE9D;
class Class_1_5D2E9E194E93B02A;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RelicShowPropertyData; }

#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GETEFFECTIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC6ECAB0)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC6EC910)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_HITCOUNT_OFFSET UNITYSDK_OFFSET(0xC6EC930)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xC6EBDA0)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_RELICDATA_OFFSET UNITYSDK_OFFSET(0xC6E5DB0)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_SLOTTYPE_OFFSET UNITYSDK_OFFSET(0xC6EC920)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_UPDATERELICDATA_OFFSET UNITYSDK_OFFSET(0xC6E9E70)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC6E9BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetSlotViewModel_TypeDefinitionIndex = 62520;

	class RelicPresetSlotViewModel : public ::System::Object
	{
	public:
		::Class_1_5D2E9E194E93B02A* _DataService; // 0x10
		::Class_1_1D95EF1836E9FE9D* _CalculatorService; // 0x18
		::System::UInt32 _RelicID; // 0x20
		::System::UInt32 _AvatarID_k__BackingField; // 0x24
		::RPG::GameCore::RelicType _SlotType_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::RelicType a2, ::RPG::Client::RelicItemData* a3, ::Class_1_5D2E9E194E93B02A* a4, ::Class_1_1D95EF1836E9FE9D* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::Client::RelicItemData*, ::Class_1_5D2E9E194E93B02A*, ::Class_1_1D95EF1836E9FE9D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_AVATARID_OFFSET))(this);
		}

		::RPG::GameCore::RelicType get_SlotType()
		{
			return ((::RPG::GameCore::RelicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_SLOTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_ISEMPTY_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* get_RelicData()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_RELICDATA_OFFSET))(this);
		}

		::System::UInt32 get_HitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_HITCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetEffectiveCount(::RPG::Client::RelicRecommendData* a1, ::RPG::Client::RelicShowPropertyData* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicRecommendData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GETEFFECTIVECOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateRelicData(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_UPDATERELICDATA_OFFSET))(this, a1);
		}
	};
}

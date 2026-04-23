#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_29A54A6045520AF2;
class Class_1_6A9A64AC86CBF3B4;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RelicShowPropertyData; }

#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GETEFFECTIVECOUNT_OFFSET UNITYSDK_OFFSET(0xAFA4CE0)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xAFA4B80)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_HITCOUNT_OFFSET UNITYSDK_OFFSET(0xAFA4BA0)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xAFA4170)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_RELICDATA_OFFSET UNITYSDK_OFFSET(0xAF9E160)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GET_SLOTTYPE_OFFSET UNITYSDK_OFFSET(0xAFA4B90)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_UPDATERELICDATA_OFFSET UNITYSDK_OFFSET(0xAFA1F60)
#define RPG_CLIENT_RELICPRESETSLOTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA1CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetSlotViewModel_TypeDefinitionIndex = 61587;

	class RelicPresetSlotViewModel : public ::System::Object
	{
	public:
		::Class_1_29A54A6045520AF2* _DataService; // 0x10
		::Class_1_6A9A64AC86CBF3B4* _CalculatorService; // 0x18
		::System::UInt32 _RelicID; // 0x20
		::System::UInt32 _AvatarID_k__BackingField; // 0x24
		::RPG::GameCore::RelicType _SlotType_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 avatarID, ::RPG::GameCore::RelicType slotType, ::RPG::Client::RelicItemData* relicData, ::Class_1_29A54A6045520AF2* dataService, ::Class_1_6A9A64AC86CBF3B4* calculatorService)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::Client::RelicItemData*, ::Class_1_29A54A6045520AF2*, ::Class_1_6A9A64AC86CBF3B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL__CTOR_OFFSET))(this, avatarID, slotType, relicData, dataService, calculatorService);
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

		::System::UInt32 GetEffectiveCount(::RPG::Client::RelicRecommendData* recommendData, ::RPG::Client::RelicShowPropertyData* propertyData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicRecommendData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_GETEFFECTIVECOUNT_OFFSET))(this, recommendData, propertyData);
		}

		::System::Void UpdateRelicData(::RPG::Client::RelicItemData* relicData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSLOTVIEWMODEL_UPDATERELICDATA_OFFSET))(this, relicData);
		}
	};
}

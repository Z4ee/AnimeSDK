#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkEffectSource.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkActionDataItem; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace RPG::GameCore { class ClockParkEffectRow; }

#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GETEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0x93ED5B0)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_DESCPARAM_OFFSET UNITYSDK_OFFSET(0x93EFA60)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x93EFA30)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x93EFA10)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0x93EF9F0)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_ONNEW_OFFSET UNITYSDK_OFFSET(0x93EF050)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x93EEFE0)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_SET_ROW_OFFSET UNITYSDK_OFFSET(0x93EFA00)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x93E64C0)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x93EFAF0)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM__REFRESHEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0x93EF0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkEffectDataItem_TypeDefinitionIndex = 49892;

	class ClockParkEffectDataItem : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkEffectResult* EffectResult; // 0x10
		::RPG::Client::ClockParkActionDataItem* OwnerActionDataItem; // 0x18
		::RPG::GameCore::ClockParkEffectRow* _Row_k__BackingField; // 0x20
		::System::UInt32 EffectID; // 0x28
		::RPG::Client::ClockParkEffectSource EffectSource; // 0x2C
		::System::Int32 _DiceValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_ONNEW_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 effectID, ::System::UInt32 diceValue, ::RPG::Client::ClockParkEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::ClockParkEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_SYNC_OFFSET))(this, effectID, diceValue, source);
		}

		static ::System::Void GetEffectResult(::System::UInt32 effectID, ::System::Int32 diceValue, ::RPG::Client::ClockParkEffectResult*& result)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::RPG::Client::ClockParkEffectResult*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GETEFFECTRESULT_OFFSET))(effectID, diceValue, result);
		}

		static ::System::Void _RefreshEffectResult(::RPG::GameCore::ClockParkEffectRow* config, ::System::Int32 diceValue, ::RPG::Client::ClockParkEffectResult*& result)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkEffectRow*, ::System::Int32, ::RPG::Client::ClockParkEffectResult*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM__REFRESHEFFECTRESULT_OFFSET))(config, diceValue, result);
		}

		::RPG::GameCore::ClockParkEffectRow* get_Row()
		{
			return ((::RPG::GameCore::ClockParkEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ClockParkEffectRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ClockParkEffectType get_EffectType()
		{
			return ((::RPG::GameCore::ClockParkEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_EFFECTTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_DescParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_DESCPARAM_OFFSET))(this);
		}
	};
}

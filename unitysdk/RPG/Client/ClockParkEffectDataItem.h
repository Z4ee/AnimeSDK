#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkEffectSource.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkActionDataItem; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace RPG::GameCore { class ClockParkEffectRow; }

#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GETEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0x1AE02460)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_DESCPARAM_OFFSET UNITYSDK_OFFSET(0x1AE04C70)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1AE04C00)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE04BB0)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1AE04B90)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_ONNEW_OFFSET UNITYSDK_OFFSET(0x1AE04210)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1AE041A0)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1AE04BA0)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x1ADFB220)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE04CF0)
#define RPG_CLIENT_CLOCKPARKEFFECTDATAITEM__REFRESHEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0x1AE04260)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkEffectDataItem_TypeDefinitionIndex = 58760;

	class ClockParkEffectDataItem : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkActionDataItem* OwnerActionDataItem; // 0x10
		::RPG::Client::ClockParkEffectResult* EffectResult; // 0x18
		::RPG::GameCore::ClockParkEffectRow* _Row_k__BackingField; // 0x20
		::RPG::Client::ClockParkEffectSource EffectSource; // 0x28
		::System::UInt32 EffectID; // 0x2C
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

		::System::Void Sync(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ClockParkEffectSource a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::ClockParkEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_SYNC_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void GetEffectResult(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::ClockParkEffectResult*& a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::RPG::Client::ClockParkEffectResult*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GETEFFECTRESULT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _RefreshEffectResult(::RPG::GameCore::ClockParkEffectRow* a1, ::System::Int32 a2, ::RPG::Client::ClockParkEffectResult*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkEffectRow*, ::System::Int32, ::RPG::Client::ClockParkEffectResult*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM__REFRESHEFFECTRESULT_OFFSET))(a1, a2, a3);
		}

		::RPG::GameCore::ClockParkEffectRow* get_Row()
		{
			return ((::RPG::GameCore::ClockParkEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ClockParkEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKEFFECTDATAITEM_SET_ROW_OFFSET))(this, a1);
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

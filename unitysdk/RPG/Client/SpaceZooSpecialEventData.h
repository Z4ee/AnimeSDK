#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooSpicalEventState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpaceZooSpecialCatRow; }
namespace RPG::GameCore { class SpaceZooSpecialEventRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB19A440)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GETSPECIALCATTIPFEATURE_OFFSET UNITYSDK_OFFSET(0xB19F210)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0xB19F300)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALCATID_OFFSET UNITYSDK_OFFSET(0xB19F250)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALCATROW_OFFSET UNITYSDK_OFFSET(0xB19A250)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALEVENTROW_OFFSET UNITYSDK_OFFSET(0xB19F290)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_STATE_OFFSET UNITYSDK_OFFSET(0xB19F270)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB19EE70)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0xB19F310)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_SPECIALCATID_OFFSET UNITYSDK_OFFSET(0xB19F260)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_STATE_OFFSET UNITYSDK_OFFSET(0xB19F280)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SYNCEVENTSTATE_OFFSET UNITYSDK_OFFSET(0xB199330)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SYNCRESOLUTION_OFFSET UNITYSDK_OFFSET(0xB198970)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA__CREATESPECIALCATTIPFEATURE_OFFSET UNITYSDK_OFFSET(0xB19EEC0)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB19EE10)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooSpecialEventData_TypeDefinitionIndex = 62662;

	class SpaceZooSpecialEventData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SpecialCatTipFeature; // 0x10
		::RPG::GameCore::SpaceZooSpicalEventState _State_k__BackingField; // 0x18
		::System::UInt32 _Resolution_k__BackingField; // 0x1C
		::System::UInt32 _SpecialCatID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SpaceZooSpecialEventData* Create(::System::UInt32 specialCatID)
		{
			return ((::RPG::Client::SpaceZooSpecialEventData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_CREATE_OFFSET))(specialCatID);
		}

		::System::Void SyncEventState(::RPG::GameCore::SpaceZooSpicalEventState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpaceZooSpicalEventState))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SYNCEVENTSTATE_OFFSET))(this, state);
		}

		::System::Void SyncResolution(::System::UInt32 resolution)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SYNCRESOLUTION_OFFSET))(this, resolution);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSpecialCatTipFeature()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GETSPECIALCATTIPFEATURE_OFFSET))(this);
		}

		::System::Void _CreateSpecialCatTipFeature()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA__CREATESPECIALCATTIPFEATURE_OFFSET))(this);
		}

		::System::UInt32 get_SpecialCatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALCATID_OFFSET))(this);
		}

		::System::Void set_SpecialCatID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_SPECIALCATID_OFFSET))(this, value);
		}

		::RPG::GameCore::SpaceZooSpecialCatRow* get_SpecialCatRow()
		{
			return ((::RPG::GameCore::SpaceZooSpecialCatRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALCATROW_OFFSET))(this);
		}

		::RPG::GameCore::SpaceZooSpicalEventState get_State()
		{
			return ((::RPG::GameCore::SpaceZooSpicalEventState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::SpaceZooSpicalEventState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpaceZooSpicalEventState))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_STATE_OFFSET))(this, value);
		}

		::RPG::GameCore::SpaceZooSpecialEventRow* get_SpecialEventRow()
		{
			return ((::RPG::GameCore::SpaceZooSpecialEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALEVENTROW_OFFSET))(this);
		}

		::System::UInt32 get_Resolution()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_RESOLUTION_OFFSET))(this);
		}

		::System::Void set_Resolution(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_RESOLUTION_OFFSET))(this, value);
		}
	};
}

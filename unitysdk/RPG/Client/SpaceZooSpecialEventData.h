#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooSpicalEventState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpaceZooSpecialCatRow; }
namespace RPG::GameCore { class SpaceZooSpecialEventRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1890D930)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GETSPECIALCATTIPFEATURE_OFFSET UNITYSDK_OFFSET(0x18912A20)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x18912B10)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALCATID_OFFSET UNITYSDK_OFFSET(0x18912A60)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALCATROW_OFFSET UNITYSDK_OFFSET(0x1890D740)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALEVENTROW_OFFSET UNITYSDK_OFFSET(0x18912AA0)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18912A80)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_INIT_OFFSET UNITYSDK_OFFSET(0x18912660)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x18912B20)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_SPECIALCATID_OFFSET UNITYSDK_OFFSET(0x18912A70)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x18912A90)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SYNCEVENTSTATE_OFFSET UNITYSDK_OFFSET(0x1890C7A0)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SYNCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1890BE50)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA__CREATESPECIALCATTIPFEATURE_OFFSET UNITYSDK_OFFSET(0x189126B0)
#define RPG_CLIENT_SPACEZOOSPECIALEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18912600)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooSpecialEventData_TypeDefinitionIndex = 64962;

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

		static ::RPG::Client::SpaceZooSpecialEventData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::SpaceZooSpecialEventData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SyncEventState(::RPG::GameCore::SpaceZooSpicalEventState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpaceZooSpicalEventState))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SYNCEVENTSTATE_OFFSET))(this, a1);
		}

		::System::Void SyncResolution(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SYNCRESOLUTION_OFFSET))(this, a1);
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

		::System::Void set_SpecialCatID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_SPECIALCATID_OFFSET))(this, a1);
		}

		::RPG::GameCore::SpaceZooSpecialCatRow* get_SpecialCatRow()
		{
			return ((::RPG::GameCore::SpaceZooSpecialCatRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALCATROW_OFFSET))(this);
		}

		::RPG::GameCore::SpaceZooSpicalEventState get_State()
		{
			return ((::RPG::GameCore::SpaceZooSpicalEventState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::SpaceZooSpicalEventState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpaceZooSpicalEventState))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SpaceZooSpecialEventRow* get_SpecialEventRow()
		{
			return ((::RPG::GameCore::SpaceZooSpecialEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_SPECIALEVENTROW_OFFSET))(this);
		}

		::System::UInt32 get_Resolution()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_GET_RESOLUTION_OFFSET))(this);
		}

		::System::Void set_Resolution(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOSPECIALEVENTDATA_SET_RESOLUTION_OFFSET))(this, a1);
		}
	};
}

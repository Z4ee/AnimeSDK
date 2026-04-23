#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_ADDFLUTEDATA_OFFSET UNITYSDK_OFFSET(0xA6A7D60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xA6A7C50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_GETFLUTEDATALIST_OFFSET UNITYSDK_OFFSET(0xA6A7F00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA6A7DF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_GET_FLORNAME_OFFSET UNITYSDK_OFFSET(0xA6A7E10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA6A7E00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A7D10)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteDataGroup_TypeDefinitionIndex = 70915;

	class FiveDimFluteDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*>* _FiveDimFluteDataList; // 0x10
		::System::UInt32 _FloorID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup* Create(::System::UInt32 floorID)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataGroup*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_CREATE_OFFSET))(floorID);
		}

		::System::Void AddFluteData(::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_ADDFLUTEDATA_OFFSET))(this, data);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_SET_FLOORID_OFFSET))(this, value);
		}

		::System::String* get_FlorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_GET_FLORNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*>* GetFluteDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP_GETFLUTEDATALIST_OFFSET))(this);
		}
	};
}

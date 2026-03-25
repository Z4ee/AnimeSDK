#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_819;
namespace RPG::Client { class RogueTournDivisionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_ACCUMULATEDIVISIONEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xA389D80)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA389B60)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GETDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0xA389BD0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURACCUMULATEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xA38A780)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0xA38A4E0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA38A4A0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xA38A4C0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_DIVISIONDATALIST_OFFSET UNITYSDK_OFFSET(0xA389D00)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_ISDIVISIONMAX_OFFSET UNITYSDK_OFFSET(0xA38A720)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_MAXDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0xA38A530)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_SEENDIVISIONINHERITMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xA38A7D0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SETNEWDIVISIONINHERITMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xA38A010)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA38A4B0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xA38A4D0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_SEENDIVISIONINHERITMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xA38A060)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SYNC_OFFSET UNITYSDK_OFFSET(0xA389B00)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA389AF0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__GENERATEDIVISIONINFO_OFFSET UNITYSDK_OFFSET(0xA38A180)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionCollection_TypeDefinitionIndex = 55106;

	class RogueTournDivisionCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournDivisionData*>* _DivisionDataList; // 0x10
		::System::UInt32 _CurDivisionLevel_k__BackingField; // 0x18
		::System::UInt32 _CurDivisionProgress_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_819* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_819*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SYNC_OFFSET))(this, proto);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueTournDivisionData* GetDivisionData(::System::UInt32 divisionLevel)
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GETDIVISIONDATA_OFFSET))(this, divisionLevel);
		}

		::System::String* AccumulateDivisionEffectDesc(::System::UInt32 divisionLevel)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_ACCUMULATEDIVISIONEFFECTDESC_OFFSET))(this, divisionLevel);
		}

		::System::Void SetNewDivisionInheritMainTournID(::System::UInt32 mainTournID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SETNEWDIVISIONINHERITMAINTOURNID_OFFSET))(this, mainTournID);
		}

		::System::Void _GenerateDivisionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__GENERATEDIVISIONINFO_OFFSET))(this);
		}

		::System::UInt32 get_CurDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_CurDivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_CurDivisionProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurDivisionProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONPROGRESS_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournDivisionData* get_CurDivisionData()
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONDATA_OFFSET))(this);
		}

		::RPG::Client::RogueTournDivisionData* get_MaxDivisionData()
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_MAXDIVISIONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsDivisionMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_ISDIVISIONMAX_OFFSET))(this);
		}

		::System::String* get_CurAccumulateEffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURACCUMULATEEFFECTDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournDivisionData*>* get_DivisionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournDivisionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_DIVISIONDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_SeenDivisionInheritMainTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_SEENDIVISIONINHERITMAINTOURNID_OFFSET))(this);
		}

		::System::Void set_SeenDivisionInheritMainTournID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_SEENDIVISIONINHERITMAINTOURNID_OFFSET))(this, value);
		}
	};
}

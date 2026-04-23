#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_858;
namespace RPG::Client { class RogueTournDivisionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_ACCUMULATEDIVISIONEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xB0C11D0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0C0FB0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GETDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0xB0C1020)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURACCUMULATEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xB0C1BD0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0xB0C1930)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB0C18F0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xB0C1910)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_DIVISIONDATALIST_OFFSET UNITYSDK_OFFSET(0xB0C1150)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_ISDIVISIONMAX_OFFSET UNITYSDK_OFFSET(0xB0C1B70)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_MAXDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0xB0C1980)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_SEENDIVISIONINHERITMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xB0C1C20)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SETNEWDIVISIONINHERITMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xB0C1460)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB0C1900)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xB0C1920)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_SEENDIVISIONINHERITMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xB0C14B0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SYNC_OFFSET UNITYSDK_OFFSET(0xB0C0F50)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C0F40)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__GENERATEDIVISIONINFO_OFFSET UNITYSDK_OFFSET(0xB0C15D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionCollection_TypeDefinitionIndex = 62294;

	class RogueTournDivisionCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournDivisionData*>* _DivisionDataList; // 0x10
		::System::UInt32 _CurDivisionProgress_k__BackingField; // 0x18
		::System::UInt32 _CurDivisionLevel_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_858* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_858*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SYNC_OFFSET))(this, proto);
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

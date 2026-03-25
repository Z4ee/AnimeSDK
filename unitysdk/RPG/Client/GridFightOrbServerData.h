#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_626;
class Class_1_120319518E6F6581_37;
class Class_1_B292FE068586E4C9_2;
class Class_1_E223664CCFC59063;
class Class_1_FA4F4A67B1C04320_373;
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightOrbServerData_OrbSummarizer; }
namespace RPG::Client { class GridFightOrbTypeData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_38F81D6A5D792EE0;

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_CLEARORB_OFFSET UNITYSDK_OFFSET(0x9875DD0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETANDCREATEORBPOSITION_OFFSET UNITYSDK_OFFSET(0x9873600)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBBYUID_OFFSET UNITYSDK_OFFSET(0x9875AE0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBCOUNTBYTYPE_OFFSET UNITYSDK_OFFSET(0x9875910)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBTYPEDATA_OFFSET UNITYSDK_OFFSET(0x9875B90)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORB_OFFSET UNITYSDK_OFFSET(0x9875850)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_HASORB_OFFSET UNITYSDK_OFFSET(0x9875F80)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBDICT_OFFSET UNITYSDK_OFFSET(0x9876240)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBLISTWITHOUTBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x9876100)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBLIST_OFFSET UNITYSDK_OFFSET(0x9876030)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBPOSBYID_OFFSET UNITYSDK_OFFSET(0x9876260)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_PRESENTDICT_OFFSET UNITYSDK_OFFSET(0x9876280)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_PRESENTS_OFFSET UNITYSDK_OFFSET(0x9876040)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_HANDLEREMOVEDORB_OFFSET UNITYSDK_OFFSET(0x9875700)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_HANDLEREMOVEPRESENT_OFFSET UNITYSDK_OFFSET(0x98757B0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9874A50)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_ORBDICT_OFFSET UNITYSDK_OFFSET(0x9876250)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_ORBPOSBYID_OFFSET UNITYSDK_OFFSET(0x9876270)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_PRESENTDICT_OFFSET UNITYSDK_OFFSET(0x9876290)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0x9874FA0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9874CC0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_UPDATEPRESENT_OFFSET UNITYSDK_OFFSET(0x9874E40)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98762A0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA__GETORBLIST_OFFSET UNITYSDK_OFFSET(0x9875BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData_TypeDefinitionIndex = 52340;

	class GridFightOrbServerData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightOrbServerData_OrbSummarizer* _Summarizer; // 0x10
		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>* _PresentDict_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_626* _Collector; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>* _OrbPosByID_k__BackingField; // 0x28
		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>* _OrbDict_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_373* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_373*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SYNC_OFFSET))(this, update);
		}

		::System::Void UpdatePresent(::Class_1_120319518E6F6581_37* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_UPDATEPRESENT_OFFSET))(this, update);
		}

		::System::Void Sync_1(::Class_1_B292FE068586E4C9_2* bonusInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SYNC_1_OFFSET))(this, bonusInfo);
		}

		::System::Void HandleRemovedOrb(::System::UInt32 orbUniqueId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_HANDLEREMOVEDORB_OFFSET))(this, orbUniqueId);
		}

		::System::Void HandleRemovePresent(::System::UInt32 presentUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_HANDLEREMOVEPRESENT_OFFSET))(this, presentUniqueID);
		}

		::System::Void GetOrb(::System::Collections::Generic::List_1<::System::UInt32>* orbIDs, ::System::Boolean isAll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORB_OFFSET))(this, orbIDs, isAll);
		}

		::System::Int32 GetOrbCountByType(::RPG::GameCore::GridFightOrbType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBCOUNTBYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::GridFightOrbEntityData* GetOrbByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightOrbEntityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightOrbTypeData* GetOrbTypeData(::RPG::GameCore::GridFightOrbType type)
		{
			return ((::RPG::Client::GridFightOrbTypeData*(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBTYPEDATA_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* _GetOrbList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA__GETORBLIST_OFFSET))(this);
		}

		::System::Void ClearOrb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_CLEARORB_OFFSET))(this);
		}

		::Class_1_E223664CCFC59063* GetAndCreateOrbPosition(::System::UInt32 orbID, ::System::Double width, ::System::Double height, ::System::Double radius, ::System::Collections::Generic::List_1<::Class_1_E223664CCFC59063*>* existingCircles)
		{
			return ((::Class_1_E223664CCFC59063*(*)(::PVOID, ::System::UInt32, ::System::Double, ::System::Double, ::System::Double, ::System::Collections::Generic::List_1<::Class_1_E223664CCFC59063*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETANDCREATEORBPOSITION_OFFSET))(this, orbID, width, height, radius, existingCircles);
		}

		::System::Boolean get_HasOrb()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_HASORB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* get_OrbList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPresentEntity*>* get_Presents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPresentEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_PRESENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* get_OrbListWithoutBattleResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBLISTWITHOUTBATTLERESULT_OFFSET))(this);
		}

		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>* get_OrbDict()
		{
			return ((::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBDICT_OFFSET))(this);
		}

		::System::Void set_OrbDict(::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_ORBDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>* get_OrbPosByID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBPOSBYID_OFFSET))(this);
		}

		::System::Void set_OrbPosByID(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_ORBPOSBYID_OFFSET))(this, value);
		}

		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>* get_PresentDict()
		{
			return ((::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_PRESENTDICT_OFFSET))(this);
		}

		::System::Void set_PresentDict(::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_PRESENTDICT_OFFSET))(this, value);
		}
	};
}

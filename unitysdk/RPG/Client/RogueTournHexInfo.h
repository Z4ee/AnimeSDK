#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_108;
class Class_1_075C34D03AFA1215_91;
namespace RPG::Client { class IRogueTournHex; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNHEXINFO_ADDHEX_OFFSET UNITYSDK_OFFSET(0xC821D80)
#define RPG_CLIENT_ROGUETOURNHEXINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xC821C50)
#define RPG_CLIENT_ROGUETOURNHEXINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC821CF0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_GETACHIVEDHEXES_OFFSET UNITYSDK_OFFSET(0xC821F30)
#define RPG_CLIENT_ROGUETOURNHEXINFO_GET_ACHIVEDHEXIDS_OFFSET UNITYSDK_OFFSET(0xC821C40)
#define RPG_CLIENT_ROGUETOURNHEXINFO_ISHEXACHIEVED_OFFSET UNITYSDK_OFFSET(0xC822100)
#define RPG_CLIENT_ROGUETOURNHEXINFO_REMOVEHEX_OFFSET UNITYSDK_OFFSET(0xC821E40)
#define RPG_CLIENT_ROGUETOURNHEXINFO_SYNCEQUIPMENT_OFFSET UNITYSDK_OFFSET(0xC822520)
#define RPG_CLIENT_ROGUETOURNHEXINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xC822160)
#define RPG_CLIENT_ROGUETOURNHEXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC821CC0)
#define RPG_CLIENT_ROGUETOURNHEXINFO__SYNCHEXES_OFFSET UNITYSDK_OFFSET(0xC8221D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexInfo_TypeDefinitionIndex = 63310;

	class RogueTournHexInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AchivedHexIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_AchivedHexIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_GET_ACHIVEDHEXIDS_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournHexInfo* Create()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AddHex(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_ADDHEX_OFFSET))(this, a1);
		}

		::System::Boolean RemoveHex(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_REMOVEHEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournHex*>* GetAchivedHexes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_GETACHIVEDHEXES_OFFSET))(this);
		}

		::System::Boolean IsHexAchieved(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_ISHEXACHIEVED_OFFSET))(this, a1);
		}

		::System::Void SyncFull(::Class_1_075C34D03AFA1215_108* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_108*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_SYNCFULL_OFFSET))(this, a1);
		}

		::System::Void SyncEquipment(::Class_1_075C34D03AFA1215_91* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_SYNCEQUIPMENT_OFFSET))(this, a1);
		}

		::System::Void _SyncHexes(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO__SYNCHEXES_OFFSET))(this, a1);
		}
	};
}

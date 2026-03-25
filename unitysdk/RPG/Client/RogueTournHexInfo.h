#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_78;
class Class_1_6E708EAB438EC183_96;
namespace RPG::Client { class IRogueTournHex; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNHEXINFO_ADDHEX_OFFSET UNITYSDK_OFFSET(0xA39A150)
#define RPG_CLIENT_ROGUETOURNHEXINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xA39A020)
#define RPG_CLIENT_ROGUETOURNHEXINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA39A0C0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_GETACHIVEDHEXES_OFFSET UNITYSDK_OFFSET(0xA39A300)
#define RPG_CLIENT_ROGUETOURNHEXINFO_GET_ACHIVEDHEXIDS_OFFSET UNITYSDK_OFFSET(0xA39A010)
#define RPG_CLIENT_ROGUETOURNHEXINFO_ISHEXACHIEVED_OFFSET UNITYSDK_OFFSET(0xA39A510)
#define RPG_CLIENT_ROGUETOURNHEXINFO_REMOVEHEX_OFFSET UNITYSDK_OFFSET(0xA39A210)
#define RPG_CLIENT_ROGUETOURNHEXINFO_SYNCEQUIPMENT_OFFSET UNITYSDK_OFFSET(0xA39A920)
#define RPG_CLIENT_ROGUETOURNHEXINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xA39A570)
#define RPG_CLIENT_ROGUETOURNHEXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA39A090)
#define RPG_CLIENT_ROGUETOURNHEXINFO__SYNCHEXES_OFFSET UNITYSDK_OFFSET(0xA39A5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexInfo_TypeDefinitionIndex = 55189;

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

		::System::Boolean AddHex(::System::UInt32 hexID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_ADDHEX_OFFSET))(this, hexID);
		}

		::System::Boolean RemoveHex(::System::UInt32 hexID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_REMOVEHEX_OFFSET))(this, hexID);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournHex*>* GetAchivedHexes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_GETACHIVEDHEXES_OFFSET))(this);
		}

		::System::Boolean IsHexAchieved(::System::UInt32 hexID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_ISHEXACHIEVED_OFFSET))(this, hexID);
		}

		::System::Void SyncFull(::Class_1_6E708EAB438EC183_96* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_SYNCFULL_OFFSET))(this, proto);
		}

		::System::Void SyncEquipment(::Class_1_6E708EAB438EC183_78* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_SYNCEQUIPMENT_OFFSET))(this, proto);
		}

		::System::Void _SyncHexes(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* hexIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO__SYNCHEXES_OFFSET))(this, hexIDs);
		}
	};
}

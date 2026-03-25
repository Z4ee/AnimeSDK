#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_51;
class Class_1_FA4F4A67B1C04320_758;
namespace RPG::Client { class RogueTournTitanBless; }
namespace RPG::GameCore { class MazeBuffData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_ADDBLESS_OFFSET UNITYSDK_OFFSET(0xA3D7D20)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_CREATEDISPLAYDATABYMAZEBUFFS_OFFSET UNITYSDK_OFFSET(0xA3D6D90)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3D74D0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETALLTITANBLESSES_OFFSET UNITYSDK_OFFSET(0xA3D88F0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETDAYBLESSRATIO_1_OFFSET UNITYSDK_OFFSET(0xA3D7C00)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETDAYBLESSRATIO_OFFSET UNITYSDK_OFFSET(0xA3D8110)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETNIGHTBLESSRATIO_OFFSET UNITYSDK_OFFSET(0xA3D8A90)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETTIMESPEEDUPRATIO_1_OFFSET UNITYSDK_OFFSET(0xA3D7C90)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETTIMESPEEDUPRATIO_OFFSET UNITYSDK_OFFSET(0xA3D84A0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GET_MAX_TIME_SPEED_UP_RATIO_OFFSET UNITYSDK_OFFSET(0xA3D87F0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_ISOWNEDBLESS_OFFSET UNITYSDK_OFFSET(0xA3D8930)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_REMOVEBLESS_OFFSET UNITYSDK_OFFSET(0xA3D7FD0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA3D76E0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3D8B50)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D7480)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO__TRYINITMAZEBUFF2BLESSKEY_OFFSET UNITYSDK_OFFSET(0xA3D71F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanBlessInfo_TypeDefinitionIndex = 55361;

	class RogueTournTitanBlessInfo : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_POLAR_NIGHT_RATIO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanBlessInfo_TypeDefinitionIndex)->GetStaticField(0x8580);
		}
		static ::System::Int32* StaticGet_POLAR_DAY_RATIO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanBlessInfo_TypeDefinitionIndex)->GetStaticField(0x8584);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _MazeBuff2BlessIndex; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* _OwnedBlesses; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* CreateDisplayDataByMazeBuffs(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MazeBuffData*>* mazeBuffs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MazeBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_CREATEDISPLAYDATABYMAZEBUFFS_OFFSET))(this, mazeBuffs);
		}

		::System::Void _TryInitMazeBuff2BlessKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO__TRYINITMAZEBUFF2BLESSKEY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_99BD961747420BEB_51* titanBlessList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_SYNC_OFFSET))(this, titanBlessList);
		}

		::System::Void AddBless(::Class_1_FA4F4A67B1C04320_758* bless)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_758*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_ADDBLESS_OFFSET))(this, bless);
		}

		::System::Void RemoveBless(::Class_1_FA4F4A67B1C04320_758* bless)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_758*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_REMOVEBLESS_OFFSET))(this, bless);
		}

		static ::System::Single GetDayBlessRatio(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournTitanBless*>* blesses)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournTitanBless*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETDAYBLESSRATIO_OFFSET))(blesses);
		}

		static ::System::UInt32 GetTimeSpeedUpRatio(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournTitanBless*>* blesses)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournTitanBless*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETTIMESPEEDUPRATIO_OFFSET))(blesses);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* GetAllTitanBlesses()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETALLTITANBLESSES_OFFSET))(this);
		}

		::System::Boolean IsOwnedBless(::RPG::Client::RogueTournTitanBless* bless)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournTitanBless*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_ISOWNEDBLESS_OFFSET))(this, bless);
		}

		::System::Single GetDayBlessRatio_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETDAYBLESSRATIO_1_OFFSET))(this);
		}

		::System::Single GetNightBlessRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETNIGHTBLESSRATIO_OFFSET))(this);
		}

		::System::UInt32 GetTimeSpeedUpRatio_1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETTIMESPEEDUPRATIO_1_OFFSET))(this);
		}

		static ::System::UInt32 get_MAX_TIME_SPEED_UP_RATIO()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GET_MAX_TIME_SPEED_UP_RATIO_OFFSET))();
		}
	};
}

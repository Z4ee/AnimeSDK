#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_833;
class Class_1_F487A56015EDF324_2;
namespace RPG::Client { class RogueTournTitanBless; }
namespace RPG::GameCore { class MazeBuffData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_ADDBLESS_OFFSET UNITYSDK_OFFSET(0xC863190)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_CREATEDISPLAYDATABYMAZEBUFFS_OFFSET UNITYSDK_OFFSET(0xC862110)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8628F0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETALLTITANBLESSES_OFFSET UNITYSDK_OFFSET(0xC863DF0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETDAYBLESSRATIO_1_OFFSET UNITYSDK_OFFSET(0xC863070)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETDAYBLESSRATIO_OFFSET UNITYSDK_OFFSET(0xC8635F0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETNIGHTBLESSRATIO_OFFSET UNITYSDK_OFFSET(0xC863F90)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETTIMESPEEDUPRATIO_1_OFFSET UNITYSDK_OFFSET(0xC863100)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETTIMESPEEDUPRATIO_OFFSET UNITYSDK_OFFSET(0xC863990)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GET_MAX_TIME_SPEED_UP_RATIO_OFFSET UNITYSDK_OFFSET(0xC863CF0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_ISOWNEDBLESS_OFFSET UNITYSDK_OFFSET(0xC863E30)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_REMOVEBLESS_OFFSET UNITYSDK_OFFSET(0xC863490)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC862B00)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xC864050)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC8628A0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSINFO__TRYINITMAZEBUFF2BLESSKEY_OFFSET UNITYSDK_OFFSET(0xC8625A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanBlessInfo_TypeDefinitionIndex = 63485;

	class RogueTournTitanBlessInfo : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_POLAR_NIGHT_RATIO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanBlessInfo_TypeDefinitionIndex)->GetStaticField(0xBEB0);
		}
		static ::System::Int32* StaticGet_POLAR_DAY_RATIO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanBlessInfo_TypeDefinitionIndex)->GetStaticField(0xBEB4);
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

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* CreateDisplayDataByMazeBuffs(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MazeBuffData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MazeBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_CREATEDISPLAYDATABYMAZEBUFFS_OFFSET))(this, a1);
		}

		::System::Void _TryInitMazeBuff2BlessKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO__TRYINITMAZEBUFF2BLESSKEY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F487A56015EDF324_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void AddBless(::Class_1_D17272E82AE804C2_833* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_833*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_ADDBLESS_OFFSET))(this, a1);
		}

		::System::Void RemoveBless(::Class_1_D17272E82AE804C2_833* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_833*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_REMOVEBLESS_OFFSET))(this, a1);
		}

		static ::System::Single GetDayBlessRatio(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournTitanBless*>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournTitanBless*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETDAYBLESSRATIO_OFFSET))(a1);
		}

		static ::System::UInt32 GetTimeSpeedUpRatio(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournTitanBless*>* a1)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournTitanBless*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETTIMESPEEDUPRATIO_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* GetAllTitanBlesses()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_GETALLTITANBLESSES_OFFSET))(this);
		}

		::System::Boolean IsOwnedBless(::RPG::Client::RogueTournTitanBless* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournTitanBless*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSINFO_ISOWNEDBLESS_OFFSET))(this, a1);
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

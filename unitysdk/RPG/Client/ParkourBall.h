#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourSkill; }
namespace RPG::GameCore { class ParkourRailBallConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define RPG_CLIENT_PARKOURBALL_CREATE_OFFSET UNITYSDK_OFFSET(0xAC22660)
#define RPG_CLIENT_PARKOURBALL_FILLSUBMISSIONIDTO_OFFSET UNITYSDK_OFFSET(0xAC226D0)
#define RPG_CLIENT_PARKOURBALL_GET_BIGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xAC22460)
#define RPG_CLIENT_PARKOURBALL_GET_CHARGINGEFFICIENCY_OFFSET UNITYSDK_OFFSET(0xAC224C0)
#define RPG_CLIENT_PARKOURBALL_GET_ID_OFFSET UNITYSDK_OFFSET(0xAC223F0)
#define RPG_CLIENT_PARKOURBALL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xAC22440)
#define RPG_CLIENT_PARKOURBALL_GET_ISUPGRADE_OFFSET UNITYSDK_OFFSET(0xAC22500)
#define RPG_CLIENT_PARKOURBALL_GET_MODELPREFABPATH_OFFSET UNITYSDK_OFFSET(0xAC224E0)
#define RPG_CLIENT_PARKOURBALL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAC22410)
#define RPG_CLIENT_PARKOURBALL_GET_SKILL_OFFSET UNITYSDK_OFFSET(0xAC22600)
#define RPG_CLIENT_PARKOURBALL_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xAC22480)
#define RPG_CLIENT_PARKOURBALL_GET_STABILITY_OFFSET UNITYSDK_OFFSET(0xAC224A0)
#define RPG_CLIENT_PARKOURBALL_GET_UPGRADEID_OFFSET UNITYSDK_OFFSET(0xAC225E0)
#define RPG_CLIENT_PARKOURBALL__CTOR_OFFSET UNITYSDK_OFFSET(0xAC226C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourBall_TypeDefinitionIndex = 57033;

	class ParkourBall : public ::System::Object
	{
	public:
		::RPG::GameCore::ParkourRailBallConfigRow* _Meta; // 0x10

		::System::Void _ctor(::RPG::GameCore::ParkourRailBallConfigRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourRailBallConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL__CTOR_OFFSET))(this, meta);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_BigImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_BIGIMAGEPATH_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_SPEED_OFFSET))(this);
		}

		::System::Single get_Stability()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_STABILITY_OFFSET))(this);
		}

		::System::Single get_ChargingEfficiency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_CHARGINGEFFICIENCY_OFFSET))(this);
		}

		::System::String* get_ModelPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_MODELPREFABPATH_OFFSET))(this);
		}

		::System::Boolean get_IsUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_ISUPGRADE_OFFSET))(this);
		}

		::System::UInt32 get_UpgradeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_UPGRADEID_OFFSET))(this);
		}

		::RPG::Client::ParkourSkill* get_Skill()
		{
			return ((::RPG::Client::ParkourSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_GET_SKILL_OFFSET))(this);
		}

		static ::RPG::Client::ParkourBall* Create(::RPG::GameCore::ParkourRailBallConfigRow* meta)
		{
			return ((::RPG::Client::ParkourBall*(*)(::RPG::GameCore::ParkourRailBallConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_CREATE_OFFSET))(meta);
		}

		::System::Void FillSubmissionIDTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALL_FILLSUBMISSIONIDTO_OFFSET))(this, buffer);
		}
	};
}

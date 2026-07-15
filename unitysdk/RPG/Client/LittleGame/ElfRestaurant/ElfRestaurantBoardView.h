#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/ElfRestaurantView.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"

namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantCameraView; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW_GETCURRENTSUPEREVENTVCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x189E0D10)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW_SETBUILDVCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0x189E0D70)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW_SETRESTAURANTVCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0x189E0F80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW_SETRESTAURANTVCAMERAPHASE2ACTIVE_OFFSET UNITYSDK_OFFSET(0x189E1190)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x189E13A0)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantBoardView_TypeDefinitionIndex = 73325;

	class ElfRestaurantBoardView : public ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView* BuildVCameraView; // 0x68
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView* BuildVCameraView4x3; // 0x70
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView* VCameraView; // 0x78
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView* VCameraViewPhase2; // 0x80
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView* VCameraView4x3; // 0x88
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView* VCameraView4x3Phase2; // 0x90
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView* VCameraViewPlatform; // 0x98
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView* VCameraViewOrderTable; // 0xA0
		::System::Int32 VCameraViewPhase2ActiveTableCount; // 0xA8
		::Il2CppArray<::System::UInt32>* VCameraViewPhase2UnlockFacilityIDs; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView* GetCurrentSuperEventVCameraView(::RPG::GameCore::RestaurantSuperEventType a1)
		{
			return ((::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantCameraView*(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW_GETCURRENTSUPEREVENTVCAMERAVIEW_OFFSET))(this, a1);
		}

		::System::Void SetBuildVCameraActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW_SETBUILDVCAMERAACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetRestaurantVCameraActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW_SETRESTAURANTVCAMERAACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetRestaurantVCameraPhase2Active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTBOARDVIEW_SETRESTAURANTVCAMERAPHASE2ACTIVE_OFFSET))(this, a1);
		}
	};
}

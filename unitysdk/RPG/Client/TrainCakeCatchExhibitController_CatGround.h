#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_GroundSetType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::Client { class TrainCakeCatchExhibitController_Cat; }
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB327240)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0xB3266D0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_SETCAT_OFFSET UNITYSDK_OFFSET(0xB326480)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_SETGROUNDTYPE_OFFSET UNITYSDK_OFFSET(0xB326380)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_TICK_OFFSET UNITYSDK_OFFSET(0xB325BB0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xB326DD0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__REFRESHLOCATION_OFFSET UNITYSDK_OFFSET(0xB32B0D0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__SETONSAVE_OFFSET UNITYSDK_OFFSET(0xB32B2C0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__SETPREFIX_OFFSET UNITYSDK_OFFSET(0xB32AEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController_CatGround_TypeDefinitionIndex = 55525;

	class TrainCakeCatchExhibitController_CatGround : public ::System::Object
	{
	public:
		::System::String* _AnchorName; // 0x10
		::Il2CppArray<::RPG::Client::TrainCakeCatchExhibitController_Cat*>* Cats; // 0x18
		::System::String* _AreaName; // 0x20
		::RPG::Client::TrainCakeCatchExhibitController* _Owner; // 0x28
		::RPG::Client::TrainCakeCatchExhibitController_CatGroundType _GroundType; // 0x30
		::System::Int32 _GroundIndex; // 0x34

		::System::Void _ctor(::RPG::Client::TrainCakeCatchExhibitController* owner, ::System::String* areaName, ::System::String* anchorName, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__CTOR_OFFSET))(this, owner, areaName, anchorName, index);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_DISPOSE_OFFSET))(this);
		}

		::System::Void SetGroundType(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType groundType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_SETGROUNDTYPE_OFFSET))(this, groundType);
		}

		::System::Void _RefreshLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__REFRESHLOCATION_OFFSET))(this);
		}

		::System::Void SetCat(::RPG::Client::TrainCakeCatchExhibitController_GroundSetType setType, ::System::Collections::Generic::List_1<::System::UInt32>* npcIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_GroundSetType, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_SETCAT_OFFSET))(this, setType, npcIDs);
		}

		::System::Void _SetOnSave(::System::Collections::Generic::List_1<::System::UInt32>* npcIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__SETONSAVE_OFFSET))(this, npcIDs);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void _SetPrefix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__SETPREFIX_OFFSET))(this);
		}

		::RPG::GameCore::AnchorInfo* get_Anchor()
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_GET_ANCHOR_OFFSET))(this);
		}
	};
}

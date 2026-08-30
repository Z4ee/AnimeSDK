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

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE234020)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0xE2335D0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_SETCAT_OFFSET UNITYSDK_OFFSET(0xE233380)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_SETGROUNDTYPE_OFFSET UNITYSDK_OFFSET(0xE233290)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_TICK_OFFSET UNITYSDK_OFFSET(0xE232A80)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xE233CA0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__REFRESHLOCATION_OFFSET UNITYSDK_OFFSET(0xE237F60)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__SETONSAVE_OFFSET UNITYSDK_OFFSET(0xE238150)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__SETPREFIX_OFFSET UNITYSDK_OFFSET(0xE237D90)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController_CatGround_TypeDefinitionIndex = 60332;

	class TrainCakeCatchExhibitController_CatGround : public ::System::Object
	{
	public:
		::System::String* _AreaName; // 0x10
		::RPG::Client::TrainCakeCatchExhibitController* _Owner; // 0x18
		::System::String* _AnchorName; // 0x20
		::Il2CppArray<::RPG::Client::TrainCakeCatchExhibitController_Cat*>* Cats; // 0x28
		::RPG::Client::TrainCakeCatchExhibitController_CatGroundType _GroundType; // 0x30
		::System::Int32 _GroundIndex; // 0x34

		::System::Void _ctor(::RPG::Client::TrainCakeCatchExhibitController* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_DISPOSE_OFFSET))(this);
		}

		::System::Void SetGroundType(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_SETGROUNDTYPE_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__REFRESHLOCATION_OFFSET))(this);
		}

		::System::Void SetCat(::RPG::Client::TrainCakeCatchExhibitController_GroundSetType a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_GroundSetType, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_SETCAT_OFFSET))(this, a1, a2);
		}

		::System::Void _SetOnSave(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND__SETONSAVE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CATGROUND_TICK_OFFSET))(this, a1);
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

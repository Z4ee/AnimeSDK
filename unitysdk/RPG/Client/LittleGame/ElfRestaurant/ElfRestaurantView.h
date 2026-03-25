#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETDIALOGATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x99AA9E0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETEFFECTROOT_OFFSET UNITYSDK_OFFSET(0x99AA920)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0x99AA880)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETROOT_OFFSET UNITYSDK_OFFSET(0x99AA8C0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETTIPATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x99AA980)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x99AA640)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x99AA7E0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x99A93D0)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantView_TypeDefinitionIndex = 62945;

	class ElfRestaurantView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::UnityEngine::Transform* Root; // 0x20
		::UnityEngine::Transform* EffectRoot; // 0x28
		::UnityEngine::Transform* TipAttachPoint; // 0x30
		::UnityEngine::Transform* DialogRoot; // 0x38
		::UnityEngine::GameObject* ArtGO; // 0x40
		::System::UInt32 ID; // 0x48
		::Class_2_43D1AA62A6D00FFF* _Context; // 0x50
		::Class_3_F4528A5C0F861AF2* _Services; // 0x58
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* _Entity; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* context, ::Class_1_47EE63CB5C4DC8FC_5* services, ::Entitas::IEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_INITIALIZE_OFFSET))(this, context, services, entity);
		}

		::System::Void Release(::System::String* asset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_RELEASE_OFFSET))(this, asset);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETENTITY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetEffectRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETEFFECTROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTipAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETTIPATTACHPOINT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetDialogAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETDIALOGATTACHPOINT_OFFSET))(this);
		}
	};
}

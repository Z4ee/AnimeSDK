#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETDIALOGATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD4D6090)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETEFFECTROOT_OFFSET UNITYSDK_OFFSET(0xD4D5FD0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD4D5F30)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETROOT_OFFSET UNITYSDK_OFFSET(0xD4D5F70)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_GETTIPATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD4D6030)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD4D5CF0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD4D5E90)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD4D4C00)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantView_TypeDefinitionIndex = 76812;

	class ElfRestaurantView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::UnityEngine::Transform* Root; // 0x20
		::UnityEngine::Transform* EffectRoot; // 0x28
		::UnityEngine::Transform* TipAttachPoint; // 0x30
		::UnityEngine::Transform* DialogRoot; // 0x38
		::UnityEngine::GameObject* ArtGO; // 0x40
		::System::UInt32 ID; // 0x48
		::Class_2_80F8710F847F1248* _Context; // 0x50
		::Class_3_F4528A5C0F861AF2* _Services; // 0x58
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* _Entity; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTVIEW_RELEASE_OFFSET))(this, a1);
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

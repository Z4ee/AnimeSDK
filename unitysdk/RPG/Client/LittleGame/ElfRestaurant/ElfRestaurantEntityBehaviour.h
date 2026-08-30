#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/EntityBehaviour.h"

class Class_1_A4633252561E9217;
class Class_2_80F8710F847F1248;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0xD4D4C80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0xD4D5130)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_4D1AEFF22FC4A62A_1_OFFSET UNITYSDK_OFFSET(0xD4D5B20)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_4D1AEFF22FC4A62A_OFFSET UNITYSDK_OFFSET(0xD4D59A0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD4D57E0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0xD4D5630)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0xD4D4E80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD4D5CA0)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantEntityBehaviour_TypeDefinitionIndex = 76778;

	class ElfRestaurantEntityBehaviour : public ::Entitas::VisualDebugging::Unity::EntityBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_s_ShowDebugBillBoard()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x142A0);
		}
		// static const ::System::Single DFOHPAMBNFF; // 0x0
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* KAKEIDJDNHJ; // 0x38
		::Class_2_80F8710F847F1248* EEFMDEHLLFI; // 0x40
		::Class_1_A4633252561E9217* DODNHKCLIGO; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Entitas::IContext* a1, ::Entitas::IEntity* a2, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_3D2B77EBCAE390AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_3D2B77EBCAE390AB_OFFSET))(this);
		}

		::System::Void onEntityReleased(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_4D1AEFF22FC4A62A(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_4D1AEFF22FC4A62A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_4D1AEFF22FC4A62A_1(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_4D1AEFF22FC4A62A_1_OFFSET))(this, a1, a2, a3);
		}
	};
}

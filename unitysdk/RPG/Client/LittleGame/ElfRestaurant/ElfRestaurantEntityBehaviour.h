#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/EntityBehaviour.h"

class Class_1_1C70C3ABA311626B;
class Class_2_80F8710F847F1248;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0xBDEAB50)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_4D1AEFF22FC4A62A_1_OFFSET UNITYSDK_OFFSET(0xBDEBA80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_4D1AEFF22FC4A62A_OFFSET UNITYSDK_OFFSET(0xBDEB940)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xBDEB080)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBDEB780)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0xBDEB5D0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0xBDEAD50)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEBBC0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBDEBBD0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBDEBC90)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0xBDEBC80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xBDEBBE0)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantEntityBehaviour_TypeDefinitionIndex = 71773;

	class ElfRestaurantEntityBehaviour : public ::Entitas::VisualDebugging::Unity::EntityBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_s_ShowDebugBillBoard()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0xE130);
		}
		// static const ::System::Single Field_6_1; // 0x0
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_6_2; // 0x38
		::Class_2_80F8710F847F1248* Field_6_3; // 0x40
		::Class_1_1C70C3ABA311626B* Field_6_4; // 0x48

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

		::System::Void Method_6_B9A97467188E4B69()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_B9A97467188E4B69_OFFSET))(this);
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

		::System::Void __iFixBaseProxy_Init(::Entitas::IContext* a1, ::Entitas::IEntity* a2, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_onEntityReleased(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}

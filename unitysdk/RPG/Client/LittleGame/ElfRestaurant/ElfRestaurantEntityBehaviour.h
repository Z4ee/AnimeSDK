#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/EntityBehaviour.h"

class Class_1_1C70C3ABA311626B;
class Class_2_43D1AA62A6D00FFF;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x99A9450)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_73C16B30568A7333_1_OFFSET UNITYSDK_OFFSET(0x99AA3F0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_73C16B30568A7333_OFFSET UNITYSDK_OFFSET(0x99AA2C0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x99A99D0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x99AA140)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x99A9FA0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x99A9630)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x99AA520)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x99AA530)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x99AA5F0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x99AA5E0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x99AA540)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantEntityBehaviour_TypeDefinitionIndex = 62911;

	class ElfRestaurantEntityBehaviour : public ::Entitas::VisualDebugging::Unity::EntityBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_s_ShowDebugBillBoard()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x98C0);
		}
		// static const ::System::Single Field_6_4; // 0x0
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_6_0; // 0x38
		::Class_2_43D1AA62A6D00FFF* Field_6_1; // 0x40
		::Class_1_1C70C3ABA311626B* Field_6_2; // 0x48

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

		::System::Void Method_6_73C16B30568A7333(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_73C16B30568A7333_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_73C16B30568A7333_1(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR_METHOD_6_73C16B30568A7333_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Init(::Entitas::IContext* P0, ::Entitas::IEntity* P1, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* P2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_onEntityReleased(::Entitas::IEntity* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_ONENTITYRELEASED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTENTITYBEHAVIOUR___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}

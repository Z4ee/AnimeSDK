#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceRejectionType.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingSource; }
namespace InControl { class PlayerAction; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FDBBC0)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FDBBF0)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x9FDBC00)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x9FDBDF0)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_2_OFFSET UNITYSDK_OFFSET(0x9FDBE00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerAdventureActions___c_TypeDefinitionIndex = 49736;

	class PlayerAdventureActions___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PlayerAdventureActions___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerAdventureActions___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions___c_TypeDefinitionIndex)->GetStaticField(0x46FC0);
		}
		static ::System::Action_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType>** StaticGet___9__1_2()
		{
			return (::System::Action_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType>**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions___c_TypeDefinitionIndex)->GetStaticField(0x46FC8);
		}
		static ::System::Func_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions___c_TypeDefinitionIndex)->GetStaticField(0x46FD0);
		}
		static ::System::Action_2<::InControl::PlayerAction*, ::InControl::BindingSource*>** StaticGet___9__1_1()
		{
			return (::System::Action_2<::InControl::PlayerAction*, ::InControl::BindingSource*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions___c_TypeDefinitionIndex)->GetStaticField(0x46FD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Init_b__1_0(::InControl::PlayerAction* action, ::InControl::BindingSource* binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_0_OFFSET))(this, action, binding);
		}

		::System::Void _Init_b__1_1(::InControl::PlayerAction* action, ::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_1_OFFSET))(this, action, binding);
		}

		::System::Void _Init_b__1_2(::InControl::PlayerAction* action, ::InControl::BindingSource* binding, ::InControl::BindingSourceRejectionType reason)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_2_OFFSET))(this, action, binding, reason);
		}
	};
}

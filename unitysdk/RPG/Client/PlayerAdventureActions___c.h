#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceRejectionType.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingSource; }
namespace InControl { class PlayerAction; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E8600)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E8630)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A1E8640)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x1A1E87F0)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_2_OFFSET UNITYSDK_OFFSET(0x1A1E8800)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerAdventureActions___c_TypeDefinitionIndex = 58595;

	class PlayerAdventureActions___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType>** StaticGet___9__1_2()
		{
			return (::System::Action_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType>**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions___c_TypeDefinitionIndex)->GetStaticField(0x68AA0);
		}
		static ::System::Func_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions___c_TypeDefinitionIndex)->GetStaticField(0x68AA8);
		}
		static ::System::Action_2<::InControl::PlayerAction*, ::InControl::BindingSource*>** StaticGet___9__1_1()
		{
			return (::System::Action_2<::InControl::PlayerAction*, ::InControl::BindingSource*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions___c_TypeDefinitionIndex)->GetStaticField(0x68AB0);
		}
		static ::RPG::Client::PlayerAdventureActions___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerAdventureActions___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerAdventureActions___c_TypeDefinitionIndex)->GetStaticField(0x68AB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Init_b__1_0(::InControl::PlayerAction* a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__1_1(::InControl::PlayerAction* a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_1_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__1_2(::InControl::PlayerAction* a1, ::InControl::BindingSource* a2, ::InControl::BindingSourceRejectionType a3)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS___C__INIT_B__1_2_OFFSET))(this, a1, a2, a3);
		}
	};
}

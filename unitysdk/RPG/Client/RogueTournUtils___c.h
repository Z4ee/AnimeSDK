#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_0_OFFSET UNITYSDK_OFFSET(0xA3E7920)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_1_OFFSET UNITYSDK_OFFSET(0xA3E79A0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_2_OFFSET UNITYSDK_OFFSET(0xA3E7A00)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_3_OFFSET UNITYSDK_OFFSET(0xA3E7A90)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_4_OFFSET UNITYSDK_OFFSET(0xA3E7AC0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3E76F0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E7720)
#define RPG_CLIENT_ROGUETOURNUTILS___C__GETSORTEDROOMCARDINGAME_B__26_0_OFFSET UNITYSDK_OFFSET(0xA3E7730)
#define RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__32_0_OFFSET UNITYSDK_OFFSET(0xA3E7740)
#define RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__32_1_OFFSET UNITYSDK_OFFSET(0xA3E78C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c_TypeDefinitionIndex = 55317;

	class RogueTournUtils___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__49_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x1FF10);
		}
		static ::System::Action** StaticGet___9__32_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x1FF18);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x1FF20);
		}
		static ::System::Func_2<::XLua::LuaTable*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__49_3()
		{
			return (::System::Func_2<::XLua::LuaTable*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x1FF28);
		}
		static ::System::Action** StaticGet___9__49_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x1FF30);
		}
		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x1FF38);
		}
		static ::System::Action** StaticGet___9__49_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x1FF40);
		}
		static ::System::Action** StaticGet___9__49_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x1FF48);
		}
		static ::RPG::Client::RogueTournUtils___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournUtils___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x1FF50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* _GetSortedRoomCardInGame_b__26_0(::RPG::Client::IRogueTournPersonaRoomCardInGame* x)
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__GETSORTEDROOMCARDINGAME_B__26_0_OFFSET))(this, x);
		}

		::System::Void _ShowTournExpRewardPageFromActivityPanel_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__32_0_OFFSET))(this);
		}

		::System::Void _ShowTournExpRewardPageFromActivityPanel_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__32_1_OFFSET))(this);
		}

		::System::Void _BackToModeSelectPage_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_0_OFFSET))(this);
		}

		::System::Void _BackToModeSelectPage_b__49_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_1_OFFSET))(this);
		}

		::System::Void _BackToModeSelectPage_b__49_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _BackToModeSelectPage_b__49_3(::XLua::LuaTable* _)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_3_OFFSET))(this, _);
		}

		::System::Void _BackToModeSelectPage_b__49_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__49_4_OFFSET))(this);
		}
	};
}

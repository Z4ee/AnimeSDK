#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PLAYERMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FED5A0)
#define RPG_CLIENT_PLAYERMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FED5E0)
#define RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_1_OFFSET UNITYSDK_OFFSET(0x9FED5F0)
#define RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_2_OFFSET UNITYSDK_OFFSET(0x9FED630)
#define RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_3_OFFSET UNITYSDK_OFFSET(0x9FED670)
#define RPG_CLIENT_PLAYERMODULE___C___ONCMDPLAYERLOGINSCRSP_B__58_1_OFFSET UNITYSDK_OFFSET(0x9FED6B0)
#define RPG_CLIENT_PLAYERMODULE___C___ONCMDPLAYERLOGINSCRSP_B__58_2_OFFSET UNITYSDK_OFFSET(0x9FED700)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerModule___c_TypeDefinitionIndex = 54281;

	class PlayerModule___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__58_2()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayerModule___c_TypeDefinitionIndex)->GetStaticField(0x47350);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__57_3()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayerModule___c_TypeDefinitionIndex)->GetStaticField(0x47358);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__57_2()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayerModule___c_TypeDefinitionIndex)->GetStaticField(0x47360);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__57_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayerModule___c_TypeDefinitionIndex)->GetStaticField(0x47368);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__58_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayerModule___c_TypeDefinitionIndex)->GetStaticField(0x47370);
		}
		static ::RPG::Client::PlayerModule___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerModule___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerModule___c_TypeDefinitionIndex)->GetStaticField(0x47378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __CmdPlayerGetTokenScRsp_b__57_1(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_1_OFFSET))(this, isOk);
		}

		::System::Void __CmdPlayerGetTokenScRsp_b__57_2(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_2_OFFSET))(this, isOk);
		}

		::System::Void __CmdPlayerGetTokenScRsp_b__57_3(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_3_OFFSET))(this, isOk);
		}

		::System::Void __OnCmdPlayerLoginScRsp_b__58_1(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___ONCMDPLAYERLOGINSCRSP_B__58_1_OFFSET))(this, isOk);
		}

		::System::Void __OnCmdPlayerLoginScRsp_b__58_2(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___ONCMDPLAYERLOGINSCRSP_B__58_2_OFFSET))(this, isOk);
		}
	};
}

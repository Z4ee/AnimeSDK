#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_8.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAE6B40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE6B80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSGAME_B__25_0_OFFSET UNITYSDK_OFFSET(0xDAE6B90)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSGAME_B__25_1_OFFSET UNITYSDK_OFFSET(0xDAE6BA0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_0_OFFSET UNITYSDK_OFFSET(0xDAE6BD0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_1_OFFSET UNITYSDK_OFFSET(0xDAE6BB0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_2_OFFSET UNITYSDK_OFFSET(0xDAE6BC0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleModule___c_TypeDefinitionIndex = 74720;

	class PetMarbleModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Struct_2_884CDB9D0FDFAF0D_8, ::System::Boolean>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::Struct_2_884CDB9D0FDFAF0D_8, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PetMarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x1AF40);
		}
		static ::RPG::Client::PetMarble::PetMarbleModule___c** StaticGet___9()
		{
			return (::RPG::Client::PetMarble::PetMarbleModule___c**)Il2CppClass::FromTypeDefinitionIndex(PetMarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x1AF48);
		}
		static ::System::Func_2<::Struct_2_884CDB9D0FDFAF0D_8, ::System::Boolean>** StaticGet___9__26_2()
		{
			return (::System::Func_2<::Struct_2_884CDB9D0FDFAF0D_8, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PetMarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x1AF50);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PetMarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x1AF58);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PetMarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x1AF60);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PetMarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x1AF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _StartMarbleCoopBossGame_b__25_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSGAME_B__25_0_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarbleCoopBossGame_b__25_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSGAME_B__25_1_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarbleCoopBossPveGame_b__26_1(::Struct_2_884CDB9D0FDFAF0D_8 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_884CDB9D0FDFAF0D_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_1_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarbleCoopBossPveGame_b__26_2(::Struct_2_884CDB9D0FDFAF0D_8 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_884CDB9D0FDFAF0D_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_2_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarbleCoopBossPveGame_b__26_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_0_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD21BF30)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD21BF70)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_0_OFFSET UNITYSDK_OFFSET(0xD21BF80)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_1_OFFSET UNITYSDK_OFFSET(0xD21BF90)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_2_OFFSET UNITYSDK_OFFSET(0xD21C000)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITTRAITCONFIGS_B__11_0_OFFSET UNITYSDK_OFFSET(0xD21C050)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModuleUnlockData___c_TypeDefinitionIndex = 65262;

	class GridFightModuleUnlockData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModuleUnlockData___c_TypeDefinitionIndex)->GetStaticField(0x3E060);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__10_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModuleUnlockData___c_TypeDefinitionIndex)->GetStaticField(0x3E068);
		}
		static ::RPG::Client::GridFightModuleUnlockData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightModuleUnlockData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightModuleUnlockData___c_TypeDefinitionIndex)->GetStaticField(0x3E070);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModuleUnlockData___c_TypeDefinitionIndex)->GetStaticField(0x3E078);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModuleUnlockData___c_TypeDefinitionIndex)->GetStaticField(0x3E080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* __InitRoles_b__10_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_0_OFFSET))(this, a1);
		}

		::System::UInt32 __InitRoles_b__10_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_1_OFFSET))(this, a1);
		}

		::System::UInt32 __InitRoles_b__10_2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_2_OFFSET))(this, a1);
		}

		::System::UInt32 __InitTraitConfigs_b__11_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITTRAITCONFIGS_B__11_0_OFFSET))(this, a1);
		}
	};
}

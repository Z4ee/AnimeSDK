#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace RPG::GameCore { class GridFightSeasonPortalConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSEASON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98A0180)
#define RPG_CLIENT_GRIDFIGHTSEASON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98A01B0)
#define RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x98A01E0)
#define RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x98A0210)
#define RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_2_OFFSET UNITYSDK_OFFSET(0x98A0250)
#define RPG_CLIENT_GRIDFIGHTSEASON___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x98A01C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeason___c_TypeDefinitionIndex = 52943;

	class GridFightSeason___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GridFightSeasonPortalConfigRow*, ::System::UInt32>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightSeasonPortalConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeason___c_TypeDefinitionIndex)->GetStaticField(0x19DB0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeason___c_TypeDefinitionIndex)->GetStaticField(0x19DB8);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeason___c_TypeDefinitionIndex)->GetStaticField(0x19DC0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeason___c_TypeDefinitionIndex)->GetStaticField(0x19DC8);
		}
		static ::RPG::Client::GridFightSeason___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSeason___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeason___c_TypeDefinitionIndex)->GetStaticField(0x19DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__0_1(::RPG::GameCore::GridFightSeasonPortalConfigRow* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightSeasonPortalConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C___CTOR_B__0_1_OFFSET))(this, x);
		}

		::RPG::Client::GridFightRole* _GetRolesByTrait_b__1_0(::RPG::GameCore::GridFightRoleConfigRow* x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_0_OFFSET))(this, x);
		}

		::System::UInt32 _GetRolesByTrait_b__1_1(::RPG::Client::GridFightRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetRolesByTrait_b__1_2(::RPG::Client::GridFightRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_2_OFFSET))(this, x);
		}
	};
}

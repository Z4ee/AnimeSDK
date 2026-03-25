#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6EBEA8069CDA622C_7;
class Class_1_6EBEA8069CDA622C_8;
class Class_1_8E5A9F762BDF32F5;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x97DD3F0)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x97DD430)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0x97DD440)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET UNITYSDK_OFFSET(0x97DD460)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET UNITYSDK_OFFSET(0x97DD480)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleSttInfo___c_TypeDefinitionIndex = 52313;

	class GridFightBattleSttInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_8*, ::System::Double>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_8*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x12900);
		}
		static ::RPG::Client::GridFightBattleSttInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleSttInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x12908);
		}
		static ::System::Func_2<::Class_1_8E5A9F762BDF32F5*, ::System::Double>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_8E5A9F762BDF32F5*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x12910);
		}
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x12918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Double _Sync_b__0_0(::Class_1_8E5A9F762BDF32F5* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_8E5A9F762BDF32F5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET))(this, x);
		}

		::System::Double _Sync_b__0_1(::Class_1_6EBEA8069CDA622C_8* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET))(this, x);
		}

		::System::Double _Sync_b__0_2(::Class_1_6EBEA8069CDA622C_7* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET))(this, x);
		}
	};
}

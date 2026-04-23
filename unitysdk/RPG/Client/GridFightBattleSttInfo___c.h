#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23C1B7E6B450FFB8_7;
class Class_1_23C1B7E6B450FFB8_8;
class Class_1_F1F83A16E5B8B459_3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA456720)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA456760)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0xA456770)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET UNITYSDK_OFFSET(0xA456790)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET UNITYSDK_OFFSET(0xA4567B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleSttInfo___c_TypeDefinitionIndex = 59266;

	class GridFightBattleSttInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_F1F83A16E5B8B459_3*, ::System::Double>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_F1F83A16E5B8B459_3*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x18BA0);
		}
		static ::RPG::Client::GridFightBattleSttInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleSttInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x18BA8);
		}
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_7*, ::System::Double>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_7*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x18BB0);
		}
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_8*, ::System::Double>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_8*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x18BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Double _Sync_b__0_0(::Class_1_F1F83A16E5B8B459_3* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET))(this, x);
		}

		::System::Double _Sync_b__0_1(::Class_1_23C1B7E6B450FFB8_7* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET))(this, x);
		}

		::System::Double _Sync_b__0_2(::Class_1_23C1B7E6B450FFB8_8* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET))(this, x);
		}
	};
}

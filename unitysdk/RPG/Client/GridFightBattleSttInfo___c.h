#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17A912F7181BCCFA;
class Class_1_23C1B7E6B450FFB8_5;
class Class_1_8D398246A70BD04C_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADC6670)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC66B0)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0x1ADC66C0)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET UNITYSDK_OFFSET(0x1ADC66E0)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET UNITYSDK_OFFSET(0x1ADC6700)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleSttInfo___c_TypeDefinitionIndex = 64473;

	class GridFightBattleSttInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightBattleSttInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleSttInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x1C900);
		}
		static ::System::Func_2<::Class_1_17A912F7181BCCFA*, ::System::Double>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_17A912F7181BCCFA*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x1C908);
		}
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_5*, ::System::Double>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_5*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x1C910);
		}
		static ::System::Func_2<::Class_1_8D398246A70BD04C_2*, ::System::Double>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::Class_1_8D398246A70BD04C_2*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x1C918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Double _Sync_b__0_0(::Class_1_17A912F7181BCCFA* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_17A912F7181BCCFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET))(this, a1);
		}

		::System::Double _Sync_b__0_1(::Class_1_23C1B7E6B450FFB8_5* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET))(this, a1);
		}

		::System::Double _Sync_b__0_2(::Class_1_8D398246A70BD04C_2* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_8D398246A70BD04C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET))(this, a1);
		}
	};
}

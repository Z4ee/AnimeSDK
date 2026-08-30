#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1332;
namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_REDDOT_REDDOTCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B655E40)
#define RPG_CLIENT_REDDOT_REDDOTCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B655E80)
#define RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B655E90)
#define RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_1_OFFSET UNITYSDK_OFFSET(0x1B6560A0)
#define RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_2_OFFSET UNITYSDK_OFFSET(0x1B6562B0)
#define RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_3_OFFSET UNITYSDK_OFFSET(0x1B656090)
#define RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_4_OFFSET UNITYSDK_OFFSET(0x1B6562A0)
#define RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_5_OFFSET UNITYSDK_OFFSET(0x1B6564B0)

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotControl___c_TypeDefinitionIndex = 78702;

	class RedDotControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::RedDotType, ::System::Boolean>** StaticGet___9__3_5()
		{
			return (::System::Func_2<::RPG::GameCore::RedDotType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RedDotControl___c_TypeDefinitionIndex)->GetStaticField(0x665F0);
		}
		static ::System::Func_2<::RPG::GameCore::RedDotType, ::System::Boolean>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::RPG::GameCore::RedDotType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RedDotControl___c_TypeDefinitionIndex)->GetStaticField(0x665F8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1332*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1332*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RedDotControl___c_TypeDefinitionIndex)->GetStaticField(0x66600);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1332*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1332*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RedDotControl___c_TypeDefinitionIndex)->GetStaticField(0x66608);
		}
		static ::System::Func_2<::RPG::GameCore::RedDotType, ::System::Boolean>** StaticGet___9__3_4()
		{
			return (::System::Func_2<::RPG::GameCore::RedDotType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RedDotControl___c_TypeDefinitionIndex)->GetStaticField(0x66610);
		}
		static ::RPG::Client::RedDot::RedDotControl___c** StaticGet___9()
		{
			return (::RPG::Client::RedDot::RedDotControl___c**)Il2CppClass::FromTypeDefinitionIndex(RedDotControl___c_TypeDefinitionIndex)->GetStaticField(0x66618);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1332*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1332*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RedDotControl___c_TypeDefinitionIndex)->GetStaticField(0x66620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__3_0(::Class_0_16E4307DCC419505_1332* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1332*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean __Binding_b__3_3(::RPG::GameCore::RedDotType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RedDotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__3_1(::Class_0_16E4307DCC419505_1332* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1332*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_1_OFFSET))(this, a1);
		}

		::System::Boolean __Binding_b__3_4(::RPG::GameCore::RedDotType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RedDotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__3_2(::Class_0_16E4307DCC419505_1332* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1332*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_2_OFFSET))(this, a1);
		}

		::System::Boolean __Binding_b__3_5(::RPG::GameCore::RedDotType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RedDotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL___C___BINDING_B__3_5_OFFSET))(this, a1);
		}
	};
}

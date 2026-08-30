#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_3437ECE1CCDFA38D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_27;
class Class_0_16E4307DCC419505_28;
namespace RPG::LittleGameShare::HoyoPhysics { class PhysicsCollider2DFilterConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_42B54079EEFA03CA_METHOD_1_226898160D5BAF87_OFFSET UNITYSDK_OFFSET(0x1C1BBAC0)
#define CLASS_1_42B54079EEFA03CA_METHOD_1_43B83DD8EA6E2ABE_OFFSET UNITYSDK_OFFSET(0x1C1BBC10)
#define CLASS_1_42B54079EEFA03CA_METHOD_1_EA3118990667B298_OFFSET UNITYSDK_OFFSET(0x1C1BBB90)
#define CLASS_1_42B54079EEFA03CA_METHOD_1_F31EEB0864385EB3_OFFSET UNITYSDK_OFFSET(0x1C1BC4C0)
#define CLASS_1_42B54079EEFA03CA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1BC7B0)
#define CLASS_1_42B54079EEFA03CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BC7A0)

inline static constexpr unsigned int Class_1_42B54079EEFA03CA_TypeDefinitionIndex = 36490;

class Class_1_42B54079EEFA03CA : public ::System::Object
{
public:
	static ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig** StaticGet_FFPMCODFHPG()
	{
		return (::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42B54079EEFA03CA_TypeDefinitionIndex)->GetStaticField(0x176D0);
	}
	static ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig** StaticGet_JKBDFGBDFDD()
	{
		return (::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42B54079EEFA03CA_TypeDefinitionIndex)->GetStaticField(0x176D8);
	}
	// static const ::System::Single GHAIJJDAOJG; // 0x0
	// static const ::System::Single EDPCLCAFFIC; // 0x0
	// static const ::System::Single CNDOACOACMN; // 0x0
	// static const ::System::Single BAPPEMADOGN; // 0x0
	// static const ::System::Single EOBPGKJGFLM; // 0x0
	// static const ::System::Single NEBNKADKJGM; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42B54079EEFA03CA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_42B54079EEFA03CA__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_226898160D5BAF87(::Class_0_16E4307DCC419505_27* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_27*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_42B54079EEFA03CA_METHOD_1_226898160D5BAF87_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_EA3118990667B298(::Struct_2_3437ECE1CCDFA38D a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::Struct_2_3437ECE1CCDFA38D, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_42B54079EEFA03CA_METHOD_1_EA3118990667B298_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_43B83DD8EA6E2ABE(::Class_0_16E4307DCC419505_28* a1, ::Class_0_16E4307DCC419505_27* a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_27*>* a3, ::RPG::MVector2& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_28*, ::Class_0_16E4307DCC419505_27*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_27*>*, ::RPG::MVector2&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_42B54079EEFA03CA_METHOD_1_43B83DD8EA6E2ABE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_F31EEB0864385EB3(::Class_0_16E4307DCC419505_28* a1, ::Class_0_16E4307DCC419505_27* a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::Class_0_16E4307DCC419505_28*, ::Class_0_16E4307DCC419505_27*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_42B54079EEFA03CA_METHOD_1_F31EEB0864385EB3_OFFSET))(a1, a2, a3);
	}
};

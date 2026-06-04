#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08093FBB447FB7BD_7;
class Class_1_14E02E1F6D70E487_1;
class Class_1_51AD4A996C8C1E92_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F08EB77E19F16C2C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD4C410)
#define CLASS_1_F08EB77E19F16C2C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAD4C450)
#define CLASS_1_F08EB77E19F16C2C___C__REQUESTGETSTAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0xAD4C480)
#define CLASS_1_F08EB77E19F16C2C___C__REQUESTSTARTSTAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0xAD4C460)

inline static constexpr unsigned int Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex = 70811;

class Class_1_F08EB77E19F16C2C___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_08093FBB447FB7BD_7*, ::Class_1_14E02E1F6D70E487_1*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Class_1_08093FBB447FB7BD_7*, ::Class_1_14E02E1F6D70E487_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex)->GetStaticField(0x262D0);
	}
	static ::Class_1_F08EB77E19F16C2C___c** StaticGet___9()
	{
		return (::Class_1_F08EB77E19F16C2C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex)->GetStaticField(0x262D8);
	}
	static ::System::Func_2<::Class_1_51AD4A996C8C1E92_1*, ::Class_1_14E02E1F6D70E487_1*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_51AD4A996C8C1E92_1*, ::Class_1_14E02E1F6D70E487_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex)->GetStaticField(0x262E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__CTOR_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_1* _RequestStartStage_b__3_0(::Class_1_08093FBB447FB7BD_7* a1)
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID, ::Class_1_08093FBB447FB7BD_7*))((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__REQUESTSTARTSTAGE_B__3_0_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_1* _RequestGetStage_b__4_0(::Class_1_51AD4A996C8C1E92_1* a1)
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID, ::Class_1_51AD4A996C8C1E92_1*))((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__REQUESTGETSTAGE_B__4_0_OFFSET))(this, a1);
	}
};

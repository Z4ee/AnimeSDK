#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D361D526A7B04DDE;
class Class_1_D8CC61AD64FF9091_12;
class Class_1_FBC20AAA6EDB348C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F08EB77E19F16C2C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC01E120)
#define CLASS_1_F08EB77E19F16C2C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC01E160)
#define CLASS_1_F08EB77E19F16C2C___C__REQUESTGETSTAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0xC01E190)
#define CLASS_1_F08EB77E19F16C2C___C__REQUESTSTARTSTAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0xC01E170)

inline static constexpr unsigned int Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex = 76238;

class Class_1_F08EB77E19F16C2C___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_D361D526A7B04DDE*, ::Class_1_FBC20AAA6EDB348C*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_D361D526A7B04DDE*, ::Class_1_FBC20AAA6EDB348C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex)->GetStaticField(0x65C10);
	}
	static ::System::Func_2<::Class_1_D8CC61AD64FF9091_12*, ::Class_1_FBC20AAA6EDB348C*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Class_1_D8CC61AD64FF9091_12*, ::Class_1_FBC20AAA6EDB348C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex)->GetStaticField(0x65C18);
	}
	static ::Class_1_F08EB77E19F16C2C___c** StaticGet___9()
	{
		return (::Class_1_F08EB77E19F16C2C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex)->GetStaticField(0x65C20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__CTOR_OFFSET))(this);
	}

	::Class_1_FBC20AAA6EDB348C* _RequestStartStage_b__3_0(::Class_1_D8CC61AD64FF9091_12* a1)
	{
		return ((::Class_1_FBC20AAA6EDB348C*(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_12*))((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__REQUESTSTARTSTAGE_B__3_0_OFFSET))(this, a1);
	}

	::Class_1_FBC20AAA6EDB348C* _RequestGetStage_b__4_0(::Class_1_D361D526A7B04DDE* a1)
	{
		return ((::Class_1_FBC20AAA6EDB348C*(*)(::PVOID, ::Class_1_D361D526A7B04DDE*))((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__REQUESTGETSTAGE_B__4_0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2AEC7C4C0F203579_1;
class Class_1_7BF8FDF00F218876_11;
class Class_1_D361D526A7B04DDE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F08EB77E19F16C2C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1160C440)
#define CLASS_1_F08EB77E19F16C2C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1160C480)
#define CLASS_1_F08EB77E19F16C2C___C__REQUESTGETSTAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1160C4B0)
#define CLASS_1_F08EB77E19F16C2C___C__REQUESTSTARTSTAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1160C490)

inline static constexpr unsigned int Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex = 75760;

class Class_1_F08EB77E19F16C2C___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_D361D526A7B04DDE*, ::Class_1_2AEC7C4C0F203579_1*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_D361D526A7B04DDE*, ::Class_1_2AEC7C4C0F203579_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex)->GetStaticField(0x1B260);
	}
	static ::Class_1_F08EB77E19F16C2C___c** StaticGet___9()
	{
		return (::Class_1_F08EB77E19F16C2C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex)->GetStaticField(0x1B268);
	}
	static ::System::Func_2<::Class_1_7BF8FDF00F218876_11*, ::Class_1_2AEC7C4C0F203579_1*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Class_1_7BF8FDF00F218876_11*, ::Class_1_2AEC7C4C0F203579_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F08EB77E19F16C2C___c_TypeDefinitionIndex)->GetStaticField(0x1B270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__CTOR_OFFSET))(this);
	}

	::Class_1_2AEC7C4C0F203579_1* _RequestStartStage_b__3_0(::Class_1_7BF8FDF00F218876_11* a1)
	{
		return ((::Class_1_2AEC7C4C0F203579_1*(*)(::PVOID, ::Class_1_7BF8FDF00F218876_11*))((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__REQUESTSTARTSTAGE_B__3_0_OFFSET))(this, a1);
	}

	::Class_1_2AEC7C4C0F203579_1* _RequestGetStage_b__4_0(::Class_1_D361D526A7B04DDE* a1)
	{
		return ((::Class_1_2AEC7C4C0F203579_1*(*)(::PVOID, ::Class_1_D361D526A7B04DDE*))((::PBYTE)hIl2Cpp + CLASS_1_F08EB77E19F16C2C___C__REQUESTGETSTAGE_B__4_0_OFFSET))(this, a1);
	}
};

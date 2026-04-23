#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08093FBB447FB7BD_7;
class Class_1_14E02E1F6D70E487_2;
class Class_1_FFBE0C992415AD1F;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_4F793F2BF173A91F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1233F0E0)
#define CLASS_1_4F793F2BF173A91F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1233F120)
#define CLASS_1_4F793F2BF173A91F___C__REQUESTGETSTAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1233F150)
#define CLASS_1_4F793F2BF173A91F___C__REQUESTSTARTSTAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1233F130)

inline static constexpr unsigned int Class_1_4F793F2BF173A91F___c_TypeDefinitionIndex = 69999;

class Class_1_4F793F2BF173A91F___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_08093FBB447FB7BD_7*, ::Class_1_14E02E1F6D70E487_2*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Class_1_08093FBB447FB7BD_7*, ::Class_1_14E02E1F6D70E487_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F793F2BF173A91F___c_TypeDefinitionIndex)->GetStaticField(0x6AA50);
	}
	static ::System::Func_2<::Class_1_FFBE0C992415AD1F*, ::Class_1_14E02E1F6D70E487_2*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_FFBE0C992415AD1F*, ::Class_1_14E02E1F6D70E487_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F793F2BF173A91F___c_TypeDefinitionIndex)->GetStaticField(0x6AA58);
	}
	static ::Class_1_4F793F2BF173A91F___c** StaticGet___9()
	{
		return (::Class_1_4F793F2BF173A91F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F793F2BF173A91F___c_TypeDefinitionIndex)->GetStaticField(0x6AA60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4F793F2BF173A91F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F793F2BF173A91F___C__CTOR_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_2* _RequestStartStage_b__3_0(::Class_1_08093FBB447FB7BD_7* rsp)
	{
		return ((::Class_1_14E02E1F6D70E487_2*(*)(::PVOID, ::Class_1_08093FBB447FB7BD_7*))((::PBYTE)hIl2Cpp + CLASS_1_4F793F2BF173A91F___C__REQUESTSTARTSTAGE_B__3_0_OFFSET))(this, rsp);
	}

	::Class_1_14E02E1F6D70E487_2* _RequestGetStage_b__4_0(::Class_1_FFBE0C992415AD1F* rsp)
	{
		return ((::Class_1_14E02E1F6D70E487_2*(*)(::PVOID, ::Class_1_FFBE0C992415AD1F*))((::PBYTE)hIl2Cpp + CLASS_1_4F793F2BF173A91F___C__REQUESTGETSTAGE_B__4_0_OFFSET))(this, rsp);
	}
};

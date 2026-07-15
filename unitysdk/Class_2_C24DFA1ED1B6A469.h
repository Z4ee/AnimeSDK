#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47DAE01AFECF913D.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"

class Class_1_3A873ED311700F93;

#define CLASS_2_C24DFA1ED1B6A469_GET_ENDANGLE_OFFSET UNITYSDK_OFFSET(0x16F084F0)
#define CLASS_2_C24DFA1ED1B6A469_GET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0x16F084D0)
#define CLASS_2_C24DFA1ED1B6A469_METHOD_2_1C4DCEC4A71E9244_OFFSET UNITYSDK_OFFSET(0x16F08E60)
#define CLASS_2_C24DFA1ED1B6A469_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x16F085C0)
#define CLASS_2_C24DFA1ED1B6A469_METHOD_2_75B2F7652BAFC47F_OFFSET UNITYSDK_OFFSET(0x16F08CF0)
#define CLASS_2_C24DFA1ED1B6A469_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x16F08860)
#define CLASS_2_C24DFA1ED1B6A469_METHOD_2_8F4CC8440DF53D30_OFFSET UNITYSDK_OFFSET(0x16F08510)
#define CLASS_2_C24DFA1ED1B6A469_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x16F08C30)
#define CLASS_2_C24DFA1ED1B6A469_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x16F08610)
#define CLASS_2_C24DFA1ED1B6A469_METHOD_2_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x16F08AF0)
#define CLASS_2_C24DFA1ED1B6A469_METHOD_2_C8324B85AEB18C17_OFFSET UNITYSDK_OFFSET(0x16F084C0)
#define CLASS_2_C24DFA1ED1B6A469_SET_ENDANGLE_OFFSET UNITYSDK_OFFSET(0x16F08500)
#define CLASS_2_C24DFA1ED1B6A469_SET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0x16F084E0)
#define CLASS_2_C24DFA1ED1B6A469__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F08F00)
#define CLASS_2_C24DFA1ED1B6A469__CTOR_OFFSET UNITYSDK_OFFSET(0x16F085A0)

inline static constexpr unsigned int Class_2_C24DFA1ED1B6A469_TypeDefinitionIndex = 74166;

class Class_2_C24DFA1ED1B6A469 : public ::Class_1_47DAE01AFECF913D
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C24DFA1ED1B6A469_TypeDefinitionIndex)->GetStaticField(0x9710);
	}
	// static const ::System::Single Field_2_1; // 0x0
	::System::Single Field_2_2; // 0x40
	::System::Boolean Field_2_3; // 0x44
	::System::Single _EndAngle_k__BackingField; // 0x48
	::System::Single _StartAngle_k__BackingField; // 0x4C

	::System::Void _ctor(::Class_1_3A873ED311700F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469__CCTOR_OFFSET))();
	}

	::RPG::GameCore::CakeRaceAIState Method_2_C8324B85AEB18C17()
	{
		return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_METHOD_2_C8324B85AEB18C17_OFFSET))(this);
	}

	::System::Single get_StartAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_GET_STARTANGLE_OFFSET))(this);
	}

	::System::Void set_StartAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_SET_STARTANGLE_OFFSET))(this, a1);
	}

	::System::Single get_EndAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_GET_ENDANGLE_OFFSET))(this);
	}

	::System::Void set_EndAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_SET_ENDANGLE_OFFSET))(this, a1);
	}

	static ::Class_2_C24DFA1ED1B6A469* Method_2_8F4CC8440DF53D30(::Class_1_3A873ED311700F93* a1)
	{
		return ((::Class_2_C24DFA1ED1B6A469*(*)(::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_METHOD_2_8F4CC8440DF53D30_OFFSET))(a1);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_75B2F7652BAFC47F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_METHOD_2_75B2F7652BAFC47F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_METHOD_2_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Single Method_2_1C4DCEC4A71E9244(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_METHOD_2_1C4DCEC4A71E9244_OFFSET))(this, a1);
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C24DFA1ED1B6A469_METHOD_2_A88B36294D55B85C_OFFSET))(this);
	}
};

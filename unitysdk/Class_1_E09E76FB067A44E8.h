#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E09E76FB067A44E8___c__DisplayClass2_0.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_41D140539C030FAC_1;
class Class_1_B3B329E8E3BAC557;

#define CLASS_1_E09E76FB067A44E8_METHOD_1_6FB93EE9AAB4C731_OFFSET UNITYSDK_OFFSET(0x17C9EC90)
#define CLASS_1_E09E76FB067A44E8__CREATE_G__ADDENPCF07ID_2_1_OFFSET UNITYSDK_OFFSET(0x17C9EEC0)
#define CLASS_1_E09E76FB067A44E8__CREATE_G__ISTARGET_2_0_OFFSET UNITYSDK_OFFSET(0x17C9EEB0)
#define CLASS_1_E09E76FB067A44E8__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9EC80)

inline static constexpr unsigned int Class_1_E09E76FB067A44E8_TypeDefinitionIndex = 59863;

class Class_1_E09E76FB067A44E8 : public ::System::Object
{
public:
	::Class_1_41D140539C030FAC_1* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_41D140539C030FAC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41D140539C030FAC_1*))((::PBYTE)hIl2Cpp + CLASS_1_E09E76FB067A44E8__CTOR_OFFSET))(this, a1);
	}

	::Class_1_B3B329E8E3BAC557* Method_1_6FB93EE9AAB4C731(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::Class_1_B3B329E8E3BAC557*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_E09E76FB067A44E8_METHOD_1_6FB93EE9AAB4C731_OFFSET))(this, a1);
	}

	static ::System::Boolean _Create_g__IsTarget_2_0(::System::UInt32 a1, ::Class_1_E09E76FB067A44E8___c__DisplayClass2_0& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::Class_1_E09E76FB067A44E8___c__DisplayClass2_0&))((::PBYTE)hIl2Cpp + CLASS_1_E09E76FB067A44E8__CREATE_G__ISTARGET_2_0_OFFSET))(a1, a2);
	}

	static ::System::Void _Create_g__AddENpcF07ID_2_1(::System::UInt32 a1, ::Class_1_E09E76FB067A44E8___c__DisplayClass2_0& a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::Class_1_E09E76FB067A44E8___c__DisplayClass2_0&))((::PBYTE)hIl2Cpp + CLASS_1_E09E76FB067A44E8__CREATE_G__ADDENPCF07ID_2_1_OFFSET))(a1, a2);
	}
};

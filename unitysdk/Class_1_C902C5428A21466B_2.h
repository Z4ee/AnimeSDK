#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_2AD981AB6ACE5E06_2;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C902C5428A21466B_2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D22B60)
#define CLASS_1_C902C5428A21466B_2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D22900)
#define CLASS_1_C902C5428A21466B_2_METHOD_1_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x13D22BC0)
#define CLASS_1_C902C5428A21466B_2_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x13D22980)
#define CLASS_1_C902C5428A21466B_2_METHOD_1_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x13D22840)
#define CLASS_1_C902C5428A21466B_2_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x13D22890)
#define CLASS_1_C902C5428A21466B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13D22D90)

inline static constexpr unsigned int Class_1_C902C5428A21466B_2_TypeDefinitionIndex = 70741;

class Class_1_C902C5428A21466B_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2AD981AB6ACE5E06_2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_2_METHOD_1_B73F62522113F21F_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_2_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_2_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_2_METHOD_1_157E312840A3BD00_OFFSET))(this, a1, a2);
	}
};

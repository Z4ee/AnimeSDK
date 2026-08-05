#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8B56C3305261F4CF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C902C5428A21466B_6_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13FFD9E0)
#define CLASS_1_C902C5428A21466B_6_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13FFD7A0)
#define CLASS_1_C902C5428A21466B_6_METHOD_1_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x13FFDA40)
#define CLASS_1_C902C5428A21466B_6_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x13FFDCD0)
#define CLASS_1_C902C5428A21466B_6_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x13FFD820)
#define CLASS_1_C902C5428A21466B_6_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x13FFDC00)
#define CLASS_1_C902C5428A21466B_6_METHOD_1_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x13FFD640)
#define CLASS_1_C902C5428A21466B_6_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13FFD790)
#define CLASS_1_C902C5428A21466B_6_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x13FFD690)
#define CLASS_1_C902C5428A21466B_6__CTOR_OFFSET UNITYSDK_OFFSET(0x13FFDBF0)

inline static constexpr unsigned int Class_1_C902C5428A21466B_6_TypeDefinitionIndex = 86556;

class Class_1_C902C5428A21466B_6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8B56C3305261F4CF*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6_METHOD_1_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_C902C5428A21466B_6* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_C902C5428A21466B_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}

	static ::Class_1_C902C5428A21466B_6* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_C902C5428A21466B_6*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	::System::Boolean Method_1_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6_METHOD_1_157E312840A3BD00_OFFSET))(this, a1, a2);
	}

	static ::Class_1_C902C5428A21466B_6* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_C902C5428A21466B_6*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_6_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}
};

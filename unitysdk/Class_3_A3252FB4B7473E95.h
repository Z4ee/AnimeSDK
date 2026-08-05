#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A3252FB4B7473E95_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12E93E30)
#define CLASS_3_A3252FB4B7473E95_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12E94220)
#define CLASS_3_A3252FB4B7473E95_METHOD_3_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x12E942A0)
#define CLASS_3_A3252FB4B7473E95_METHOD_3_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x12E93E90)
#define CLASS_3_A3252FB4B7473E95_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x12E94600)
#define CLASS_3_A3252FB4B7473E95_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x12E94070)
#define CLASS_3_A3252FB4B7473E95_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x12E944A0)
#define CLASS_3_A3252FB4B7473E95_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x12E94110)
#define CLASS_3_A3252FB4B7473E95_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12E94210)
#define CLASS_3_A3252FB4B7473E95__CTOR_OFFSET UNITYSDK_OFFSET(0x12E94490)

inline static constexpr unsigned int Class_3_A3252FB4B7473E95_TypeDefinitionIndex = 64123;

class Class_3_A3252FB4B7473E95 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95_METHOD_3_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95_METHOD_3_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	static ::Class_3_A3252FB4B7473E95* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_A3252FB4B7473E95*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_A3252FB4B7473E95* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_A3252FB4B7473E95*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A3252FB4B7473E95_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};

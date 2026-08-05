#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5F6716714DB0CFDF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA5C2B0)
#define CLASS_3_5F6716714DB0CFDF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA5C8F0)
#define CLASS_3_5F6716714DB0CFDF_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1BA5CF90)
#define CLASS_3_5F6716714DB0CFDF_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1BA5C740)
#define CLASS_3_5F6716714DB0CFDF_METHOD_3_775C2B47B8DBA768_OFFSET UNITYSDK_OFFSET(0x1BA5C310)
#define CLASS_3_5F6716714DB0CFDF_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1BA5CE30)
#define CLASS_3_5F6716714DB0CFDF_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1BA5C7E0)
#define CLASS_3_5F6716714DB0CFDF_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1BA5C8E0)
#define CLASS_3_5F6716714DB0CFDF_METHOD_3_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1BA5C970)
#define CLASS_3_5F6716714DB0CFDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA5CE20)

inline static constexpr unsigned int Class_3_5F6716714DB0CFDF_TypeDefinitionIndex = 72436;

class Class_3_5F6716714DB0CFDF : public ::Class_2_2A56CCCB20A346FA
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x38
	::System::Boolean Field_3_7; // 0x40
	::System::Boolean Field_3_0; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF_METHOD_3_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_775C2B47B8DBA768(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF_METHOD_3_775C2B47B8DBA768_OFFSET))(this, a1, a2);
	}

	static ::Class_3_5F6716714DB0CFDF* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_5F6716714DB0CFDF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_5F6716714DB0CFDF* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_5F6716714DB0CFDF*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5F6716714DB0CFDF_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};

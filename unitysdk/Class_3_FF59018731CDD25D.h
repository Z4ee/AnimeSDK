#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_FF59018731CDD25D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B32FB80)
#define CLASS_3_FF59018731CDD25D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B330000)
#define CLASS_3_FF59018731CDD25D_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1B330570)
#define CLASS_3_FF59018731CDD25D_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1B330410)
#define CLASS_3_FF59018731CDD25D_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1B32FEF0)
#define CLASS_3_FF59018731CDD25D_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x1B32FE30)
#define CLASS_3_FF59018731CDD25D_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1B32FFF0)
#define CLASS_3_FF59018731CDD25D_METHOD_3_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1B330080)
#define CLASS_3_FF59018731CDD25D_METHOD_3_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x1B32FBE0)
#define CLASS_3_FF59018731CDD25D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B330400)

inline static constexpr unsigned int Class_3_FF59018731CDD25D_TypeDefinitionIndex = 41398;

class Class_3_FF59018731CDD25D : public ::Class_2_2A56CCCB20A346FA
{
public:
	::MoleMole::Config::DynamicInt* Field_3_1; // 0x38
	::MoleMole::Config::DynamicString* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D_METHOD_3_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D_METHOD_3_DF413489329CBAF8_OFFSET))(this, a1);
	}

	static ::Class_3_FF59018731CDD25D* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_FF59018731CDD25D*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_FF59018731CDD25D* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_FF59018731CDD25D*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FF59018731CDD25D_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};

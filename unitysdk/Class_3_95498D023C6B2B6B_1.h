#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4235B4993CF28A7F.h"
#include "unitysdk/Enum_3_0B4A82D7D33DF0CF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8088D8743C1058EF;
class Class_1_ED5EE319EA265EB6;
class Class_1_F157DD73C7C08100;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_95498D023C6B2B6B_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x126D0F60)
#define CLASS_3_95498D023C6B2B6B_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x126D08B0)
#define CLASS_3_95498D023C6B2B6B_1_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x126D0930)
#define CLASS_3_95498D023C6B2B6B_1_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x126D1390)
#define CLASS_3_95498D023C6B2B6B_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x126D1540)
#define CLASS_3_95498D023C6B2B6B_1_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x126D0680)
#define CLASS_3_95498D023C6B2B6B_1_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x126D0840)
#define CLASS_3_95498D023C6B2B6B_1_METHOD_3_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x126D0740)
#define CLASS_3_95498D023C6B2B6B_1_METHOD_3_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x126D0FC0)
#define CLASS_3_95498D023C6B2B6B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x126D1300)

inline static constexpr unsigned int Class_3_95498D023C6B2B6B_1_TypeDefinitionIndex = 70704;

class Class_3_95498D023C6B2B6B_1 : public ::Class_2_4235B4993CF28A7F
{
public:
	::Class_1_F157DD73C7C08100* Field_3_2; // 0x30
	::Class_1_ED5EE319EA265EB6* Field_3_0; // 0x38
	::System::String* Field_3_1; // 0x40
	::Enum_3_0B4A82D7D33DF0CF Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_3_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1_METHOD_3_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1_METHOD_3_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}

	static ::Class_3_95498D023C6B2B6B_1* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_95498D023C6B2B6B_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_95498D023C6B2B6B_1* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_95498D023C6B2B6B_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_1_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_ED5EE319EA265EB6_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141C1090)
#define CLASS_1_ED5EE319EA265EB6_FROMFLX_OFFSET UNITYSDK_OFFSET(0x141C0E20)
#define CLASS_1_ED5EE319EA265EB6_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x141D7460)
#define CLASS_1_ED5EE319EA265EB6_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x141D7450)
#define CLASS_1_ED5EE319EA265EB6_METHOD_1_F4FDF6DDB7D0ADBB_OFFSET UNITYSDK_OFFSET(0x141D7600)
#define CLASS_1_ED5EE319EA265EB6__CTOR_OFFSET UNITYSDK_OFFSET(0x141C0E10)

inline static constexpr unsigned int Class_1_ED5EE319EA265EB6_TypeDefinitionIndex = 85354;

class Class_1_ED5EE319EA265EB6 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5EE319EA265EB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5EE319EA265EB6_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_ED5EE319EA265EB6_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED5EE319EA265EB6_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_ED5EE319EA265EB6_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F4FDF6DDB7D0ADBB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED5EE319EA265EB6_METHOD_1_F4FDF6DDB7D0ADBB_OFFSET))(this, a1, a2);
	}
};

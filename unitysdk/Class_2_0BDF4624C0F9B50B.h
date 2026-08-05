#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0BCE4BE98C879308_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_FA40472F435DD51A.h"

class Class_1_236FD73ABC492E3F;
class Class_1_EF896E1D0FDF202A;

#define CLASS_2_0BDF4624C0F9B50B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF846F50)
#define CLASS_2_0BDF4624C0F9B50B_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF846C40)
#define CLASS_2_0BDF4624C0F9B50B_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0xF847000)
#define CLASS_2_0BDF4624C0F9B50B_METHOD_2_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0xF847220)
#define CLASS_2_0BDF4624C0F9B50B_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xF846D10)
#define CLASS_2_0BDF4624C0F9B50B_METHOD_2_71F7FB928ED97D38_OFFSET UNITYSDK_OFFSET(0xF846B40)
#define CLASS_2_0BDF4624C0F9B50B__CTOR_OFFSET UNITYSDK_OFFSET(0xF847210)

inline static constexpr unsigned int Class_2_0BDF4624C0F9B50B_TypeDefinitionIndex = 76027;

class Class_2_0BDF4624C0F9B50B : public ::Class_1_0BCE4BE98C879308_1
{
public:
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BDF4624C0F9B50B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_71F7FB928ED97D38(::Struct_2_FA40472F435DD51A& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA40472F435DD51A&))((::PBYTE)hIl2Cpp + CLASS_2_0BDF4624C0F9B50B_METHOD_2_71F7FB928ED97D38_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_0BDF4624C0F9B50B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BDF4624C0F9B50B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3DFFEA8885EDBFF0(::Struct_2_FA40472F435DD51A& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA40472F435DD51A&))((::PBYTE)hIl2Cpp + CLASS_2_0BDF4624C0F9B50B_METHOD_2_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BDF4624C0F9B50B_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_0BDF4624C0F9B50B_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}
};

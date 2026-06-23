#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0BCE4BE98C879308_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_FA40472F435DD51A.h"

class Class_1_236FD73ABC492E3F;
class Class_1_EF896E1D0FDF202A;

#define CLASS_2_3BB6C75E29E1507C_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x159E5110)
#define CLASS_2_3BB6C75E29E1507C_FROMFLX_OFFSET UNITYSDK_OFFSET(0x159E4DD0)
#define CLASS_2_3BB6C75E29E1507C_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x159E51C0)
#define CLASS_2_3BB6C75E29E1507C_METHOD_2_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x159E53E0)
#define CLASS_2_3BB6C75E29E1507C_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x159E4EA0)
#define CLASS_2_3BB6C75E29E1507C_METHOD_2_71F7FB928ED97D38_OFFSET UNITYSDK_OFFSET(0x159E4CD0)
#define CLASS_2_3BB6C75E29E1507C__CTOR_OFFSET UNITYSDK_OFFSET(0x159E53D0)

inline static constexpr unsigned int Class_2_3BB6C75E29E1507C_TypeDefinitionIndex = 84616;

class Class_2_3BB6C75E29E1507C : public ::Class_1_0BCE4BE98C879308_1
{
public:
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BB6C75E29E1507C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_71F7FB928ED97D38(::Struct_2_FA40472F435DD51A& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA40472F435DD51A&))((::PBYTE)hIl2Cpp + CLASS_2_3BB6C75E29E1507C_METHOD_2_71F7FB928ED97D38_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_3BB6C75E29E1507C_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3BB6C75E29E1507C_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3DFFEA8885EDBFF0(::Struct_2_FA40472F435DD51A& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA40472F435DD51A&))((::PBYTE)hIl2Cpp + CLASS_2_3BB6C75E29E1507C_METHOD_2_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3BB6C75E29E1507C_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_3BB6C75E29E1507C_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}
};

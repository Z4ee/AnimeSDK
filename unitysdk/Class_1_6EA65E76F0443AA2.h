#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6ECF078854AB09B5_Struct_2_A10452A7E9060F35.h"
#include "unitysdk/Enum_3_B19988988E716CB3.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_C52B777DA7BDC594;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6EA65E76F0443AA2_METHOD_1_3783F0665AED1E64_OFFSET UNITYSDK_OFFSET(0x1179F240)
#define CLASS_1_6EA65E76F0443AA2_METHOD_1_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x1179EF50)
#define CLASS_1_6EA65E76F0443AA2_METHOD_1_6A7AC9828C6CAB1B_OFFSET UNITYSDK_OFFSET(0x1179F330)
#define CLASS_1_6EA65E76F0443AA2_METHOD_1_6AC5FBCD98FCED83_OFFSET UNITYSDK_OFFSET(0x1179EFA0)
#define CLASS_1_6EA65E76F0443AA2_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x1179F170)
#define CLASS_1_6EA65E76F0443AA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1179F2A0)

inline static constexpr unsigned int Class_1_6EA65E76F0443AA2_TypeDefinitionIndex = 73423;

class Class_1_6EA65E76F0443AA2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ProtoScript::HollowEntityType>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA65E76F0443AA2__CTOR_OFFSET))(this);
	}

	::Enum_3_B19988988E716CB3 Method_1_49AC00594530B714()
	{
		return ((::Enum_3_B19988988E716CB3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA65E76F0443AA2_METHOD_1_49AC00594530B714_OFFSET))(this);
	}

	::System::Void Method_1_6AC5FBCD98FCED83(::Class_1_6ECF078854AB09B5_Struct_2_A10452A7E9060F35& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6ECF078854AB09B5_Struct_2_A10452A7E9060F35&))((::PBYTE)hIl2Cpp + CLASS_1_6EA65E76F0443AA2_METHOD_1_6AC5FBCD98FCED83_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_C52B777DA7BDC594* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C52B777DA7BDC594*))((::PBYTE)hIl2Cpp + CLASS_1_6EA65E76F0443AA2_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_3783F0665AED1E64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EA65E76F0443AA2_METHOD_1_3783F0665AED1E64_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A7AC9828C6CAB1B(::System::UInt32 a1, ::ProtoScript::HollowEntityType& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ProtoScript::HollowEntityType&))((::PBYTE)hIl2Cpp + CLASS_1_6EA65E76F0443AA2_METHOD_1_6A7AC9828C6CAB1B_OFFSET))(this, a1, a2);
	}
};

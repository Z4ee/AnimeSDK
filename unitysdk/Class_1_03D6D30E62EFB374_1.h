#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_10;
class Class_1_FA4F4A67B1C04320_479;
class Class_3_9CB0178BAC4923B3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03D6D30E62EFB374_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C5B550)
#define CLASS_1_03D6D30E62EFB374_1_METHOD_1_382B9372ED3E171F_OFFSET UNITYSDK_OFFSET(0x10C5BB20)
#define CLASS_1_03D6D30E62EFB374_1_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x10C5B850)
#define CLASS_1_03D6D30E62EFB374_1_METHOD_1_574E59121E141966_OFFSET UNITYSDK_OFFSET(0x10C5B8F0)
#define CLASS_1_03D6D30E62EFB374_1_METHOD_1_78CEC040492E86BB_OFFSET UNITYSDK_OFFSET(0x10C5B5C0)
#define CLASS_1_03D6D30E62EFB374_1_METHOD_1_952E36B73124B39C_OFFSET UNITYSDK_OFFSET(0x10C5B9F0)
#define CLASS_1_03D6D30E62EFB374_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10C5BEC0)

inline static constexpr unsigned int Class_1_03D6D30E62EFB374_1_TypeDefinitionIndex = 61043;

class Class_1_03D6D30E62EFB374_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_10*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_78CEC040492E86BB(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_479*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_479*>*))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1_METHOD_1_78CEC040492E86BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_FA4F4A67B1C04320_479* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_479*))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::Class_1_1B7044A592B17773_10* Method_1_574E59121E141966(::System::UInt32 a1)
	{
		return ((::Class_1_1B7044A592B17773_10*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1_METHOD_1_574E59121E141966_OFFSET))(this, a1);
	}

	::Class_1_1B7044A592B17773_10* Method_1_952E36B73124B39C(::System::UInt32 a1)
	{
		return ((::Class_1_1B7044A592B17773_10*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1_METHOD_1_952E36B73124B39C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_3_9CB0178BAC4923B3*>* Method_1_382B9372ED3E171F()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_9CB0178BAC4923B3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1_METHOD_1_382B9372ED3E171F_OFFSET))(this);
	}
};

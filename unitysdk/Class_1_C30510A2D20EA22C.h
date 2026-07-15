#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4C49A5B520C0E757;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C30510A2D20EA22C_METHOD_1_22E19448A3B11D37_OFFSET UNITYSDK_OFFSET(0x179CB0C0)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_5218F55178695EA2_OFFSET UNITYSDK_OFFSET(0x179CA9A0)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x179CA6F0)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x179CA740)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_BE99B7F4A17BA12E_OFFSET UNITYSDK_OFFSET(0x179CAD80)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_C02CABC14065BB6E_OFFSET UNITYSDK_OFFSET(0x179CAAC0)
#define CLASS_1_C30510A2D20EA22C_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x179CA4D0)
#define CLASS_1_C30510A2D20EA22C__CTOR_OFFSET UNITYSDK_OFFSET(0x179CA640)

inline static constexpr unsigned int Class_1_C30510A2D20EA22C_TypeDefinitionIndex = 63093;

class Class_1_C30510A2D20EA22C : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4C49A5B520C0E757*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C__CTOR_OFFSET))(this);
	}

	static ::Class_1_C30510A2D20EA22C* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_C30510A2D20EA22C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::Class_1_4C49A5B520C0E757* Method_1_5218F55178695EA2()
	{
		return ((::Class_1_4C49A5B520C0E757*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_5218F55178695EA2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_4C49A5B520C0E757*>* Method_1_C02CABC14065BB6E()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4C49A5B520C0E757*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_C02CABC14065BB6E_OFFSET))(this);
	}

	static ::Class_1_4C49A5B520C0E757* Method_1_BE99B7F4A17BA12E(::System::Collections::Generic::List_1<::Class_1_4C49A5B520C0E757*>* a1)
	{
		return ((::Class_1_4C49A5B520C0E757*(*)(::System::Collections::Generic::List_1<::Class_1_4C49A5B520C0E757*>*))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_BE99B7F4A17BA12E_OFFSET))(a1);
	}

	::System::Void Method_1_22E19448A3B11D37(::Class_1_4C49A5B520C0E757* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C49A5B520C0E757*))((::PBYTE)hIl2Cpp + CLASS_1_C30510A2D20EA22C_METHOD_1_22E19448A3B11D37_OFFSET))(this, a1);
	}
};

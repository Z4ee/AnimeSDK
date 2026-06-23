#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_136.h"
#include "unitysdk/System/Object.h"

class Class_3_F33F9DC5F4112336;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D068D24E09EADB7D_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x137BCFB0)
#define CLASS_1_D068D24E09EADB7D_METHOD_1_47D20A0E9DEAC052_OFFSET UNITYSDK_OFFSET(0x137BCD20)
#define CLASS_1_D068D24E09EADB7D_METHOD_1_6663A16DB2122E9E_OFFSET UNITYSDK_OFFSET(0x137BD070)
#define CLASS_1_D068D24E09EADB7D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x137BD1E0)
#define CLASS_1_D068D24E09EADB7D_METHOD_1_F63281714DD4869C_OFFSET UNITYSDK_OFFSET(0x137BD1F0)
#define CLASS_1_D068D24E09EADB7D__CTOR_OFFSET UNITYSDK_OFFSET(0x137BCD10)

inline static constexpr unsigned int Class_1_D068D24E09EADB7D_TypeDefinitionIndex = 85041;

class Class_1_D068D24E09EADB7D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_3; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D068D24E09EADB7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_47D20A0E9DEAC052(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_136>* a3, ::Class_3_F33F9DC5F4112336* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_136>*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_1_D068D24E09EADB7D_METHOD_1_47D20A0E9DEAC052_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D068D24E09EADB7D_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_6663A16DB2122E9E(::Class_3_F33F9DC5F4112336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_1_D068D24E09EADB7D_METHOD_1_6663A16DB2122E9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D068D24E09EADB7D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_F63281714DD4869C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D068D24E09EADB7D_METHOD_1_F63281714DD4869C_OFFSET))(this, a1, a2);
	}
};

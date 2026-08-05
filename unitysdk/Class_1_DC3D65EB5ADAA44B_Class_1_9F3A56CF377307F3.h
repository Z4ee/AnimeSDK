#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ACB2ABA66F2BACE6_2.h"
#include "unitysdk/System/Object.h"

class Class_1_5E8D7F836DA392F9;
class Class_1_DC3D65EB5ADAA44B_Class_1_DC01E1F07A0475E5_32;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DC3D65EB5ADAA44B_CLASS_1_9F3A56CF377307F3_METHOD_1_68EE5FDBB60069A3_OFFSET UNITYSDK_OFFSET(0x1F2C8130)
#define CLASS_1_DC3D65EB5ADAA44B_CLASS_1_9F3A56CF377307F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C8120)

inline static constexpr unsigned int Class_1_DC3D65EB5ADAA44B_Class_1_9F3A56CF377307F3_TypeDefinitionIndex = 92926;

class Class_1_DC3D65EB5ADAA44B_Class_1_9F3A56CF377307F3 : public ::System::Object
{
public:
	::Class_1_DC3D65EB5ADAA44B_Class_1_DC01E1F07A0475E5_32* Field_1_1; // 0x10
	::Class_1_5E8D7F836DA392F9* Field_1_2; // 0x18
	::System::Action_1<::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_2>*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC3D65EB5ADAA44B_CLASS_1_9F3A56CF377307F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_68EE5FDBB60069A3(::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_2>*))((::PBYTE)hIl2Cpp + CLASS_1_DC3D65EB5ADAA44B_CLASS_1_9F3A56CF377307F3_METHOD_1_68EE5FDBB60069A3_OFFSET))(this, a1);
	}
};

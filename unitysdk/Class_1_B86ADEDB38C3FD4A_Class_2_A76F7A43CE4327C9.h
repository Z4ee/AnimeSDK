#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B86ADEDB38C3FD4A_Class_1_0C685145B0BA45FD.h"
#include "unitysdk/Struct_2_295094A66D5C0F60.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_B86ADEDB38C3FD4A;
class Class_2_1A39E1B51756BF41;
class Class_2_EB371C0ADFD560F1_Class_2_B22C3042ABDEAF7D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B86ADEDB38C3FD4A_CLASS_2_A76F7A43CE4327C9_METHOD_2_083CBCEDE3CD0C1B_OFFSET UNITYSDK_OFFSET(0x13F168D0)
#define CLASS_1_B86ADEDB38C3FD4A_CLASS_2_A76F7A43CE4327C9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13F16890)
#define CLASS_1_B86ADEDB38C3FD4A_CLASS_2_A76F7A43CE4327C9__CTOR_OFFSET UNITYSDK_OFFSET(0x13F16D50)

inline static constexpr unsigned int Class_1_B86ADEDB38C3FD4A_Class_2_A76F7A43CE4327C9_TypeDefinitionIndex = 66197;

class Class_1_B86ADEDB38C3FD4A_Class_2_A76F7A43CE4327C9 : public ::Class_1_B86ADEDB38C3FD4A_Class_1_0C685145B0BA45FD
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_2; // 0x60
	::Class_2_EB371C0ADFD560F1_Class_2_B22C3042ABDEAF7D* Field_2_1; // 0x68
	::UnityEngine::Color Field_2_3; // 0x70
	::System::Int32 Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86ADEDB38C3FD4A_CLASS_2_A76F7A43CE4327C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86ADEDB38C3FD4A_CLASS_2_A76F7A43CE4327C9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_083CBCEDE3CD0C1B(::Class_1_B86ADEDB38C3FD4A* a1, ::Struct_2_295094A66D5C0F60& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B86ADEDB38C3FD4A*, ::Struct_2_295094A66D5C0F60&))((::PBYTE)hIl2Cpp + CLASS_1_B86ADEDB38C3FD4A_CLASS_2_A76F7A43CE4327C9_METHOD_2_083CBCEDE3CD0C1B_OFFSET))(this, a1, a2);
	}
};

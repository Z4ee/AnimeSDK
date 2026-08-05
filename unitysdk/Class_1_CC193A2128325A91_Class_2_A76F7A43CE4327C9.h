#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CC193A2128325A91_Class_1_0C685145B0BA45FD.h"
#include "unitysdk/Struct_2_295094A66D5C0F60.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_CC193A2128325A91;
class Class_2_1A39E1B51756BF41;
class Class_2_EB371C0ADFD560F1_Class_2_E075D6A7C9D8888E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CC193A2128325A91_CLASS_2_A76F7A43CE4327C9_METHOD_2_083CBCEDE3CD0C1B_OFFSET UNITYSDK_OFFSET(0x1394E8A0)
#define CLASS_1_CC193A2128325A91_CLASS_2_A76F7A43CE4327C9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1394E860)
#define CLASS_1_CC193A2128325A91_CLASS_2_A76F7A43CE4327C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1394ED20)

inline static constexpr unsigned int Class_1_CC193A2128325A91_Class_2_A76F7A43CE4327C9_TypeDefinitionIndex = 46816;

class Class_1_CC193A2128325A91_Class_2_A76F7A43CE4327C9 : public ::Class_1_CC193A2128325A91_Class_1_0C685145B0BA45FD
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_EB371C0ADFD560F1_Class_2_E075D6A7C9D8888E* Field_2_7; // 0x60
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_6; // 0x68
	::System::Int32 Field_2_4; // 0x70
	::UnityEngine::Color Field_2_5; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_A76F7A43CE4327C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_A76F7A43CE4327C9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_083CBCEDE3CD0C1B(::Class_1_CC193A2128325A91* a1, ::Struct_2_295094A66D5C0F60& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC193A2128325A91*, ::Struct_2_295094A66D5C0F60&))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_A76F7A43CE4327C9_METHOD_2_083CBCEDE3CD0C1B_OFFSET))(this, a1, a2);
	}
};

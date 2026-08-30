#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_786B812390913964_CLASS_1_D286C645543D4D03_METHOD_1_7270F3D01B9345B3_OFFSET UNITYSDK_OFFSET(0x19BFCC10)
#define CLASS_1_786B812390913964_CLASS_1_D286C645543D4D03__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BFCEF0)
#define CLASS_1_786B812390913964_CLASS_1_D286C645543D4D03__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFC730)

inline static constexpr unsigned int Class_1_786B812390913964_Class_1_D286C645543D4D03_TypeDefinitionIndex = 50418;

class Class_1_786B812390913964_Class_1_D286C645543D4D03 : public ::System::Object
{
public:
	static ::System::Text::StringBuilder** StaticGet_JFCLFJPCNKM()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_786B812390913964_Class_1_D286C645543D4D03_TypeDefinitionIndex)->GetStaticField(0x188A0);
	}
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int64>>* LDGBEDOGGEP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_CLASS_1_D286C645543D4D03__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_CLASS_1_D286C645543D4D03__CCTOR_OFFSET))();
	}

	::System::String* Method_1_7270F3D01B9345B3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_CLASS_1_D286C645543D4D03_METHOD_1_7270F3D01B9345B3_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_786B812390913964_CLASS_1_F3CCBC66478148CC_METHOD_1_D28500EB5034807C_OFFSET UNITYSDK_OFFSET(0x12866000)
#define CLASS_1_786B812390913964_CLASS_1_F3CCBC66478148CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x128662C0)
#define CLASS_1_786B812390913964_CLASS_1_F3CCBC66478148CC__CTOR_OFFSET UNITYSDK_OFFSET(0x12865B70)

inline static constexpr unsigned int Class_1_786B812390913964_Class_1_F3CCBC66478148CC_TypeDefinitionIndex = 46279;

class Class_1_786B812390913964_Class_1_F3CCBC66478148CC : public ::System::Object
{
public:
	static ::System::Text::StringBuilder** StaticGet_Field_1_0()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_786B812390913964_Class_1_F3CCBC66478148CC_TypeDefinitionIndex)->GetStaticField(0x1CEA0);
	}
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int64>>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_CLASS_1_F3CCBC66478148CC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_CLASS_1_F3CCBC66478148CC__CCTOR_OFFSET))();
	}

	::System::String* Method_1_D28500EB5034807C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_786B812390913964_CLASS_1_F3CCBC66478148CC_METHOD_1_D28500EB5034807C_OFFSET))(this);
	}
};

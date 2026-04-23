#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }

#define CLASS_1_3F8D06B1C9D72A34_METHOD_1_338FFF9502375EF1_OFFSET UNITYSDK_OFFSET(0x9A87C50)
#define CLASS_1_3F8D06B1C9D72A34_METHOD_1_4BD3B68559A3A740_OFFSET UNITYSDK_OFFSET(0x9A87730)
#define CLASS_1_3F8D06B1C9D72A34_METHOD_1_6778BA49734F1F23_OFFSET UNITYSDK_OFFSET(0x9A876A0)

inline static constexpr unsigned int Class_1_3F8D06B1C9D72A34_TypeDefinitionIndex = 45748;

class Class_1_3F8D06B1C9D72A34 : public ::System::Object
{
public:
	static ::System::Void Method_1_6778BA49734F1F23(::System::Reflection::FieldInfo* a1, ::System::Object* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3F8D06B1C9D72A34_METHOD_1_6778BA49734F1F23_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4BD3B68559A3A740(::System::Object* a1, ::System::Object* a2, ::System::Type* a3, ::System::Int32 a4, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Type*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_3F8D06B1C9D72A34_METHOD_1_4BD3B68559A3A740_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_338FFF9502375EF1(::System::Object* a1, ::System::Object* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F8D06B1C9D72A34_METHOD_1_338FFF9502375EF1_OFFSET))(a1, a2, a3);
	}
};

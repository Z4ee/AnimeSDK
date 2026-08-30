#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_1_744ABCCE6765C487_METHOD_1_118ABC9F355CB93E_OFFSET UNITYSDK_OFFSET(0x163170B0)
#define CLASS_1_744ABCCE6765C487_METHOD_1_1EB371FD96EF4ACF_OFFSET UNITYSDK_OFFSET(0x163174C0)
#define CLASS_1_744ABCCE6765C487_METHOD_1_8C1CBC77D1F0E247_OFFSET UNITYSDK_OFFSET(0x16317640)
#define CLASS_1_744ABCCE6765C487_METHOD_1_C18014AA60E3E969_OFFSET UNITYSDK_OFFSET(0x16317130)

inline static constexpr unsigned int Class_1_744ABCCE6765C487_TypeDefinitionIndex = 67238;

class Class_1_744ABCCE6765C487 : public ::System::Object
{
public:
	static ::System::Object* Method_1_118ABC9F355CB93E(::System::Object* a1, ::System::Type* a2)
	{
		return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_744ABCCE6765C487_METHOD_1_118ABC9F355CB93E_OFFSET))(a1, a2);
	}

	static ::System::Object* Method_1_C18014AA60E3E969(::System::String* a1, ::System::Type* a2)
	{
		return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_744ABCCE6765C487_METHOD_1_C18014AA60E3E969_OFFSET))(a1, a2);
	}

	static ::System::Type* Method_1_1EB371FD96EF4ACF(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_744ABCCE6765C487_METHOD_1_1EB371FD96EF4ACF_OFFSET))(a1);
	}

	static ::System::Void Method_1_8C1CBC77D1F0E247(::System::Object* a1, ::System::Reflection::MemberInfo* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_744ABCCE6765C487_METHOD_1_8C1CBC77D1F0E247_OFFSET))(a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_1_896E7B1C10BDBD2F_METHOD_1_118ABC9F355CB93E_OFFSET UNITYSDK_OFFSET(0x143A8660)
#define CLASS_1_896E7B1C10BDBD2F_METHOD_1_93BD97C4EC18CC87_OFFSET UNITYSDK_OFFSET(0x143A86E0)
#define CLASS_1_896E7B1C10BDBD2F_METHOD_1_E750F558AB218C58_OFFSET UNITYSDK_OFFSET(0x143A8AE0)
#define CLASS_1_896E7B1C10BDBD2F_METHOD_1_FF3924D736ABD402_OFFSET UNITYSDK_OFFSET(0x143A8A00)

inline static constexpr unsigned int Class_1_896E7B1C10BDBD2F_TypeDefinitionIndex = 62876;

class Class_1_896E7B1C10BDBD2F : public ::System::Object
{
public:
	static ::System::Object* Method_1_118ABC9F355CB93E(::System::Object* a1, ::System::Type* a2)
	{
		return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_896E7B1C10BDBD2F_METHOD_1_118ABC9F355CB93E_OFFSET))(a1, a2);
	}

	static ::System::Object* Method_1_93BD97C4EC18CC87(::System::String* a1, ::System::Type* a2)
	{
		return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_896E7B1C10BDBD2F_METHOD_1_93BD97C4EC18CC87_OFFSET))(a1, a2);
	}

	static ::System::Type* Method_1_FF3924D736ABD402(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_896E7B1C10BDBD2F_METHOD_1_FF3924D736ABD402_OFFSET))(a1);
	}

	static ::System::Void Method_1_E750F558AB218C58(::System::Object* a1, ::System::Reflection::MemberInfo* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_896E7B1C10BDBD2F_METHOD_1_E750F558AB218C58_OFFSET))(a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_2_DD9C46AA4371637C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5AB720)
#define CLASS_2_DD9C46AA4371637C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AB6F0)

inline static constexpr unsigned int Class_2_DD9C46AA4371637C_TypeDefinitionIndex = 42495;

class Class_2_DD9C46AA4371637C : public ::System::Exception
{
public:
	::System::Reflection::MemberInfo* BOODBKJFCAG; // 0x88

	::System::Void _ctor(::System::Reflection::MemberInfo* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD9C46AA4371637C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Reflection::MemberInfo* a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_DD9C46AA4371637C__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};

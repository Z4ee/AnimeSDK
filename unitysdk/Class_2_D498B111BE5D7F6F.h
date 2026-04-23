#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_2_D498B111BE5D7F6F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19DC1F50)
#define CLASS_2_D498B111BE5D7F6F__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC1E60)

inline static constexpr unsigned int Class_2_D498B111BE5D7F6F_TypeDefinitionIndex = 39858;

class Class_2_D498B111BE5D7F6F : public ::System::Exception
{
public:
	::System::Reflection::MemberInfo* Field_2_0; // 0x88

	::System::Void _ctor(::System::Reflection::MemberInfo* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D498B111BE5D7F6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Reflection::MemberInfo* a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_D498B111BE5D7F6F__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};

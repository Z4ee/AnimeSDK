#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_0D6DCA0BBF51AD7A_METHOD_2_8771FA9A58612F46_OFFSET UNITYSDK_OFFSET(0x19130D70)
#define CLASS_2_0D6DCA0BBF51AD7A__CTOR_OFFSET UNITYSDK_OFFSET(0x19130F40)

inline static constexpr unsigned int Class_2_0D6DCA0BBF51AD7A_TypeDefinitionIndex = 21784;

class Class_2_0D6DCA0BBF51AD7A : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* Field_2_3; // 0x10
	::System::Single Field_2_2; // 0x18
	::RPG::MVector3 Field_2_1; // 0x1C
	::RPG::MVector3 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D6DCA0BBF51AD7A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_8771FA9A58612F46(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_0D6DCA0BBF51AD7A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_0D6DCA0BBF51AD7A*&))((::PBYTE)hIl2Cpp + CLASS_2_0D6DCA0BBF51AD7A_METHOD_2_8771FA9A58612F46_OFFSET))(a1, a2);
	}
};

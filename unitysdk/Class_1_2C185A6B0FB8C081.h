#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_2C185A6B0FB8C081_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x191C8C30)
#define CLASS_1_2C185A6B0FB8C081__CTOR_OFFSET UNITYSDK_OFFSET(0x191C8E30)

inline static constexpr unsigned int Class_1_2C185A6B0FB8C081_TypeDefinitionIndex = 10817;

class Class_1_2C185A6B0FB8C081 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::RPG::Client::TextID Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C185A6B0FB8C081__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_2C185A6B0FB8C081*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_2C185A6B0FB8C081*&))((::PBYTE)hIl2Cpp + CLASS_1_2C185A6B0FB8C081_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};

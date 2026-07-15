#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_4C451B39EB3F4200_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1B521560)
#define CLASS_1_4C451B39EB3F4200__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5217A0)

inline static constexpr unsigned int Class_1_4C451B39EB3F4200_TypeDefinitionIndex = 10928;

class Class_1_4C451B39EB3F4200 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C451B39EB3F4200__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4C451B39EB3F4200*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4C451B39EB3F4200*&))((::PBYTE)hIl2Cpp + CLASS_1_4C451B39EB3F4200_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};

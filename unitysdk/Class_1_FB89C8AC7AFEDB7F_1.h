#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_FB89C8AC7AFEDB7F_1_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x191BE7F0)
#define CLASS_1_FB89C8AC7AFEDB7F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x191BE970)

inline static constexpr unsigned int Class_1_FB89C8AC7AFEDB7F_1_TypeDefinitionIndex = 13260;

class Class_1_FB89C8AC7AFEDB7F_1 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB89C8AC7AFEDB7F_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_FB89C8AC7AFEDB7F_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_FB89C8AC7AFEDB7F_1*&))((::PBYTE)hIl2Cpp + CLASS_1_FB89C8AC7AFEDB7F_1_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_ADA685A437CC8307_METHOD_1_092E633B9CD2BE71_OFFSET UNITYSDK_OFFSET(0x19377400)
#define CLASS_1_ADA685A437CC8307__CTOR_OFFSET UNITYSDK_OFFSET(0x19377610)

inline static constexpr unsigned int Class_1_ADA685A437CC8307_TypeDefinitionIndex = 10859;

class Class_1_ADA685A437CC8307 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x20
	::RPG::Client::TextID Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA685A437CC8307__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_092E633B9CD2BE71(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_ADA685A437CC8307*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_ADA685A437CC8307*&))((::PBYTE)hIl2Cpp + CLASS_1_ADA685A437CC8307_METHOD_1_092E633B9CD2BE71_OFFSET))(a1, a2);
	}
};

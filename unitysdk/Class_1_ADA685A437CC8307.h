#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_ADA685A437CC8307_METHOD_1_092E633B9CD2BE71_OFFSET UNITYSDK_OFFSET(0x1CD09F60)
#define CLASS_1_ADA685A437CC8307__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD0A170)

inline static constexpr unsigned int Class_1_ADA685A437CC8307_TypeDefinitionIndex = 11284;

class Class_1_ADA685A437CC8307 : public ::System::Object
{
public:
	::System::UInt32 ACCJKGEKHKP; // 0x10
	::RPG::Client::TextID AEMNEJEHNKA; // 0x18
	::RPG::Client::TextID AOCDOMPGEKK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA685A437CC8307__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_092E633B9CD2BE71(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_ADA685A437CC8307*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_ADA685A437CC8307*&))((::PBYTE)hIl2Cpp + CLASS_1_ADA685A437CC8307_METHOD_1_092E633B9CD2BE71_OFFSET))(a1, a2);
	}
};

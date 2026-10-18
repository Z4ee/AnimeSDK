#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_9788BF934C00DE98_METHOD_1_5A9446C22EB45706_OFFSET UNITYSDK_OFFSET(0x1CE7C450)
#define CLASS_1_9788BF934C00DE98__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7C6B0)

inline static constexpr unsigned int Class_1_9788BF934C00DE98_TypeDefinitionIndex = 14428;

class Class_1_9788BF934C00DE98 : public ::System::Object
{
public:
	::System::String* OLOIFNNLKJP; // 0x10
	::RPG::Client::TextID KEGANNHEKHA; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x28
	::RPG::Client::TextID MIIPHKBBMAF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9788BF934C00DE98__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5A9446C22EB45706(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_9788BF934C00DE98*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_9788BF934C00DE98*&))((::PBYTE)hIl2Cpp + CLASS_1_9788BF934C00DE98_METHOD_1_5A9446C22EB45706_OFFSET))(a1, a2);
	}
};

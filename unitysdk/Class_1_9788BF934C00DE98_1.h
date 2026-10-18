#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_9788BF934C00DE98_1_METHOD_1_5A9446C22EB45706_OFFSET UNITYSDK_OFFSET(0x1D059A90)
#define CLASS_1_9788BF934C00DE98_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D059CA0)

inline static constexpr unsigned int Class_1_9788BF934C00DE98_1_TypeDefinitionIndex = 14430;

class Class_1_9788BF934C00DE98_1 : public ::System::Object
{
public:
	::System::String* OLOIFNNLKJP; // 0x10
	::System::String* KILFKBDMJGI; // 0x18
	::RPG::Client::TextID OENAMINOLLF; // 0x20
	::System::UInt32 PHFMCACHFIJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9788BF934C00DE98_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5A9446C22EB45706(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_9788BF934C00DE98_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_9788BF934C00DE98_1*&))((::PBYTE)hIl2Cpp + CLASS_1_9788BF934C00DE98_1_METHOD_1_5A9446C22EB45706_OFFSET))(a1, a2);
	}
};

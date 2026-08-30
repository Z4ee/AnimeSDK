#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_849EE5CF9026AE9F;
namespace RPG::Client { class MonoDanmuItem; }

#define CLASS_1_3DDCB30F94F48228_METHOD_1_70A189778154A366_OFFSET UNITYSDK_OFFSET(0x16B25D30)
#define CLASS_1_3DDCB30F94F48228__CTOR_OFFSET UNITYSDK_OFFSET(0x16B25E80)

inline static constexpr unsigned int Class_1_3DDCB30F94F48228_TypeDefinitionIndex = 68918;

class Class_1_3DDCB30F94F48228 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DDCB30F94F48228__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_70A189778154A366(::RPG::Client::MonoDanmuItem* a1, ::Class_1_849EE5CF9026AE9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*, ::Class_1_849EE5CF9026AE9F*))((::PBYTE)hIl2Cpp + CLASS_1_3DDCB30F94F48228_METHOD_1_70A189778154A366_OFFSET))(this, a1, a2);
	}
};

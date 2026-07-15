#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_849EE5CF9026AE9F;
class Class_2_8C7C64D67B4A8939;
namespace RPG::Client { class MonoDanmuItem; }

#define CLASS_1_2D5B8B9F454B64B8_METHOD_1_6F11A3AA4E990074_OFFSET UNITYSDK_OFFSET(0x158944F0)
#define CLASS_1_2D5B8B9F454B64B8_METHOD_1_C8AE48BCD15498BB_OFFSET UNITYSDK_OFFSET(0x15894430)
#define CLASS_1_2D5B8B9F454B64B8__CTOR_OFFSET UNITYSDK_OFFSET(0x158946D0)

inline static constexpr unsigned int Class_1_2D5B8B9F454B64B8_TypeDefinitionIndex = 65864;

class Class_1_2D5B8B9F454B64B8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D5B8B9F454B64B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C8AE48BCD15498BB(::RPG::Client::MonoDanmuItem* a1, ::Class_1_849EE5CF9026AE9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*, ::Class_1_849EE5CF9026AE9F*))((::PBYTE)hIl2Cpp + CLASS_1_2D5B8B9F454B64B8_METHOD_1_C8AE48BCD15498BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6F11A3AA4E990074(::RPG::Client::MonoDanmuItem* a1, ::Class_2_8C7C64D67B4A8939* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*, ::Class_2_8C7C64D67B4A8939*))((::PBYTE)hIl2Cpp + CLASS_1_2D5B8B9F454B64B8_METHOD_1_6F11A3AA4E990074_OFFSET))(this, a1, a2);
	}
};

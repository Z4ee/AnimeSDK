#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextIcons_Struct_2_126A1A9085C0C7D8.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEXTICONS___C__DISPLAYCLASS13_0__BUILDICONATLAS_B__2_OFFSET UNITYSDK_OFFSET(0x1ACA8D50)
#define RPG_CLIENT_TEXTICONS___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA8CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons___c__DisplayClass13_0_TypeDefinitionIndex = 72608;

	class TextIcons___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildIconAtlas_b__2(::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__DISPLAYCLASS13_0__BUILDICONATLAS_B__2_OFFSET))(this, a1);
		}
	};
}

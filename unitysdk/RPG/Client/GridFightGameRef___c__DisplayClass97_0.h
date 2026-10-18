#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRef; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS97_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD15B190)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS97_0__FAVOUR_B__0_OFFSET UNITYSDK_OFFSET(0xD15E360)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass97_0_TypeDefinitionIndex = 64722;

	class GridFightGameRef___c__DisplayClass97_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10
		::RPG::Client::GridFightGameRef* __4__this; // 0x18
		::System::String* id; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS97_0__CTOR_OFFSET))(this);
		}

		::System::Void _Favour_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS97_0__FAVOUR_B__0_OFFSET))(this, a1);
		}
	};
}

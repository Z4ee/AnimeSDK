#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRef; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS77_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98275F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS77_0__UNFAVOUR_B__0_OFFSET UNITYSDK_OFFSET(0x982A010)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass77_0_TypeDefinitionIndex = 52535;

	class GridFightGameRef___c__DisplayClass77_0 : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::System::Action_1<::System::Boolean>* callback; // 0x18
		::RPG::Client::GridFightGameRef* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS77_0__CTOR_OFFSET))(this);
		}

		::System::Void _Unfavour_b__0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS77_0__UNFAVOUR_B__0_OFFSET))(this, success);
		}
	};
}

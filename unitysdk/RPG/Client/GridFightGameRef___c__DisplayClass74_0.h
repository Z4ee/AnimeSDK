#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRef; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9826FE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS74_0__READUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x9829F70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass74_0_TypeDefinitionIndex = 52533;

	class GridFightGameRef___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::RPG::Client::GridFightGameRef* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReadUpdate_b__0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS74_0__READUPDATE_B__0_OFFSET))(this, success);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefData; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS89_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE7060)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS89_0__ISCOMPLIANT_B__0_OFFSET UNITYSDK_OFFSET(0x1ABEAEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass89_0_TypeDefinitionIndex = 61793;

	class GridFightGameRef___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::System::String* id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS89_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsCompliant_b__0(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS89_0__ISCOMPLIANT_B__0_OFFSET))(this, a1);
		}
	};
}

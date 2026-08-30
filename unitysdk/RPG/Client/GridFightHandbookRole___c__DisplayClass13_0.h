#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2B900)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__DISPLAYCLASS13_0__SETOTHERROLE_B__0_OFFSET UNITYSDK_OFFSET(0x1BC2C700)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandbookRole___c__DisplayClass13_0_TypeDefinitionIndex = 64960;

	class GridFightHandbookRole___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetOtherRole_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__DISPLAYCLASS13_0__SETOTHERROLE_B__0_OFFSET))(this, a1);
		}
	};
}

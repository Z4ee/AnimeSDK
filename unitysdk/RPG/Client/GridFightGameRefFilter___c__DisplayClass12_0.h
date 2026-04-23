#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D4090)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS12_0__REMOVEROLE_B__0_OFFSET UNITYSDK_OFFSET(0xA4D5950)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefFilter___c__DisplayClass12_0_TypeDefinitionIndex = 59611;

	class GridFightGameRefFilter___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveRole_b__0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS12_0__REMOVEROLE_B__0_OFFSET))(this, x);
		}
	};
}

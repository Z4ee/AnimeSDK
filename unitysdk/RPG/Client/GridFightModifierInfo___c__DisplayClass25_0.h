#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9B690)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS25_0__GETMODIFIERBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xBB9C310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass25_0_TypeDefinitionIndex = 60824;

	class GridFightModifierInfo___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetModifierByUID_b__0(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS25_0__GETMODIFIERBYUID_B__0_OFFSET))(this, a1);
		}
	};
}

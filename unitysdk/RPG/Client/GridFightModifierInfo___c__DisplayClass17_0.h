#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F4E30)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS17_0__UPDATEREMOVE_B__0_OFFSET UNITYSDK_OFFSET(0xA4F5E50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass17_0_TypeDefinitionIndex = 59885;

	class GridFightModifierInfo___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateRemove_b__0(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS17_0__UPDATEREMOVE_B__0_OFFSET))(this, modifier);
		}
	};
}

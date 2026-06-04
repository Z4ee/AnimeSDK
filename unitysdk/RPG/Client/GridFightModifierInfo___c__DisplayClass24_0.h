#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9B590)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS24_0__GETMODIFIERBYEFFECTTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xBB9C2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass24_0_TypeDefinitionIndex = 60823;

	class GridFightModifierInfo___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightModifierEffectType effectType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetModifierByEffectType_b__0(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS24_0__GETMODIFIERBYEFFECTTYPE_B__0_OFFSET))(this, a1);
		}
	};
}

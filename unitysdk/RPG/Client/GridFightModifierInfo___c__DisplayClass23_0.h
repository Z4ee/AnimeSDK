#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace System { class Type; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9B580)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS23_0__GETMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0xBB9C2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass23_0_TypeDefinitionIndex = 60822;

	class GridFightModifierInfo___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetModifier_b__0(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS23_0__GETMODIFIER_B__0_OFFSET))(this, a1);
		}
	};
}

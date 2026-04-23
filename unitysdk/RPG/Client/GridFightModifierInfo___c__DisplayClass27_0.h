#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace System { class Type; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F53C0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS27_0__HASMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0xA4F5F80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass27_0_TypeDefinitionIndex = 59890;

	class GridFightModifierInfo___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasModifier_b__0(::RPG::Client::GridFightGameModifier* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS27_0__HASMODIFIER_B__0_OFFSET))(this, x);
		}
	};
}

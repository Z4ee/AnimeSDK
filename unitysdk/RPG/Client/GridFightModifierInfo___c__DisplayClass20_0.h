#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19509C50)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS20_0__GETMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0x1950AF70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass20_0_TypeDefinitionIndex = 62120;

	class GridFightModifierInfo___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>* pred; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetModifier_b__0(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS20_0__GETMODIFIER_B__0_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB028F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS12_0__HASEFFECTTRAITID_B__0_OFFSET UNITYSDK_OFFSET(0x1BB03770)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass12_0_TypeDefinitionIndex = 65500;

	class GridFightTraitComponent___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasEffectTraitID_b__0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS12_0__HASEFFECTTRAITID_B__0_OFFSET))(this, a1);
		}
	};
}

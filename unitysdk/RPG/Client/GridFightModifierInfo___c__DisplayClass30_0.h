#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FD0167EB507B9435_6;

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1950A810)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__TRYGETTRAITLIMITLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x1950B080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass30_0_TypeDefinitionIndex = 62125;

	class GridFightModifierInfo___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetTraitLimitLayer_b__0(::Class_2_FD0167EB507B9435_6* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_FD0167EB507B9435_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__TRYGETTRAITLIMITLAYER_B__0_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FD0167EB507B9435_15;

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F5970)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__ISIGNOREPOPULATION_B__0_OFFSET UNITYSDK_OFFSET(0xA4F5FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass30_0_TypeDefinitionIndex = 59892;

	class GridFightModifierInfo___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsIgnorePopulation_b__0(::Class_2_FD0167EB507B9435_15* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_FD0167EB507B9435_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__ISIGNOREPOPULATION_B__0_OFFSET))(this, x);
		}
	};
}

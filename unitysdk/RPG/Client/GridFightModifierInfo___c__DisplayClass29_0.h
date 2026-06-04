#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FD0167EB507B9435_7;

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9BD20)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS29_0__TRYGETTRAITLIMITLAYER_B__0_OFFSET UNITYSDK_OFFSET(0xBB9C3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass29_0_TypeDefinitionIndex = 60826;

	class GridFightModifierInfo___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetTraitLimitLayer_b__0(::Class_2_FD0167EB507B9435_7* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_FD0167EB507B9435_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS29_0__TRYGETTRAITLIMITLAYER_B__0_OFFSET))(this, a1);
		}
	};
}

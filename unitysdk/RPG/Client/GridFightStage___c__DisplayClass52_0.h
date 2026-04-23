#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_39;

#define RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5938E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS52_0__UPDATEAFFIX_B__0_OFFSET UNITYSDK_OFFSET(0xA596C90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage___c__DisplayClass52_0_TypeDefinitionIndex = 60069;

	class GridFightStage___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::Class_1_21C7581DFE99F091_39* affixInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateAffix_b__0(::Class_1_21C7581DFE99F091_39* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS52_0__UPDATEAFFIX_B__0_OFFSET))(this, x);
		}
	};
}

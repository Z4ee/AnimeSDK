#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightStageNode; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98B5120)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS14_0__GETNODE_B__0_OFFSET UNITYSDK_OFFSET(0x98B5440)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute___c__DisplayClass14_0_TypeDefinitionIndex = 52983;

	class GridFightStageRoute___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::UInt32 SectionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNode_b__0(::RPG::Client::GridFightStageNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS14_0__GETNODE_B__0_OFFSET))(this, x);
		}
	};
}

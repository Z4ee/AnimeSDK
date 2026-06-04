#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveUndirectedEdge; }
namespace System { class String; }

#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC06FFC0)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS5_0__FINDEDGEBYNAME_B__0_OFFSET UNITYSDK_OFFSET(0xC070190)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveUndirectedGraph___c__DisplayClass5_0_TypeDefinitionIndex = 64155;

	class MonoCurveUndirectedGraph___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::String* edgeName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindEdgeByName_b__0(::RPG::Client::CurveUndirectedEdge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS5_0__FINDEDGEBYNAME_B__0_OFFSET))(this, a1);
		}
	};
}

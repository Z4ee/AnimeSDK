#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveUndirectedConnection; }
namespace RPG::Client { class CurveUndirectedEdge; }

#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS7_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA9252D0)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS7_2__GENERATECURVEEDGES_B__3_OFFSET UNITYSDK_OFFSET(0xA925530)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveUndirectedGraph___c__DisplayClass7_2_TypeDefinitionIndex = 63242;

	class MonoCurveUndirectedGraph___c__DisplayClass7_2 : public ::System::Object
	{
	public:
		::RPG::Client::CurveUndirectedConnection* connection; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS7_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _GenerateCurveEdges_b__3(::RPG::Client::CurveUndirectedEdge* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS7_2__GENERATECURVEEDGES_B__3_OFFSET))(this, item);
		}
	};
}

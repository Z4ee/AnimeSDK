#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveUndirectedEdge; }
namespace RPG::Client { class CurveUndirectedEdgeSetting; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0700C0)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS7_0__GENERATECURVEEDGES_B__1_OFFSET UNITYSDK_OFFSET(0xC070230)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveUndirectedGraph___c__DisplayClass7_0_TypeDefinitionIndex = 64157;

	class MonoCurveUndirectedGraph___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::CurveUndirectedEdge*>* __9__1; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CurveUndirectedEdgeSetting*>* settings; // 0x18
		::System::Int32 i; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GenerateCurveEdges_b__1(::RPG::Client::CurveUndirectedEdge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS7_0__GENERATECURVEEDGES_B__1_OFFSET))(this, a1);
		}
	};
}

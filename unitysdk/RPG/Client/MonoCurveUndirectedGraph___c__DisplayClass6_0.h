#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class CurveUndirectedEdge; }

#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0700B0)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS6_0__FINDEDGEBYCURVE_B__0_OFFSET UNITYSDK_OFFSET(0xC0701E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveUndirectedGraph___c__DisplayClass6_0_TypeDefinitionIndex = 64156;

	class MonoCurveUndirectedGraph___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindEdgeByCurve_b__0(::RPG::Client::CurveUndirectedEdge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__DISPLAYCLASS6_0__FINDEDGEBYCURVE_B__0_OFFSET))(this, a1);
		}
	};
}

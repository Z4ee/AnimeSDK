#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveUndirectedEdge; }
namespace RPG::Client { class CurveUndirectedEdgeConnection; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x943BC80)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS25_0__SETCONNECTION_B__0_OFFSET UNITYSDK_OFFSET(0x943C660)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveUndirectedEdge___c__DisplayClass25_0_TypeDefinitionIndex = 55991;

	class CurveUndirectedEdge___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::Client::CurveUndirectedEdge* __4__this; // 0x10
		::System::Func_2<::RPG::Client::CurveUndirectedEdgeConnection*, ::System::Boolean>* __9__0; // 0x18
		::RPG::Client::ECurveEdgePoint point; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetConnection_b__0(::RPG::Client::CurveUndirectedEdgeConnection* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdgeConnection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS25_0__SETCONNECTION_B__0_OFFSET))(this, other);
		}
	};
}

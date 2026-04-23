#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveUndirectedEdge; }
namespace RPG::Client { class CurveUndirectedEdgeConnection; }

#define RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E9F30)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS28_0__TRYCONNECTTOOTHEREDGE_B__0_OFFSET UNITYSDK_OFFSET(0xA0EA3A0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS28_0__TRYCONNECTTOOTHEREDGE_B__1_OFFSET UNITYSDK_OFFSET(0xA0EA3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveUndirectedEdge___c__DisplayClass28_0_TypeDefinitionIndex = 63235;

	class CurveUndirectedEdge___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::CurveUndirectedEdge* connectEdge; // 0x10
		::RPG::Client::ECurveEdgePoint connectPoint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryConnectToOtherEdge_b__0(::RPG::Client::CurveUndirectedEdgeConnection* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdgeConnection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS28_0__TRYCONNECTTOOTHEREDGE_B__0_OFFSET))(this, item);
		}

		::System::Boolean _TryConnectToOtherEdge_b__1(::RPG::Client::CurveUndirectedEdgeConnection* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdgeConnection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS28_0__TRYCONNECTTOOTHEREDGE_B__1_OFFSET))(this, item);
		}
	};
}

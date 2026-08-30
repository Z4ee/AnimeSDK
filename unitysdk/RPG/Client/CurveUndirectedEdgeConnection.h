#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveUndirectedEdge; }

#define RPG_CLIENT_CURVEUNDIRECTEDEDGECONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x192D1A60)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveUndirectedEdgeConnection_TypeDefinitionIndex = 68533;

	class CurveUndirectedEdgeConnection : public ::System::Object
	{
	public:
		::System::Boolean isConnect; // 0x10
		::RPG::Client::ECurveEdgePoint point; // 0x14
		::RPG::Client::CurveUndirectedEdge* edge; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGECONNECTION__CTOR_OFFSET))(this);
		}
	};
}

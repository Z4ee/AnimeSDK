#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveUndirectedEdge; }
namespace RPG::Client { class CurveUndirectedEdgeConnection; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E9290)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS22_0__SETALLCONNECTION_B__0_OFFSET UNITYSDK_OFFSET(0xA0E9F90)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS22_0__SETALLCONNECTION_B__1_OFFSET UNITYSDK_OFFSET(0xA0EA340)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveUndirectedEdge___c__DisplayClass22_0_TypeDefinitionIndex = 63233;

	class CurveUndirectedEdge___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::CurveUndirectedEdgeConnection*, ::System::Boolean>* __9__1; // 0x10
		::RPG::Client::CurveUndirectedEdge* __4__this; // 0x18
		::RPG::Client::ECurveEdgePoint point; // 0x20
		::System::Boolean isConnect; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetAllConnection_b__0(::RPG::Client::CurveUndirectedEdgeConnection* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveUndirectedEdgeConnection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS22_0__SETALLCONNECTION_B__0_OFFSET))(this, item);
		}

		::System::Boolean _SetAllConnection_b__1(::RPG::Client::CurveUndirectedEdgeConnection* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdgeConnection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE___C__DISPLAYCLASS22_0__SETALLCONNECTION_B__1_OFFSET))(this, other);
		}
	};
}

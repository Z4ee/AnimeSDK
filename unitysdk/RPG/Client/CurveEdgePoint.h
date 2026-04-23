#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class CurveUndirectedEdge; }

#define RPG_CLIENT_CURVEEDGEPOINT_GET_EMPTYPOINT_OFFSET UNITYSDK_OFFSET(0xA0E3380)
#define RPG_CLIENT_CURVEEDGEPOINT_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xD5C80)
#define RPG_CLIENT_CURVEEDGEPOINT_METHOD_2_9D255C917A1DECA7_OFFSET UNITYSDK_OFFSET(0xD5D50)
#define RPG_CLIENT_CURVEEDGEPOINT_METHOD_2_F5758E0A6FE89A9D_OFFSET UNITYSDK_OFFSET(0xD5CE0)
#define RPG_CLIENT_CURVEEDGEPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0E3770)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveEdgePoint_TypeDefinitionIndex = 63229;

	struct alignas(8) CurveEdgePoint
	{
		static ::RPG::Client::CurveEdgePoint* StaticGet__EmptyPoint_k__BackingField()
		{
			return (::RPG::Client::CurveEdgePoint*)Il2CppClass::FromTypeDefinitionIndex(CurveEdgePoint_TypeDefinitionIndex)->GetStaticField(0x605E0);
		}
		::RPG::Client::ECurveEdgePoint point; // 0x10
		::RPG::Client::CurveUndirectedEdge* edge; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT__CCTOR_OFFSET))();
		}

		static ::RPG::Client::CurveEdgePoint get_EmptyPoint()
		{
			return ((::RPG::Client::CurveEdgePoint(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT_GET_EMPTYPOINT_OFFSET))();
		}

		::System::Boolean Method_2_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT_METHOD_2_1D4018D4200358D0_OFFSET))(this);
		}

		::RPG::Client::CurveEdgePoint Method_2_F5758E0A6FE89A9D()
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT_METHOD_2_F5758E0A6FE89A9D_OFFSET))(this);
		}

		::RPG::Client::CurveEdgePoint Method_2_9D255C917A1DECA7()
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT_METHOD_2_9D255C917A1DECA7_OFFSET))(this);
		}
	};
}

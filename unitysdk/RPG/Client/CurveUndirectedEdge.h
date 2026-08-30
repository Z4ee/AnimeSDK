#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CurveEdgePoint.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class CurveUndirectedEdgeConnection; }
namespace RPG::Client { class MonoCurveUndirectedGraph; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192D14C0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x1A2B36E0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1A2AE7B0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1A2B36C0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_MATH_OFFSET UNITYSDK_OFFSET(0x1A2B36F0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A2B36D0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_31661521E6BA1690_OFFSET UNITYSDK_OFFSET(0x192D0E50)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_4ACC2F8684BE1D57_OFFSET UNITYSDK_OFFSET(0x1A2B24F0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_6D4EED649DB90654_OFFSET UNITYSDK_OFFSET(0x192D0A10)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_729D7865C768EDB3_OFFSET UNITYSDK_OFFSET(0x192D05B0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_7EEC86D7A31C7C87_OFFSET UNITYSDK_OFFSET(0x192D0C10)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_A1EB2E3ADE286198_OFFSET UNITYSDK_OFFSET(0x192D0A90)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_AED8C4825531973B_OFFSET UNITYSDK_OFFSET(0x192D0D40)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_AFC0AF10542FE0A9_OFFSET UNITYSDK_OFFSET(0x192D0840)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_C73CBB2E1F3BBA7B_OFFSET UNITYSDK_OFFSET(0x192D06A0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_D3BDE5E15DE6058C_OFFSET UNITYSDK_OFFSET(0x192D07B0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_D9E7614FB85246A5_OFFSET UNITYSDK_OFFSET(0x192D1500)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192D1480)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B3700)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveUndirectedEdge_TypeDefinitionIndex = 68535;

	class CurveUndirectedEdge : public ::System::Object
	{
	public:
		::RPG::Client::MonoCurveUndirectedGraph* _Graph_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::BansheeGz::BGSpline::Curve::BGCurve* _Curve_k__BackingField; // 0x20
		::BansheeGz::BGSpline::Components::BGCcMath* _Math_k__BackingField; // 0x28
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::Client::CurveUndirectedEdgeConnection*>*>* _Connections; // 0x30

		::System::Void _ctor(::RPG::Client::MonoCurveUndirectedGraph* a1, ::System::String* a2, ::BansheeGz::BGSpline::Curve::BGCurve* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveUndirectedGraph*, ::System::String*, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MonoCurveUndirectedGraph* get_Graph()
		{
			return ((::RPG::Client::MonoCurveUndirectedGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_GRAPH_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_NAME_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_CURVE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_Math()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_MATH_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_DISTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_4ACC2F8684BE1D57(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_4ACC2F8684BE1D57_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion Method_1_729D7865C768EDB3(::System::Single a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_729D7865C768EDB3_OFFSET))(this, a1);
		}

		::System::Void Method_1_C73CBB2E1F3BBA7B(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_C73CBB2E1F3BBA7B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_D3BDE5E15DE6058C(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_D3BDE5E15DE6058C_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::CurveEdgePoint Method_1_AFC0AF10542FE0A9(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_AFC0AF10542FE0A9_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_6D4EED649DB90654(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_6D4EED649DB90654_OFFSET))(this, a1);
		}

		::System::Void Method_1_A1EB2E3ADE286198(::RPG::Client::ECurveEdgePoint a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_A1EB2E3ADE286198_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_7EEC86D7A31C7C87(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_7EEC86D7A31C7C87_OFFSET))(this, a1);
		}

		::System::Void Method_1_AED8C4825531973B(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_AED8C4825531973B_OFFSET))(this, a1);
		}

		::System::Void Method_1_31661521E6BA1690(::RPG::Client::ECurveEdgePoint a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_31661521E6BA1690_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_D9E7614FB85246A5(::RPG::Client::ECurveEdgePoint a1, ::RPG::Client::ECurveEdgePoint a2, ::RPG::Client::CurveUndirectedEdge* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint, ::RPG::Client::ECurveEdgePoint, ::RPG::Client::CurveUndirectedEdge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_D9E7614FB85246A5_OFFSET))(this, a1, a2, a3);
		}
	};
}

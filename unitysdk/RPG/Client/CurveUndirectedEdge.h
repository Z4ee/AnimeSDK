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

#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0E99E0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0xA0E8BF0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA0E3C20)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0xA0E8BD0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_MATH_OFFSET UNITYSDK_OFFSET(0xA0E8C00)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA0E8BE0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_0FDE67E8BCF7203D_OFFSET UNITYSDK_OFFSET(0xA0E79F0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_1ED56D19798D11C4_OFFSET UNITYSDK_OFFSET(0xA0E92A0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_2C304A99BB635D34_OFFSET UNITYSDK_OFFSET(0xA0E9520)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_3C24F6FFDD40F9E9_OFFSET UNITYSDK_OFFSET(0xA0E9030)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_6D4EED649DB90654_OFFSET UNITYSDK_OFFSET(0xA0E3450)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_74AA1BF2A29001A3_OFFSET UNITYSDK_OFFSET(0xA0E9170)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_8C82C81F45965A30_OFFSET UNITYSDK_OFFSET(0xA0E9A20)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_95DEB009F6EC8741_OFFSET UNITYSDK_OFFSET(0xA0E8EF0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_B7447ED1D1F41826_OFFSET UNITYSDK_OFFSET(0xA0E6820)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_BEA6D8CD8A871E29_OFFSET UNITYSDK_OFFSET(0xA0E93F0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_E467A6121B51953B_OFFSET UNITYSDK_OFFSET(0xA0E3540)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E99A0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E8C10)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E9F50)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveUndirectedEdge_TypeDefinitionIndex = 63232;

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

		::UnityEngine::Vector3 Method_1_0FDE67E8BCF7203D(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_0FDE67E8BCF7203D_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion Method_1_95DEB009F6EC8741(::System::Single a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_95DEB009F6EC8741_OFFSET))(this, a1);
		}

		::System::Void Method_1_3C24F6FFDD40F9E9(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_3C24F6FFDD40F9E9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_B7447ED1D1F41826(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_B7447ED1D1F41826_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::CurveEdgePoint Method_1_E467A6121B51953B(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_E467A6121B51953B_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_6D4EED649DB90654(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_6D4EED649DB90654_OFFSET))(this, a1);
		}

		::System::Void Method_1_74AA1BF2A29001A3(::RPG::Client::ECurveEdgePoint a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_74AA1BF2A29001A3_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_1ED56D19798D11C4(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_1ED56D19798D11C4_OFFSET))(this, a1);
		}

		::System::Void Method_1_BEA6D8CD8A871E29(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_BEA6D8CD8A871E29_OFFSET))(this, a1);
		}

		::System::Void Method_1_2C304A99BB635D34(::RPG::Client::ECurveEdgePoint a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_2C304A99BB635D34_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_8C82C81F45965A30(::RPG::Client::ECurveEdgePoint a1, ::RPG::Client::ECurveEdgePoint a2, ::RPG::Client::CurveUndirectedEdge* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint, ::RPG::Client::ECurveEdgePoint, ::RPG::Client::CurveUndirectedEdge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_METHOD_1_8C82C81F45965A30_OFFSET))(this, a1, a2, a3);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

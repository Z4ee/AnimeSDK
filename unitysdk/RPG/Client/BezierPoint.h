#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BezierPointData.h"
#include "unitysdk/RPG/Client/BezierPoint_HandleStyle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BezierCurve; }

#define RPG_CLIENT_BEZIERPOINT_GETDATA_OFFSET UNITYSDK_OFFSET(0x18978EE0)
#define RPG_CLIENT_BEZIERPOINT_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x18978AD0)
#define RPG_CLIENT_BEZIERPOINT_GET_GLOBALHANDLE1_OFFSET UNITYSDK_OFFSET(0x18977EB0)
#define RPG_CLIENT_BEZIERPOINT_GET_GLOBALHANDLE2_OFFSET UNITYSDK_OFFSET(0x18977E40)
#define RPG_CLIENT_BEZIERPOINT_GET_HANDLE1_OFFSET UNITYSDK_OFFSET(0x18978BC0)
#define RPG_CLIENT_BEZIERPOINT_GET_HANDLE2_OFFSET UNITYSDK_OFFSET(0x18978CF0)
#define RPG_CLIENT_BEZIERPOINT_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18978B20)
#define RPG_CLIENT_BEZIERPOINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18975050)
#define RPG_CLIENT_BEZIERPOINT_SETDATA_OFFSET UNITYSDK_OFFSET(0x18978FA0)
#define RPG_CLIENT_BEZIERPOINT_SET_CURVE_OFFSET UNITYSDK_OFFSET(0x189745F0)
#define RPG_CLIENT_BEZIERPOINT_SET_GLOBALHANDLE1_OFFSET UNITYSDK_OFFSET(0x18978BE0)
#define RPG_CLIENT_BEZIERPOINT_SET_GLOBALHANDLE2_OFFSET UNITYSDK_OFFSET(0x18978DD0)
#define RPG_CLIENT_BEZIERPOINT_SET_HANDLE1_OFFSET UNITYSDK_OFFSET(0x189783E0)
#define RPG_CLIENT_BEZIERPOINT_SET_HANDLE2_OFFSET UNITYSDK_OFFSET(0x18978D10)
#define RPG_CLIENT_BEZIERPOINT_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18978B80)
#define RPG_CLIENT_BEZIERPOINT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x18978AE0)
#define RPG_CLIENT_BEZIERPOINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x18979150)
#define RPG_CLIENT_BEZIERPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18979340)

namespace RPG::Client
{
	inline static constexpr unsigned int BezierPoint_TypeDefinitionIndex = 34163;

	class BezierPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::BezierCurve* _Curve; // 0x18
		::RPG::Client::BezierPoint_HandleStyle handleStyle; // 0x20
		::UnityEngine::Vector3 _Handle1; // 0x24
		::UnityEngine::Vector3 _Handle2; // 0x30
		::UnityEngine::Vector3 Field_5_4; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT__CTOR_OFFSET))(this);
		}

		::RPG::Client::BezierCurve* get_Curve()
		{
			return ((::RPG::Client::BezierCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_GET_CURVE_OFFSET))(this);
		}

		::System::Void set_Curve(::RPG::Client::BezierCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BezierCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_SET_CURVE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_localPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_GET_LOCALPOSITION_OFFSET))(this);
		}

		::System::Void set_localPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_SET_LOCALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Handle1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_GET_HANDLE1_OFFSET))(this);
		}

		::System::Void set_Handle1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_SET_HANDLE1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_GlobalHandle1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_GET_GLOBALHANDLE1_OFFSET))(this);
		}

		::System::Void set_GlobalHandle1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_SET_GLOBALHANDLE1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Handle2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_GET_HANDLE2_OFFSET))(this);
		}

		::System::Void set_Handle2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_SET_HANDLE2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_GlobalHandle2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_GET_GLOBALHANDLE2_OFFSET))(this);
		}

		::System::Void set_GlobalHandle2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_SET_GLOBALHANDLE2_OFFSET))(this, a1);
		}

		::RPG::Client::BezierPointData GetData()
		{
			return ((::RPG::Client::BezierPointData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_GETDATA_OFFSET))(this);
		}

		::System::Void SetData(::RPG::Client::BezierPointData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BezierPointData))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_SETDATA_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERPOINT_UPDATE_OFFSET))(this);
		}
	};
}

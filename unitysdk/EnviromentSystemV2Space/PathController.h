#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EnvLocalVolume;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ADDPOINT_OFFSET UNITYSDK_OFFSET(0x17C3CD70)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x17C3CCE0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x17C3CC90)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x17C3CD30)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_2747B6E1C570CBE2_OFFSET UNITYSDK_OFFSET(0x17C3C510)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_4415A966EAD05399_OFFSET UNITYSDK_OFFSET(0x17C3CA80)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_64193BDBED1866DF_OFFSET UNITYSDK_OFFSET(0x17C3C7D0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x17C3C190)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_7E832D0C2C340C33_OFFSET UNITYSDK_OFFSET(0x17C3C430)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x17C3BFE0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17C3C350)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17C3C140)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17C3BDD0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_REMOVEPOINT_OFFSET UNITYSDK_OFFSET(0x17C3CE50)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x17C3BF90)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17C3C3A0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3CEF0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int PathController_TypeDefinitionIndex = 47698;

	class PathController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Points; // 0x18
		::System::Single MaxDistance; // 0x20
		::System::Boolean broadcastCurve; // 0x24
		::System::Boolean Field_5_3; // 0x25
		::System::Boolean ShowDebugGizmos; // 0x26
		::UnityEngine::Color PathColor; // 0x28
		::System::Single GizmoSize; // 0x38
		::System::Single Field_5_7; // 0x3C
		::System::Int32 Field_5_8; // 0x40
		::System::Single Field_5_9; // 0x44
		::System::Single Field_5_10; // 0x48
		::System::Single Field_5_11; // 0x4C
		::System::Collections::Generic::List_1<::EnvLocalVolume*>* controlledEnvLocalVolumes; // 0x50
		::EnvLocalVolume* targetEnvLocalVolume; // 0x58
		::System::Single changeInterVal; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_FD6692A5F6B0AC0C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_FD6692A5F6B0AC0C_OFFSET))(this);
		}

		::System::Void Method_5_2747B6E1C570CBE2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_2747B6E1C570CBE2_OFFSET))(this, a1);
		}

		::System::Void Method_5_705FFC79B57F4953(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_705FFC79B57F4953_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_64193BDBED1866DF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_64193BDBED1866DF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_5_4415A966EAD05399(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_4415A966EAD05399_OFFSET))(this, a1, a2);
		}

		::System::Single GetCurrentPercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTPERCENTAGE_OFFSET))(this);
		}

		::System::Single GetCurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTDISTANCE_OFFSET))(this);
		}

		::System::Int32 GetCurrentSegmentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTSEGMENTINDEX_OFFSET))(this);
		}

		::System::Void AddPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ADDPOINT_OFFSET))(this, a1);
		}

		::System::Void RemovePoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_REMOVEPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_7E832D0C2C340C33()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_METHOD_5_7E832D0C2C340C33_OFFSET))(this);
		}
	};
}

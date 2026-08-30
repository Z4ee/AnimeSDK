#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowMeshUI_MeshUIOutlineType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x15DA00)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_CENTERPOINT_OFFSET UNITYSDK_OFFSET(0x15D970)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_MESH_OFFSET UNITYSDK_OFFSET(0x25E80)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_SWITCHDATA_OFFSET UNITYSDK_OFFSET(0x15DB00)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_WINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x15D980)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET__WIDTHHEIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x15DA60)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x15DC30)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_53101C986CC2F71A_OFFSET UNITYSDK_OFFSET(0x15DC50)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x15DC40)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_6828C34A483313B0_OFFSET UNITYSDK_OFFSET(0x15DC70)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x15DC60)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15DBD0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x15DBC0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15DC80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowMeshUI_TypeDefinitionIndex = 48357;

	struct alignas(8) CRPCameraSmallWindowMeshUI
	{
		// static const ::System::Single _MeshFixedDepth; // 0x0
		// static const ::System::Single _TargetWidthHeightRatio; // 0x0
		::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType OutlineType; // 0x10
		::UnityEngine::Vector2 Position; // 0x14
		::System::Single Rotation; // 0x1C
		::System::Single Scale; // 0x20
		::UnityEngine::Color Color; // 0x24
		::System::Single FinalScale; // 0x34
		::UnityEngine::MeshRenderer* _CachedMeshRenderer; // 0x38
		::UnityEngine::GameObject* _CachedMeshGo; // 0x40
		::UnityEngine::Camera* _CachedMainCamera; // 0x48

		::UnityEngine::MeshRenderer* get_Mesh()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CenterPoint()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_CENTERPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_WindowSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_WINDOWSIZE_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_ACTIVE_OFFSET))(this);
		}

		::System::Single get__WidthHeightRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET__WIDTHHEIGHTRATIO_OFFSET))(this);
		}

		/*
		::RPGTools::Timeline::PerformanceLiveStreamMeshUISwitchData get_SwitchData()
		{
			return ((::RPGTools::Timeline::PerformanceLiveStreamMeshUISwitchData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_GET_SWITCHDATA_OFFSET))(this);
		}
		*/

		::System::Boolean Method_2_AA972BE565DAF9E3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_AA972BE565DAF9E3_OFFSET))(this);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_2_3C56C1AF247AC1EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
		}

		::System::Void Method_2_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_2_53101C986CC2F71A(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_53101C986CC2F71A_OFFSET))(this, a1);
		}

		::System::Void Method_2_921C3C3E09D59CD4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
		}

		::System::Void Method_2_6828C34A483313B0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_6828C34A483313B0_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWMESHUI_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}

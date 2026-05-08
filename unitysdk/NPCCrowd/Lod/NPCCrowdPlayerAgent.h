#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace System { class EventArgs; }

#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0xEA59560)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xEA59660)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET UNITYSDK_OFFSET(0xEA59300)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEA599E0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONINIT_OFFSET UNITYSDK_OFFSET(0xEA59870)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0xEA59B50)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xEA59720)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHPLAYERCMP_OFFSET UNITYSDK_OFFSET(0xEA59360)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0xEA59BA0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdPlayerAgent_TypeDefinitionIndex = 65085;

	class NPCCrowdPlayerAgent : public ::System::Object
	{
	public:
		::Class_3_DFD5D1FDB9D2A4AC* _playerCmp; // 0x10
		::System::Int32 lastUpdateFrame; // 0x18
		::UnityEngine::Vector3 curPos; // 0x1C
		::UnityEngine::Vector3 lastPos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET))(this);
		}

		::Class_3_DFD5D1FDB9D2A4AC* get_playerCmp()
		{
			return ((::Class_3_DFD5D1FDB9D2A4AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET))(this);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETMOVEMENTMAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETPOSITION_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHDATA_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONINIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void RefreshPlayerCmp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHPLAYERCMP_OFFSET))(this);
		}

		::System::Void OnLocalAvatarChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONLOCALAVATARCHANGE_OFFSET))(this, args);
		}
	};
}

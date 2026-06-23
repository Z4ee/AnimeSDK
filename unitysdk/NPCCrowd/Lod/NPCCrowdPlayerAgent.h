#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }

#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0xFDF20A0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xFDF21A0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_HASVALIDTARGET_OFFSET UNITYSDK_OFFSET(0xFDF2040)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET UNITYSDK_OFFSET(0xFDF1A90)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONCROWDMAINCONTROLTARGETCHANGED_OFFSET UNITYSDK_OFFSET(0xFDF2FB0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFDF2B70)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONINIT_OFFSET UNITYSDK_OFFSET(0xFDF27A0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0xFDF2DF0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xFDF2260)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHPLAYERCMP_OFFSET UNITYSDK_OFFSET(0xFDF1AF0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETLOCALAVATARPOSITION_OFFSET UNITYSDK_OFFSET(0xFDF24D0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETMAINCONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xFDF2410)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0xFDF3340)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdPlayerAgent_TypeDefinitionIndex = 78795;

	class NPCCrowdPlayerAgent : public ::System::Object
	{
	public:
		::Class_3_DFD5D1FDB9D2A4AC* _playerCmp; // 0x10
		::MoleMole::Battle::Entity* _mainControlEntity; // 0x18
		::System::Int32 lastUpdateFrame; // 0x20
		::UnityEngine::Vector3 curPos; // 0x24
		::System::Boolean _followLocalAvatar; // 0x30
		::UnityEngine::Vector3 lastPos; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET))(this);
		}

		::Class_3_DFD5D1FDB9D2A4AC* get_playerCmp()
		{
			return ((::Class_3_DFD5D1FDB9D2A4AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET))(this);
		}

		::System::Boolean get_HasValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_HASVALIDTARGET_OFFSET))(this);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETMOVEMENTMAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETPOSITION_OFFSET))(this);
		}

		::System::Boolean TryGetMainControlPosition(::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETMAINCONTROLPOSITION_OFFSET))(this, position);
		}

		::System::Boolean TryGetLocalAvatarPosition(::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETLOCALAVATARPOSITION_OFFSET))(this, position);
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

		::System::Void OnCrowdMainControlTargetChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONCROWDMAINCONTROLTARGETCHANGED_OFFSET))(this, args);
		}
	};
}

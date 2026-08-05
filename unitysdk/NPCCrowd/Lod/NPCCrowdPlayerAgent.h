#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }

#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0x95437C0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x95438B0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_HASVALIDTARGET_OFFSET UNITYSDK_OFFSET(0x9543760)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_NEEDREFRESHDATA_OFFSET UNITYSDK_OFFSET(0x9543EB0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET UNITYSDK_OFFSET(0x95431B0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONCROWDMAINCONTROLTARGETCHANGED_OFFSET UNITYSDK_OFFSET(0x95446D0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9544290)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONINIT_OFFSET UNITYSDK_OFFSET(0x9543EC0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x9544510)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x9543970)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHPLAYERCMP_OFFSET UNITYSDK_OFFSET(0x9543210)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETLOCALAVATARPOSITION_OFFSET UNITYSDK_OFFSET(0x9543BE0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETMAINCONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0x9543B20)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9544A60)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdPlayerAgent_TypeDefinitionIndex = 80527;

	class NPCCrowdPlayerAgent : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* _mainControlEntity; // 0x10
		::Class_3_C93CC3D2C2AC4067* _playerCmp; // 0x18
		::UnityEngine::Vector3 curPos; // 0x20
		::System::Boolean _followLocalAvatar; // 0x2C
		::System::Int32 lastUpdateFrame; // 0x30
		::UnityEngine::Vector3 lastPos; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET))(this);
		}

		::Class_3_C93CC3D2C2AC4067* get_playerCmp()
		{
			return ((::Class_3_C93CC3D2C2AC4067*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET))(this);
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

		::System::Boolean get_NeedRefreshData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_NEEDREFRESHDATA_OFFSET))(this);
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

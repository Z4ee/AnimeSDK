#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelAnchorUsage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LevelAnchorParameter; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ANCHORINFO_GETAREAANCHORNAME_OFFSET UNITYSDK_OFFSET(0x194297E0)
#define RPG_GAMECORE_ANCHORINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1940EC70)
#define RPG_GAMECORE_ANCHORINFO_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1940ED00)
#define RPG_GAMECORE_ANCHORINFO_INITFORCAMERA_OFFSET UNITYSDK_OFFSET(0x19429790)
#define RPG_GAMECORE_ANCHORINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19429770)
#define RPG_GAMECORE_ANCHORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19429740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnchorInfo_TypeDefinitionIndex = 57991;

	class AnchorInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* TransRoot; // 0x10
		::RPG::GameCore::LevelAnchorParameter* CustomParameter; // 0x18
		::System::String* Name; // 0x20
		::System::String* AreaName; // 0x28
		::UnityEngine::Vector3 _Postion; // 0x30
		::RPG::GameCore::LevelAnchorUsage Usage; // 0x3C
		::UnityEngine::Quaternion _Rotation; // 0x40
		::System::UInt32 ID; // 0x50

		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO_GET_ROTATION_OFFSET))(this);
		}

		::System::Void InitForCamera(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO_INITFORCAMERA_OFFSET))(this, a1, a2);
		}

		::System::String* GetAreaAnchorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO_GETAREAANCHORNAME_OFFSET))(this);
		}
	};
}

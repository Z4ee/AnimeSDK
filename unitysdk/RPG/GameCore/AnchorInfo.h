#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelAnchorUsage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LevelAnchorParameter; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ANCHORINFO_GETAREAANCHORNAME_OFFSET UNITYSDK_OFFSET(0xB5AF1B0)
#define RPG_GAMECORE_ANCHORINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB597220)
#define RPG_GAMECORE_ANCHORINFO_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xB5972B0)
#define RPG_GAMECORE_ANCHORINFO_INITFORCAMERA_OFFSET UNITYSDK_OFFSET(0xB5AF160)
#define RPG_GAMECORE_ANCHORINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB5AF140)
#define RPG_GAMECORE_ANCHORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AF110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnchorInfo_TypeDefinitionIndex = 53331;

	class AnchorInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* TransRoot; // 0x10
		::System::String* Name; // 0x18
		::System::String* AreaName; // 0x20
		::RPG::GameCore::LevelAnchorParameter* CustomParameter; // 0x28
		::RPG::GameCore::LevelAnchorUsage Usage; // 0x30
		::UnityEngine::Quaternion _Rotation; // 0x34
		::System::UInt32 ID; // 0x44
		::UnityEngine::Vector3 _Postion; // 0x48

		::System::Void _ctor(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO__CTOR_OFFSET))(this, root);
		}

		::System::Void _ctor_1(::System::String* anchorName, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO__CTOR_1_OFFSET))(this, anchorName, pos, rot);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO_GET_ROTATION_OFFSET))(this);
		}

		::System::Void InitForCamera(::UnityEngine::Transform* parent, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO_INITFORCAMERA_OFFSET))(this, parent, name);
		}

		::System::String* GetAreaAnchorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORINFO_GETAREAANCHORNAME_OFFSET))(this);
		}
	};
}

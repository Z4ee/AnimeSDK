#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_TIMELINE_EMOEYECTRLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD005CA0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeCtrlData_TypeDefinitionIndex = 45407;

	class EmoEyeCtrlData : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion Eye_L_Rotation; // 0x10
		::UnityEngine::Quaternion Eye_R_Rotation; // 0x20
		::UnityEngine::Vector3 EyeEnd_L_Scale; // 0x30
		::UnityEngine::Vector3 EyeEnd_R_Scale; // 0x3C
		::UnityEngine::Vector3 EyeEnd_L_01_Position; // 0x48
		::UnityEngine::Vector3 EyeEnd_R_01_Position; // 0x54
		::UnityEngine::Quaternion EyeEnd_L_01_Rotation; // 0x60
		::UnityEngine::Quaternion EyeEnd_R_01_Rotation; // 0x70
		::UnityEngine::Vector3 EyeEnd_L_01_Scale; // 0x80
		::UnityEngine::Vector3 EyeEnd_R_01_Scale; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLDATA__CTOR_OFFSET))(this);
		}
	};
}

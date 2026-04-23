#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class EmoEyeCtrlShakeNoiseData; }

#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_METHOD_1_1D64A06884287378_OFFSET UNITYSDK_OFFSET(0xB8C3080)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_METHOD_1_37AFF23E5EB159ED_OFFSET UNITYSDK_OFFSET(0xB8C38D0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB8C3610)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C3C50)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeCtrlShakeData_TypeDefinitionIndex = 44845;

	class EmoEyeCtrlShakeData : public ::System::Object
	{
	public:
		::System::Boolean EnableEye; // 0x10
		::UnityEngine::Vector3 Eye_L_Rotation; // 0x14
		::UnityEngine::Vector3 Eye_R_Rotation; // 0x20
		::System::Single Eye_Rotation_ShakeCircle; // 0x2C
		::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* Eye_Rotation_Noise; // 0x30
		::System::Boolean EnableEyeEnd; // 0x38
		::UnityEngine::Vector3 EyeEnd_L_Scale; // 0x3C
		::UnityEngine::Vector3 EyeEnd_R_Scale; // 0x48
		::System::Single EyeEnd_Scale_ShakeCircle; // 0x54
		::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* EyeEnd_Scale_Noise; // 0x58
		::System::Boolean EnableEyeEnd01; // 0x60
		::UnityEngine::Vector3 EyeEnd_L_01_Position; // 0x64
		::UnityEngine::Vector3 EyeEnd_R_01_Position; // 0x70
		::System::Single EyeEnd01_Position_ShakeCircle; // 0x7C
		::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* EyeEnd01_Position_Noise; // 0x80
		::UnityEngine::Vector3 EyeEnd_L_01_Scale; // 0x88
		::UnityEngine::Vector3 EyeEnd_R_01_Scale; // 0x94
		::System::Single EyeEnd01_Scale_ShakeCircle; // 0xA0
		::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* EyeEnd01_Scale_Noise; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_1D64A06884287378(::RPGTools::Timeline::EmoEyeCtrlShakeData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeData*, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_METHOD_1_1D64A06884287378_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_METHOD_1_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_1_37AFF23E5EB159ED(::RPGTools::Timeline::EmoEyeCtrlShakeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_METHOD_1_37AFF23E5EB159ED_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_AACEDD85A6FDFBD8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x39EAA10)

inline static constexpr unsigned int Struct_2_AACEDD85A6FDFBD8_TypeDefinitionIndex = 40667;

struct alignas(4) Struct_2_AACEDD85A6FDFBD8
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Int32 Field_2_2; // 0x14
	::Struct_2_EAC1BB0F093534A5 Field_2_3; // 0x18
	::UnityEngine::Rect Field_2_4; // 0x80
	::RPG::GameCore::FiveDimCameraFollowClampMask Field_2_5; // 0x90
	::RPG::GameCore::FiveDimCameraFollowClampMask Field_2_6; // 0x94
	::System::Single Field_2_7; // 0x98
	::System::Single Field_2_8; // 0x9C
	::System::Single Field_2_9; // 0xA0
	::System::Boolean Field_2_10; // 0xA4
	::System::Single Field_2_11; // 0xA8
	::System::Boolean Field_2_12; // 0xAC
	::UnityEngine::Vector3 Field_2_13; // 0xB0
	::System::Single Field_2_14; // 0xBC
	::System::Boolean Field_2_15; // 0xC0
	::System::Boolean Field_2_16; // 0xC1
	::System::Boolean Field_2_17; // 0xC2
	::System::Boolean Field_2_18; // 0xC3
	::System::Single Field_2_19; // 0xC4
	::System::Single Field_2_20; // 0xC8
	::Struct_2_EAC1BB0F093534A5 Field_2_21; // 0xCC
	::Struct_2_EAC1BB0F093534A5 Field_2_22; // 0x134
	::UnityEngine::Vector3 Field_2_23; // 0x19C
	::UnityEngine::Quaternion Field_2_24; // 0x1A8
	::UnityEngine::Vector2 Field_2_25; // 0x1B8
	::UnityEngine::Vector2 Field_2_26; // 0x1C0
	::UnityEngine::Vector2 Field_2_27; // 0x1C8
	::System::Boolean Field_2_28; // 0x1D0
	::System::Boolean Field_2_29; // 0x1D1
	::System::Boolean Field_2_30; // 0x1D2
	::System::Boolean Field_2_31; // 0x1D3
	::System::Single Field_2_32; // 0x1D4
	::System::Boolean Field_2_33; // 0x1D8
	::System::Single Field_2_34; // 0x1DC
	::System::Boolean Field_2_35; // 0x1E0
	::System::Boolean Field_2_36; // 0x1E1

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AACEDD85A6FDFBD8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

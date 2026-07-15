#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeleportType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int Struct_2_55D1240DD3B3EAAC_TypeDefinitionIndex = 57866;

struct alignas(4) Struct_2_55D1240DD3B3EAAC
{
	::System::Int32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::UnityEngine::Quaternion Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_3; // 0x28
	::RPG::Client::TeleportType Field_2_4; // 0x34
	::UnityEngine::Vector3 Field_2_5; // 0x38
	::UnityEngine::Quaternion Field_2_6; // 0x44
	::System::Boolean Field_2_7; // 0x54
	::System::Boolean Field_2_8; // 0x55
};

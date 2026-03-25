#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/Struct_2_06297BD58B1627CC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_C2963602F383E66F__CTOR_OFFSET UNITYSDK_OFFSET(0x1681BF90)

inline static constexpr unsigned int Class_1_C2963602F383E66F_TypeDefinitionIndex = 32983;

class Class_1_C2963602F383E66F : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Nullable_1<::Struct_2_06297BD58B1627CC> Field_1_7; // 0x18
	::UnityEngine::Vector3 Field_1_4; // 0x50
	::RPG::Client::LittleGame::ETimelineControlGameLevelRotation Field_1_1; // 0x5C
	::UnityEngine::Vector3 Field_1_2; // 0x60
	::UnityEngine::Vector3 Field_1_5; // 0x6C
	::UnityEngine::Vector3 Field_1_6; // 0x78
	::UnityEngine::Vector3 Field_1_3; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2963602F383E66F__CTOR_OFFSET))(this);
	}
};

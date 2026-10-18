#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/Struct_2_06297BD58B1627CC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_C2963602F383E66F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DCD40)

inline static constexpr unsigned int Class_1_C2963602F383E66F_TypeDefinitionIndex = 42518;

class Class_1_C2963602F383E66F : public ::System::Object
{
public:
	::System::Nullable_1<::Struct_2_06297BD58B1627CC> LAPJCIBMPIH; // 0x10
	::UnityEngine::Transform* GNOKDJHJJAB; // 0x48
	::UnityEngine::Vector3 CLMKNFILOLB; // 0x50
	::UnityEngine::Vector3 HFOMPEEAPCG; // 0x5C
	::UnityEngine::Vector3 IJPLNPNAMBJ; // 0x68
	::UnityEngine::Vector3 KONBAMDOGDH; // 0x74
	::RPG::Client::LittleGame::ETimelineControlGameLevelRotation NMELCPIOKNO; // 0x80
	::UnityEngine::Vector3 OIHGPMFDIEA; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2963602F383E66F__CTOR_OFFSET))(this);
	}
};

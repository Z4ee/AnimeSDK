#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_94FB79109AF2A6F5__CTOR_OFFSET UNITYSDK_OFFSET(0x10649C00)

inline static constexpr unsigned int Class_1_94FB79109AF2A6F5_TypeDefinitionIndex = 49397;

class Class_1_94FB79109AF2A6F5 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::RPG::GameCore::PhotoGraphAimIdentifyType Field_1_2; // 0x14
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_94FB79109AF2A6F5__CTOR_OFFSET))(this, a1, a2, a3);
	}
};

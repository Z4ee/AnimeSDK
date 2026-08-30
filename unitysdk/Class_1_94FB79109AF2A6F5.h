#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_94FB79109AF2A6F5__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EDBB0)

inline static constexpr unsigned int Class_1_94FB79109AF2A6F5_TypeDefinitionIndex = 61030;

class Class_1_94FB79109AF2A6F5 : public ::System::Object
{
public:
	::UnityEngine::Vector3 KKLDLLOJEFN; // 0x10
	::RPG::GameCore::PhotoGraphAimIdentifyType BDHPOJCKPIM; // 0x1C
	::System::UInt32 DBKEGLOJIAG; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_94FB79109AF2A6F5__CTOR_OFFSET))(this, a1, a2, a3);
	}
};

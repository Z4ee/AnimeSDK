#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_94DF359B57B2BFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C393240)

inline static constexpr unsigned int Class_1_94DF359B57B2BFDB_TypeDefinitionIndex = 42115;

class Class_1_94DF359B57B2BFDB : public ::System::Object
{
public:
	::UnityEngine::Vector3 LPPIHKNHFGF; // 0x10
	::UnityEngine::Quaternion HFOMPEEAPCG; // 0x1C
	::RPG::GameCore::FixPoint GCJMFBKLGHI; // 0x30
	::RPG::GameCore::FixPoint IBNKNGGMANN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94DF359B57B2BFDB__CTOR_OFFSET))(this);
	}
};

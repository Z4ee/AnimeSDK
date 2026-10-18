#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EImpactType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_9A6B8444E37C7412_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB4A1D0)
#define CLASS_1_9A6B8444E37C7412__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB4A230)

inline static constexpr unsigned int Class_1_9A6B8444E37C7412_TypeDefinitionIndex = 42916;

class Class_1_9A6B8444E37C7412 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x10
	::System::Single GHFHMNDKFNE; // 0x18
	::RPG::Client::LittleGame::RoadRash::EImpactType IGCHMKBAIDJ; // 0x1C
	::System::Single IEHPFADHJFD; // 0x20
	::System::Single BFPEKOGAALP; // 0x24
	::System::Single LGNNJDNJPJA; // 0x28
	::UnityEngine::Vector3 LJDHGFECMHJ; // 0x2C
	::System::Single HHLNOEILPOJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A6B8444E37C7412__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A6B8444E37C7412_CLEAR_OFFSET))(this);
	}
};

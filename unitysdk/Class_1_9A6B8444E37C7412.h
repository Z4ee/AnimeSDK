#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EImpactType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_9A6B8444E37C7412_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CDDC4E0)
#define CLASS_1_9A6B8444E37C7412__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDC540)

inline static constexpr unsigned int Class_1_9A6B8444E37C7412_TypeDefinitionIndex = 41304;

class Class_1_9A6B8444E37C7412 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x10
	::UnityEngine::Vector3 LJDHGFECMHJ; // 0x18
	::System::Single HHLNOEILPOJ; // 0x24
	::System::Single LGNNJDNJPJA; // 0x28
	::System::Single BFPEKOGAALP; // 0x2C
	::System::Single GHFHMNDKFNE; // 0x30
	::System::Single IEHPFADHJFD; // 0x34
	::RPG::Client::LittleGame::RoadRash::EImpactType IGCHMKBAIDJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A6B8444E37C7412__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A6B8444E37C7412_CLEAR_OFFSET))(this);
	}
};

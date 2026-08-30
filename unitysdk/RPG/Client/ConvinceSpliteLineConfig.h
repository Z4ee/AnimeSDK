#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConvinceHPToSpliteLineConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CONVINCESPLITELINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCC734C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceSpliteLineConfig_TypeDefinitionIndex = 60776;

	class ConvinceSpliteLineConfig : public ::System::Object
	{
	public:
		::System::Single LerpTime; // 0x10
		::UnityEngine::AnimationCurve* StrongCurve; // 0x18
		::System::Single StrongFloor; // 0x20
		::UnityEngine::AnimationCurve* MediumCurve; // 0x28
		::System::Single MediumFloor; // 0x30
		::UnityEngine::AnimationCurve* WeakCurve; // 0x38
		::System::Boolean UseHPChangePos; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ConvinceHPToSpliteLineConfig*>* HPToPos; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCESPLITELINECONFIG__CTOR_OFFSET))(this);
		}
	};
}

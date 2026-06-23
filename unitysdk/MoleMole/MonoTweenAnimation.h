#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_91F5B5FCD8262EE8_Enum_3_A626A12B886B3470.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOTWEENANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x12648F30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTweenAnimation_TypeDefinitionIndex = 42688;

	class MonoTweenAnimation : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::StageTweenAnimData*>* AnimDataMap; // 0x58
		::Class_1_91F5B5FCD8262EE8_Enum_3_A626A12B886B3470 TimeScaleMode; // 0x60
		::System::String* AutoPlayTween; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTWEENANIMATION__CTOR_OFFSET))(this);
		}
	};
}

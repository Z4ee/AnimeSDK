#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoBPLevelAnimation; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x136D6F10)
#define MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362_METHOD_1_286570692E8A7912_OFFSET UNITYSDK_OFFSET(0x136D7010)
#define MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362__CTOR_OFFSET UNITYSDK_OFFSET(0x136D6F00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBPLevelAnimation_Class_1_6470203AB5D58362_TypeDefinitionIndex = 65374;

	class MonoBPLevelAnimation_Class_1_6470203AB5D58362 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* Field_1_6; // 0x10
		::System::Action_1<::System::Single>* Field_1_5; // 0x18
		::MoleMole::MonoBPLevelAnimation* Field_1_1; // 0x20
		::UnityEngine::AnimationCurve* Field_1_7; // 0x28
		::System::Single Field_1_0; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_1_286570692E8A7912()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362_METHOD_1_286570692E8A7912_OFFSET))(this);
		}
	};
}

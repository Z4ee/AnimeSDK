#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MarbleTransformAnimationHandle;
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_SEALPOOLMANAGER_CLASS_1_5268A629A666D630__CTOR_OFFSET UNITYSDK_OFFSET(0xA422C90)

namespace RPG::Client
{
	inline static constexpr unsigned int SealPoolManager_Class_1_5268A629A666D630_TypeDefinitionIndex = 48920;

	class SealPoolManager_Class_1_5268A629A666D630 : public ::System::Object
	{
	public:
		::MarbleTransformAnimationHandle* Field_1_1; // 0x10
		::UnityEngine::Rigidbody* Field_1_0; // 0x18
		::System::Single Field_1_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_CLASS_1_5268A629A666D630__CTOR_OFFSET))(this);
		}
	};
}

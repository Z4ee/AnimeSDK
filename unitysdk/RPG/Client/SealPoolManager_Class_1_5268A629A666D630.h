#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MarbleTransformAnimationHandle;
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_SEALPOOLMANAGER_CLASS_1_5268A629A666D630__CTOR_OFFSET UNITYSDK_OFFSET(0xE0704F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SealPoolManager_Class_1_5268A629A666D630_TypeDefinitionIndex = 60524;

	class SealPoolManager_Class_1_5268A629A666D630 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* BIPDNCFCOIN; // 0x10
		::MarbleTransformAnimationHandle* CKDKOONONCG; // 0x18
		::System::Single IDCNNAMOKEH; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_CLASS_1_5268A629A666D630__CTOR_OFFSET))(this);
		}
	};
}

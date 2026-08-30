#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MarbleTransformAnimationHandle;
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_SEALPOOLMANAGER_CLASS_1_5268A629A666D630__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF72350)

namespace RPG::Client
{
	inline static constexpr unsigned int SealPoolManager_Class_1_5268A629A666D630_TypeDefinitionIndex = 60524;

	class SealPoolManager_Class_1_5268A629A666D630 : public ::System::Object
	{
	public:
		::MarbleTransformAnimationHandle* CKDKOONONCG; // 0x10
		::UnityEngine::Rigidbody* BIPDNCFCOIN; // 0x18
		::System::Single IDCNNAMOKEH; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_CLASS_1_5268A629A666D630__CTOR_OFFSET))(this);
		}
	};
}

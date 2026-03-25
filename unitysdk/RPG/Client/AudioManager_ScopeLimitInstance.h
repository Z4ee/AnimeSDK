#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_486;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x90F0DC0)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_RPG_IREFERENCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9102940)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0x90F1170)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CHECKISINRANGE_OFFSET UNITYSDK_OFFSET(0x9102630)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x9102A20)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__DEBUG_OFFSET UNITYSDK_OFFSET(0x9102990)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__ONINSCOPESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9102870)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_ScopeLimitInstance_TypeDefinitionIndex = 48358;

	class AudioManager_ScopeLimitInstance : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_486* Target; // 0x10
		::System::Boolean _IsInScope; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* listener)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_INIT_OFFSET))(this, listener);
		}

		::System::Void Tick(::UnityEngine::Transform* listener)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_TICK_OFFSET))(this, listener);
		}

		::System::Void RPG_IReference_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_RPG_IREFERENCE_CLEAR_OFFSET))(this);
		}

		::System::Boolean _CheckIsInRange(::UnityEngine::Transform* listener)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CHECKISINRANGE_OFFSET))(this, listener);
		}

		::System::Void _OnInScopeStateChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__ONINSCOPESTATECHANGED_OFFSET))(this, value);
		}

		::System::Void _Debug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__DEBUG_OFFSET))(this);
		}
	};
}

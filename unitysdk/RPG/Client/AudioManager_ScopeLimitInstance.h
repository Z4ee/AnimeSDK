#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_658;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xC7F77B0)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_RPG_IREFERENCE_CLEAR_OFFSET UNITYSDK_OFFSET(0xC7F7B90)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xC7F7B20)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CHECKISINRANGE_OFFSET UNITYSDK_OFFSET(0xC7F7810)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F7C70)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__DEBUG_OFFSET UNITYSDK_OFFSET(0xC7F7BE0)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__ONINSCOPESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xC7F7A50)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_ScopeLimitInstance_TypeDefinitionIndex = 59871;

	class AudioManager_ScopeLimitInstance : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_658* Target; // 0x10
		::System::Boolean _IsInScope; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_INIT_OFFSET))(this, a1);
		}

		::System::Void Tick(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Void RPG_IReference_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_RPG_IREFERENCE_CLEAR_OFFSET))(this);
		}

		::System::Boolean _CheckIsInRange(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CHECKISINRANGE_OFFSET))(this, a1);
		}

		::System::Void _OnInScopeStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__ONINSCOPESTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void _Debug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__DEBUG_OFFSET))(this);
		}
	};
}

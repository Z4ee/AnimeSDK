#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class MonoBehaviour; }

#define RPG_CLIENT_BEHAVIORBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E8A190)
#define RPG_CLIENT_BEHAVIORBASE_METHOD_1_627A43057F5DEAED_OFFSET UNITYSDK_OFFSET(0x9E8A1E0)
#define RPG_CLIENT_BEHAVIORBASE_METHOD_1_BB7A80635436443C_OFFSET UNITYSDK_OFFSET(0x9E8A140)
#define RPG_CLIENT_BEHAVIORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E8A2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BehaviorBase_TypeDefinitionIndex = 64861;

	class BehaviorBase : public ::System::Object
	{
	public:
		::UnityEngine::MonoBehaviour* _OwnerMonoBehavior; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_BB7A80635436443C(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_METHOD_1_BB7A80635436443C_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_627A43057F5DEAED(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_METHOD_1_627A43057F5DEAED_OFFSET))(this, a1);
		}
	};
}

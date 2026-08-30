#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOENTITYLOGICBASE_CHANGEOBJECTREFTOPATHREF_OFFSET UNITYSDK_OFFSET(0x1B3AE680)
#define RPG_CLIENT_MONOENTITYLOGICBASE_DISCONNECTEDOBJECTREF_OFFSET UNITYSDK_OFFSET(0x1B3AE710)
#define RPG_CLIENT_MONOENTITYLOGICBASE_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1B3AE750)
#define RPG_CLIENT_MONOENTITYLOGICBASE_REFRESHOBJECTREFBYPATHREF_OFFSET UNITYSDK_OFFSET(0x1B3AE6D0)
#define RPG_CLIENT_MONOENTITYLOGICBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3AE7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEntityLogicBase_TypeDefinitionIndex = 68553;

	class MonoEntityLogicBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYLOGICBASE__CTOR_OFFSET))(this);
		}

		::System::Void ChangeObjectRefToPathRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYLOGICBASE_CHANGEOBJECTREFTOPATHREF_OFFSET))(this, a1);
		}

		::System::Void RefreshObjectRefByPathRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYLOGICBASE_REFRESHOBJECTREFBYPATHREF_OFFSET))(this);
		}

		::System::Void DisconnectedObjectRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYLOGICBASE_DISCONNECTEDOBJECTREF_OFFSET))(this);
		}

		::System::String* GetRelativePath(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOENTITYLOGICBASE_GETRELATIVEPATH_OFFSET))(this, a1, a2, a3);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class Player; }
namespace UnityEngine { class MonoBehaviour; }

#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FC55A20)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FC55C40)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FC55CA0)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FC55C50)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FC55A10)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC55A00)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player__IssuePluginUpdatesForFrames_d__160_TypeDefinitionIndex = 35067;

	class Player__IssuePluginUpdatesForFrames_d__160 : public ::System::Object
	{
	public:
		::CriWare::CriMana::Player* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::MonoBehaviour* playerHolder; // 0x20
		::System::Int32 playerId; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Int32 frameCount; // 0x30
		::System::Boolean destroy; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__160_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

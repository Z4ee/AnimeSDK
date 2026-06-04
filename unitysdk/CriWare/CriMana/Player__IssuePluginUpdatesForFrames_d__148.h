#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class Player; }
namespace UnityEngine { class MonoBehaviour; }

#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x146D4340)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x146D45B0)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x146D4610)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x146D45C0)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146D4330)
#define CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148__CTOR_OFFSET UNITYSDK_OFFSET(0x146D3CC0)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player__IssuePluginUpdatesForFrames_d__148_TypeDefinitionIndex = 37262;

	class Player__IssuePluginUpdatesForFrames_d__148 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::CriWare::CriMana::Player* __4__this; // 0x18
		::UnityEngine::MonoBehaviour* playerHolder; // 0x20
		::System::Boolean destroy; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Int32 playerId; // 0x30
		::System::Int32 frameCount; // 0x34

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__ISSUEPLUGINUPDATESFORFRAMES_D__148_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

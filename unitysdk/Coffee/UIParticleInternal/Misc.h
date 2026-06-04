#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define COFFEE_UIPARTICLEINTERNAL_MISC_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1467D240)
#define COFFEE_UIPARTICLEINTERNAL_MISC_DESTROY_OFFSET UNITYSDK_OFFSET(0x14671630)
#define COFFEE_UIPARTICLEINTERNAL_MISC_QUEUEPLAYERLOOPUPDATE_OFFSET UNITYSDK_OFFSET(0x1467D270)
#define COFFEE_UIPARTICLEINTERNAL_MISC_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1467D260)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Misc_TypeDefinitionIndex = 41518;

	class Misc : public ::System::Object
	{
	public:
		static ::System::Void Destroy(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_DESTROY_OFFSET))(a1);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_DESTROYIMMEDIATE_OFFSET))(a1);
		}

		static ::System::Void SetDirty(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_SETDIRTY_OFFSET))(a1);
		}

		static ::System::Void QueuePlayerLoopUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_QUEUEPLAYERLOOPUPDATE_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define COFFEE_UIPARTICLEINTERNAL_MISC_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x12BBF840)
#define COFFEE_UIPARTICLEINTERNAL_MISC_DESTROY_OFFSET UNITYSDK_OFFSET(0x12BB41A0)
#define COFFEE_UIPARTICLEINTERNAL_MISC_QUEUEPLAYERLOOPUPDATE_OFFSET UNITYSDK_OFFSET(0x12BBF870)
#define COFFEE_UIPARTICLEINTERNAL_MISC_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x12BBF860)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Misc_TypeDefinitionIndex = 40691;

	class Misc : public ::System::Object
	{
	public:
		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_DESTROY_OFFSET))(obj);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_DESTROYIMMEDIATE_OFFSET))(obj);
		}

		static ::System::Void SetDirty(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_SETDIRTY_OFFSET))(obj);
		}

		static ::System::Void QueuePlayerLoopUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_QUEUEPLAYERLOOPUPDATE_OFFSET))();
		}
	};
}

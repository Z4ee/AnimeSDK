#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define RICHTAPCOROUTINEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BABB490)
#define RICHTAPCOROUTINEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BABB480)
#define RICHTAPCOROUTINEMANAGER_STARTCOROUTINETASK_OFFSET UNITYSDK_OFFSET(0x1BAB0CF0)
#define RICHTAPCOROUTINEMANAGER_STOPCOROUTINETASK_OFFSET UNITYSDK_OFFSET(0x1BAB0F20)
#define RICHTAPCOROUTINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BABB690)

inline static constexpr unsigned int RichtapCoroutineManager_TypeDefinitionIndex = 36465;

class RichtapCoroutineManager : public ::UnityEngine::MonoBehaviour
{
public:
	static ::RichtapCoroutineManager** StaticGet__instance()
	{
		return (::RichtapCoroutineManager**)Il2CppClass::FromTypeDefinitionIndex(RichtapCoroutineManager_TypeDefinitionIndex)->GetStaticField(0x271E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Coroutine*>* runningCoroutines; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCOROUTINEMANAGER__CTOR_OFFSET))(this);
	}

	static ::RichtapCoroutineManager* get_Instance()
	{
		return ((::RichtapCoroutineManager*(*)())((::PBYTE)hIl2Cpp + RICHTAPCOROUTINEMANAGER_GET_INSTANCE_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPCOROUTINEMANAGER_AWAKE_OFFSET))(this);
	}

	::System::Void StartCoroutineTask(::System::String* taskName, ::System::Collections::IEnumerator* coroutine)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + RICHTAPCOROUTINEMANAGER_STARTCOROUTINETASK_OFFSET))(this, taskName, coroutine);
	}

	::System::Void StopCoroutineTask(::System::String* taskName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAPCOROUTINEMANAGER_STOPCOROUTINETASK_OFFSET))(this, taskName);
	}
};

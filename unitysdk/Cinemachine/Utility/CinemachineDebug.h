#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace Cinemachine::Utility { class CinemachineDebug_OnGUIDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Object; }

#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_GETSCREENPOS_OFFSET UNITYSDK_OFFSET(0x16489740)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RELEASESCREENPOS_OFFSET UNITYSDK_OFFSET(0x164896B0)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x16489BD0)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_SBFROMPOOL_OFFSET UNITYSDK_OFFSET(0x16489AC0)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x16489CC0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int CinemachineDebug_TypeDefinitionIndex = 38589;

	class CinemachineDebug : public ::System::Object
	{
	public:
		static ::Cinemachine::Utility::CinemachineDebug_OnGUIDelegate** StaticGet_OnGUIHandlers()
		{
			return (::Cinemachine::Utility::CinemachineDebug_OnGUIDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineDebug_TypeDefinitionIndex)->GetStaticField(0xE60);
		}
		static ::System::Collections::Generic::List_1<::System::Text::StringBuilder*>** StaticGet_mAvailableStringBuilders()
		{
			return (::System::Collections::Generic::List_1<::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineDebug_TypeDefinitionIndex)->GetStaticField(0xE68);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>** StaticGet_mClients()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineDebug_TypeDefinitionIndex)->GetStaticField(0xE70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void ReleaseScreenPos(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RELEASESCREENPOS_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetScreenPos(::UnityEngine::Object* a1, ::System::String* a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Object*, ::System::String*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_GETSCREENPOS_OFFSET))(a1, a2, a3);
		}

		static ::System::Text::StringBuilder* SBFromPool()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_SBFROMPOOL_OFFSET))();
		}

		static ::System::Void ReturnToPool(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RETURNTOPOOL_OFFSET))(a1);
		}
	};
}

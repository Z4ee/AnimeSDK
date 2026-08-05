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

#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_GETSCREENPOS_OFFSET UNITYSDK_OFFSET(0x1FBED6B0)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RELEASESCREENPOS_OFFSET UNITYSDK_OFFSET(0x1FBED620)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x1FBEDB40)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_SBFROMPOOL_OFFSET UNITYSDK_OFFSET(0x1FBEDA30)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBEDC00)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int CinemachineDebug_TypeDefinitionIndex = 34826;

	class CinemachineDebug : public ::System::Object
	{
	public:
		static ::Cinemachine::Utility::CinemachineDebug_OnGUIDelegate** StaticGet_OnGUIHandlers()
		{
			return (::Cinemachine::Utility::CinemachineDebug_OnGUIDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineDebug_TypeDefinitionIndex)->GetStaticField(0x28F70);
		}
		static ::System::Collections::Generic::List_1<::System::Text::StringBuilder*>** StaticGet_mAvailableStringBuilders()
		{
			return (::System::Collections::Generic::List_1<::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineDebug_TypeDefinitionIndex)->GetStaticField(0x28F78);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>** StaticGet_mClients()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineDebug_TypeDefinitionIndex)->GetStaticField(0x28F80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void ReleaseScreenPos(::UnityEngine::Object* client)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RELEASESCREENPOS_OFFSET))(client);
		}

		static ::UnityEngine::Rect GetScreenPos(::UnityEngine::Object* client, ::System::String* text, ::UnityEngine::GUIStyle* style)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Object*, ::System::String*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_GETSCREENPOS_OFFSET))(client, text, style);
		}

		static ::System::Text::StringBuilder* SBFromPool()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_SBFROMPOOL_OFFSET))();
		}

		static ::System::Void ReturnToPool(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RETURNTOPOOL_OFFSET))(sb);
		}
	};
}

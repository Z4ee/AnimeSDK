#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace MoleMole { class NapStringBuilderDebug_Class_3_50D343C44D28BEFB; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_GETSCREENPOS_OFFSET UNITYSDK_OFFSET(0x1BEE0930)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_RELEASESCREENPOS_OFFSET UNITYSDK_OFFSET(0x1BEE0870)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_RETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x1BEE0E40)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_SBFROMPOOL_OFFSET UNITYSDK_OFFSET(0x1BEE0D00)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE0F30)

namespace MoleMole
{
	inline static constexpr unsigned int NapStringBuilderDebug_TypeDefinitionIndex = 7863;

	class NapStringBuilderDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Text::StringBuilder*>** StaticGet_Field_5_2()
		{
			return (::System::Collections::Generic::List_1<::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(NapStringBuilderDebug_TypeDefinitionIndex)->GetStaticField(0x6DC0);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapStringBuilderDebug_TypeDefinitionIndex)->GetStaticField(0x6DC8);
		}
		static ::MoleMole::NapStringBuilderDebug_Class_3_50D343C44D28BEFB** StaticGet_OnGUIHandlers()
		{
			return (::MoleMole::NapStringBuilderDebug_Class_3_50D343C44D28BEFB**)Il2CppClass::FromTypeDefinitionIndex(NapStringBuilderDebug_TypeDefinitionIndex)->GetStaticField(0x6DD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void ReleaseScreenPos(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_RELEASESCREENPOS_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetScreenPos(::UnityEngine::Object* a1, ::System::String* a2, ::UnityEngine::GUIStyle* a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Object*, ::System::String*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_GETSCREENPOS_OFFSET))(a1, a2, a3);
		}

		static ::System::Text::StringBuilder* SBFromPool()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_SBFROMPOOL_OFFSET))();
		}

		static ::System::Void ReturnToPool(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_RETURNTOPOOL_OFFSET))(a1);
		}
	};
}

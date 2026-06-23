#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ScriptableObject; }

#define MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF967110)
#define MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE___C__DISPLAYCLASS4_0__LOADASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xF967120)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int SoftScriptObjectReference___c__DisplayClass4_0_TypeDefinitionIndex = 70919;

	class SoftScriptObjectReference___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::ScriptableObject*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadAsync_b__0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE___C__DISPLAYCLASS4_0__LOADASYNC_B__0_OFFSET))(this, asset, handle);
		}
	};
}

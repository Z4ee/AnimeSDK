#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2D6EB0)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D6EF0)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL___C__ONVALIDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1B2D6F00)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int PrefabPool___c_TypeDefinitionIndex = 25899;

	class PrefabPool___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::GameObject*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::UnityEngine::GameObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PrefabPool___c_TypeDefinitionIndex)->GetStaticField(0x1F150);
		}
		static ::FluffyUnderware::DevTools::PrefabPool___c** StaticGet___9()
		{
			return (::FluffyUnderware::DevTools::PrefabPool___c**)Il2CppClass::FromTypeDefinitionIndex(PrefabPool___c_TypeDefinitionIndex)->GetStaticField(0x1F158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnValidate_b__8_0(::UnityEngine::GameObject* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL___C__ONVALIDATE_B__8_0_OFFSET))(this, p);
		}
	};
}

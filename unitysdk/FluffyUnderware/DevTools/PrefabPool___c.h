#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D69F1E0)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F220)
#define FLUFFYUNDERWARE_DEVTOOLS_PREFABPOOL___C__ONVALIDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D69F230)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int PrefabPool___c_TypeDefinitionIndex = 28393;

	class PrefabPool___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::DevTools::PrefabPool___c** StaticGet___9()
		{
			return (::FluffyUnderware::DevTools::PrefabPool___c**)Il2CppClass::FromTypeDefinitionIndex(PrefabPool___c_TypeDefinitionIndex)->GetStaticField(0x22D80);
		}
		static ::System::Func_2<::UnityEngine::GameObject*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::UnityEngine::GameObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PrefabPool___c_TypeDefinitionIndex)->GetStaticField(0x22D88);
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

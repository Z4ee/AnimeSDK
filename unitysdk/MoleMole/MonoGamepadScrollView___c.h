#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___C_METHOD_1_01082DC8B658A680_OFFSET UNITYSDK_OFFSET(0x142A6BD0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142A6B80)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142A6BC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadScrollView___c_TypeDefinitionIndex = 62336;

	class MonoGamepadScrollView___c : public ::System::Object
	{
	public:
		static ::MoleMole::MonoGamepadScrollView___c** StaticGet___9()
		{
			return (::MoleMole::MonoGamepadScrollView___c**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadScrollView___c_TypeDefinitionIndex)->GetStaticField(0x45BF0);
		}
		static ::System::Comparison_1<::UnityEngine::RectTransform*>** StaticGet___9__21_2()
		{
			return (::System::Comparison_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadScrollView___c_TypeDefinitionIndex)->GetStaticField(0x45BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_01082DC8B658A680(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___C_METHOD_1_01082DC8B658A680_OFFSET))(this, a1, a2);
		}
	};
}

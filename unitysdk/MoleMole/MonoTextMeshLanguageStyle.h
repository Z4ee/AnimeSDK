#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_219B2CD5FA4A8100.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class TextMeshStyle; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextMesh; }

#define MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x14A141A0)
#define MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE_METHOD_5_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x14A142A0)
#define MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A146D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTextMeshLanguageStyle_TypeDefinitionIndex = 89596;

	class MonoTextMeshLanguageStyle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_219B2CD5FA4A8100 languageFontStyle; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::TextMeshStyle*>* TextMeshStyles; // 0x20
		::UnityEngine::TextMesh* Field_5_7; // 0x28
		::System::Int32 Field_5_6; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_AE0B725AB77F7E6F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE_METHOD_5_AE0B725AB77F7E6F_OFFSET))(this);
		}
	};
}

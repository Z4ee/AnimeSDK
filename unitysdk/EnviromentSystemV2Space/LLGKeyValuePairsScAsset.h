#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace EnviromentSystem { class EnviroLocalLightGroupProperty_LLGKeyValuePair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_METHOD_3_AA919A9E63C8C412_OFFSET UNITYSDK_OFFSET(0x135EF300)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x135EF180)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x135EF540)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x135EF550)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LLGKeyValuePairsScAsset_TypeDefinitionIndex = 46371;

	class LLGKeyValuePairsScAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroLocalLightGroupProperty_LLGKeyValuePair*>* values; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_3_AA919A9E63C8C412(::EnviromentSystem::EnviroLocalLightGroupProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroLocalLightGroupProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_METHOD_3_AA919A9E63C8C412_OFFSET))(this, a1);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/BlendingValBase.h"

class Class_0_16E4307DCC419505_308;
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace EnviromentSystem { class EnviroLocalLightGroupProperty_LLGKeyValuePair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_CFABCDD7F1E57666_OFFSET UNITYSDK_OFFSET(0x1036F350)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_EA7889976177D748_OFFSET UNITYSDK_OFFSET(0x1036F1F0)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_FD979FE11778F9B5_1_OFFSET UNITYSDK_OFFSET(0x1036FD60)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_FD979FE11778F9B5_OFFSET UNITYSDK_OFFSET(0x1036F240)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1036F090)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1036EF10)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS__CTOR_OFFSET UNITYSDK_OFFSET(0x1036EED0)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1036FE70)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LLGKeyValuePairs_TypeDefinitionIndex = 40010;

	class LLGKeyValuePairs : public ::EnviromentSystemV2Space::BlendingValBase
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroLocalLightGroupProperty_LLGKeyValuePair*>* values; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroLocalLightGroupProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroLocalLightGroupProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_EA7889976177D748(::Class_0_16E4307DCC419505_308* a1, ::Class_0_16E4307DCC419505_308* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_308*, ::Class_0_16E4307DCC419505_308*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_EA7889976177D748_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_FD979FE11778F9B5(::Class_0_16E4307DCC419505_308* a1, ::Class_0_16E4307DCC419505_308* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_308*, ::Class_0_16E4307DCC419505_308*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_FD979FE11778F9B5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_CFABCDD7F1E57666(::Class_0_16E4307DCC419505_308* a1, ::Class_0_16E4307DCC419505_308* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_308*, ::Class_0_16E4307DCC419505_308*, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_CFABCDD7F1E57666_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_FD979FE11778F9B5_1(::Class_0_16E4307DCC419505_308* a1, ::Class_0_16E4307DCC419505_308* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_308*, ::Class_0_16E4307DCC419505_308*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_FD979FE11778F9B5_1_OFFSET))(this, a1, a2);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

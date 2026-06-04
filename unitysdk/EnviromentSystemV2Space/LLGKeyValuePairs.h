#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/BlendingValBase.h"

class Class_0_16E4307DCC419505_329;
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace EnviromentSystem { class EnviroLocalLightGroupProperty_LLGKeyValuePair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_07EEC3C58B6BDF3A_OFFSET UNITYSDK_OFFSET(0x135EE5F0)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_B3347C564BD55EE6_1_OFFSET UNITYSDK_OFFSET(0x135EEFA0)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_B3347C564BD55EE6_OFFSET UNITYSDK_OFFSET(0x135EE450)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_EA7889976177D748_OFFSET UNITYSDK_OFFSET(0x135EE400)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x135EE280)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x135EE0A0)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS__CTOR_OFFSET UNITYSDK_OFFSET(0x135EE060)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x135EF140)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LLGKeyValuePairs_TypeDefinitionIndex = 46502;

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

		::System::Void Method_2_EA7889976177D748(::Class_0_16E4307DCC419505_329* a1, ::Class_0_16E4307DCC419505_329* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_EA7889976177D748_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_B3347C564BD55EE6(::Class_0_16E4307DCC419505_329* a1, ::Class_0_16E4307DCC419505_329* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_B3347C564BD55EE6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_07EEC3C58B6BDF3A(::Class_0_16E4307DCC419505_329* a1, ::Class_0_16E4307DCC419505_329* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*, ::Class_0_16E4307DCC419505_329*, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_07EEC3C58B6BDF3A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_B3347C564BD55EE6_1(::Class_0_16E4307DCC419505_329* a1, ::Class_0_16E4307DCC419505_329* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_METHOD_2_B3347C564BD55EE6_1_OFFSET))(this, a1, a2);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

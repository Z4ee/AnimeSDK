#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26;

#define SOFA_CORE_MESSAGING_INTERNALS_OPENDELEGATEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DC6740)

namespace Sofa::Core::Messaging::Internals
{
	inline static constexpr unsigned int OpenDelegateHelper_TypeDefinitionIndex = 39834;

	class OpenDelegateHelper : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet__CreateOpenHandlerCoreMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(OpenDelegateHelper_TypeDefinitionIndex)->GetStaticField(0x23FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_CORE_MESSAGING_INTERNALS_OPENDELEGATEHELPER__CCTOR_OFFSET))();
		}
	};
}

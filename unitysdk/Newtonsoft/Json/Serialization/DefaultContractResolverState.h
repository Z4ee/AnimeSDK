#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/ResolverContractKey.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Utilities { class PropertyNameTable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC4540)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolverState_TypeDefinitionIndex = 9646;

	class DefaultContractResolverState : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey, ::Newtonsoft::Json::Serialization::JsonContract*>* ContractCache; // 0x10
		::Newtonsoft::Json::Utilities::PropertyNameTable* NameTable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVERSTATE__CTOR_OFFSET))(this);
		}
	};
}

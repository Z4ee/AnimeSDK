#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/ResolverContractKey.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Utilities { class PropertyNameTable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A981D0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolverState_TypeDefinitionIndex = 8452;

	class DefaultContractResolverState : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Utilities::PropertyNameTable* NameTable; // 0x10
		::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey, ::Newtonsoft::Json::Serialization::JsonContract*>* ContractCache; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVERSTATE__CTOR_OFFSET))(this);
		}
	};
}

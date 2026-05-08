#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SIRENIX_SERIALIZATION_GENERICCOLLECTIONFORMATTER_CANFORMAT_OFFSET UNITYSDK_OFFSET(0x1B101C50)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int GenericCollectionFormatter_TypeDefinitionIndex = 7330;

	class GenericCollectionFormatter : public ::System::Object
	{
	public:
		static ::System::Boolean CanFormat(::System::Type* type, ::System::Type*& elementType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GENERICCOLLECTIONFORMATTER_CANFORMAT_OFFSET))(type, elementType);
		}
	};
}

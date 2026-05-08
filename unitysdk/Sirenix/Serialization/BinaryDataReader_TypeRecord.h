#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

#define SIRENIX_SERIALIZATION_BINARYDATAREADER_TYPERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x9D8420)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BinaryDataReader_TypeRecord_TypeDefinitionIndex = 7285;

	struct alignas(8) BinaryDataReader_TypeRecord
	{
		::System::Type* Type; // 0x10
		::System::Boolean IsSet; // 0x18

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER_TYPERECORD__CTOR_OFFSET))(this, type);
		}
	};
}

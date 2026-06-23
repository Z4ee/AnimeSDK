#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_VECTOR4FORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1DC2C860)
#define SIRENIX_SERIALIZATION_VECTOR4FORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1DC2C9D0)
#define SIRENIX_SERIALIZATION_VECTOR4FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC2CBB0)
#define SIRENIX_SERIALIZATION_VECTOR4FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2CB50)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector4Formatter_TypeDefinitionIndex = 7592;

	class Vector4Formatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Vector4>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Vector4Formatter_TypeDefinitionIndex)->GetStaticField(0x6660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR4FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR4FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Vector4& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR4FORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Vector4& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR4FORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

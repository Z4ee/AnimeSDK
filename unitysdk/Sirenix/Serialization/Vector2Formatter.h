#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_VECTOR2FORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1E8355D0)
#define SIRENIX_SERIALIZATION_VECTOR2FORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1E8356C0)
#define SIRENIX_SERIALIZATION_VECTOR2FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E835820)
#define SIRENIX_SERIALIZATION_VECTOR2FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8357C0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector2Formatter_TypeDefinitionIndex = 7590;

	class Vector2Formatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Vector2>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Vector2Formatter_TypeDefinitionIndex)->GetStaticField(0x6650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Vector2& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2FORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Vector2& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2FORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

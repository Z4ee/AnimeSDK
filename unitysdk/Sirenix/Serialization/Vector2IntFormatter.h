#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1FC6CFA0)
#define SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1FC6D090)
#define SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6D1F0)
#define SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6D190)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector2IntFormatter_TypeDefinitionIndex = 93714;

	class Vector2IntFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Vector2Int>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Serializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Vector2IntFormatter_TypeDefinitionIndex)->GetStaticField(0x523E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Vector2Int& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Vector2Int& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

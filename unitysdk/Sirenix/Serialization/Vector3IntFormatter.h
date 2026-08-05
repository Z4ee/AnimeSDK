#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_VECTOR3INTFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1FC6D250)
#define SIRENIX_SERIALIZATION_VECTOR3INTFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1FC6D370)
#define SIRENIX_SERIALIZATION_VECTOR3INTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6D510)
#define SIRENIX_SERIALIZATION_VECTOR3INTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6D4B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector3IntFormatter_TypeDefinitionIndex = 93715;

	class Vector3IntFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Vector3Int>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Serializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Vector3IntFormatter_TypeDefinitionIndex)->GetStaticField(0x523F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3INTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3INTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Vector3Int& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3INTFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Vector3Int& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3INTFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

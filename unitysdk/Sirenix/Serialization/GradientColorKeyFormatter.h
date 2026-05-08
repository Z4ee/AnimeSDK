#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/GradientColorKey.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_GRADIENTCOLORKEYFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1BCF1410)
#define SIRENIX_SERIALIZATION_GRADIENTCOLORKEYFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1BCF1510)
#define SIRENIX_SERIALIZATION_GRADIENTCOLORKEYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCF1680)
#define SIRENIX_SERIALIZATION_GRADIENTCOLORKEYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF1620)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int GradientColorKeyFormatter_TypeDefinitionIndex = 7448;

	class GradientColorKeyFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::GradientColorKey>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GradientColorKeyFormatter_TypeDefinitionIndex)->GetStaticField(0x64E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_ColorSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(GradientColorKeyFormatter_TypeDefinitionIndex)->GetStaticField(0x64E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTCOLORKEYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTCOLORKEYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::GradientColorKey& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GradientColorKey&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTCOLORKEYFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::GradientColorKey& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GradientColorKey&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTCOLORKEYFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

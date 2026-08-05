#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_COLORFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1EDCB230)
#define SIRENIX_SERIALIZATION_COLORFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1EDCB3A0)
#define SIRENIX_SERIALIZATION_COLORFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDCB580)
#define SIRENIX_SERIALIZATION_COLORFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDCB520)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ColorFormatter_TypeDefinitionIndex = 7581;

	class ColorFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Color>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ColorFormatter_TypeDefinitionIndex)->GetStaticField(0x6550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COLORFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COLORFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Color& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COLORFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Color& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COLORFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

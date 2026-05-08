#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_COLOR32FORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1C4C5E60)
#define SIRENIX_SERIALIZATION_COLOR32FORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1C4C5FC0)
#define SIRENIX_SERIALIZATION_COLOR32FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4C61A0)
#define SIRENIX_SERIALIZATION_COLOR32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C6140)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Color32Formatter_TypeDefinitionIndex = 7442;

	class Color32Formatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Color32>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Byte>** StaticGet_ByteSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Color32Formatter_TypeDefinitionIndex)->GetStaticField(0x62E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COLOR32FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COLOR32FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Color32& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COLOR32FORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Color32& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COLOR32FORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

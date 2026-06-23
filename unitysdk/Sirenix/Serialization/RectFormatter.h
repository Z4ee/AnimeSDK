#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_RECTFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1E837480)
#define SIRENIX_SERIALIZATION_RECTFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1E8375F0)
#define SIRENIX_SERIALIZATION_RECTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8377D0)
#define SIRENIX_SERIALIZATION_RECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E837770)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int RectFormatter_TypeDefinitionIndex = 7588;

	class RectFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Rect>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RectFormatter_TypeDefinitionIndex)->GetStaticField(0x64E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_RECTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_RECTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Rect& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_RECTFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Rect& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_RECTFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

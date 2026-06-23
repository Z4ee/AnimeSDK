#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/GradientAlphaKey.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_GRADIENTALPHAKEYFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1E7BA6F0)
#define SIRENIX_SERIALIZATION_GRADIENTALPHAKEYFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1E7BA7E0)
#define SIRENIX_SERIALIZATION_GRADIENTALPHAKEYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BA940)
#define SIRENIX_SERIALIZATION_GRADIENTALPHAKEYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BA8E0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int GradientAlphaKeyFormatter_TypeDefinitionIndex = 7579;

	class GradientAlphaKeyFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::GradientAlphaKey>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GradientAlphaKeyFormatter_TypeDefinitionIndex)->GetStaticField(0x6360);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTALPHAKEYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTALPHAKEYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::GradientAlphaKey& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GradientAlphaKey&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTALPHAKEYFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::GradientAlphaKey& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GradientAlphaKey&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTALPHAKEYFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

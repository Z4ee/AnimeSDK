#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_BOUNDSFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1E877540)
#define SIRENIX_SERIALIZATION_BOUNDSFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1E877670)
#define SIRENIX_SERIALIZATION_BOUNDSFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E877800)
#define SIRENIX_SERIALIZATION_BOUNDSFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8777A0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BoundsFormatter_TypeDefinitionIndex = 7573;

	class BoundsFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Bounds>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Vector3Serializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BoundsFormatter_TypeDefinitionIndex)->GetStaticField(0x64F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BOUNDSFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BOUNDSFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Bounds& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BOUNDSFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Bounds& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BOUNDSFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

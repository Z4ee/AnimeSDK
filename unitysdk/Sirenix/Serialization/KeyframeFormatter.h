#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/KeyframeFormatter_FieldReader.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1C34BA50)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1C34C790)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C34B690)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C34CCA0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int KeyframeFormatter_TypeDefinitionIndex = 7450;

	class KeyframeFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::UnityEngine::Keyframe>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KeyframeFormatter_TypeDefinitionIndex)->GetStaticField(0x6060);
		}
		static ::Il2CppArray<::Sirenix::Serialization::KeyframeFormatter_FieldReader>** StaticGet_FieldReaders()
		{
			return (::Il2CppArray<::Sirenix::Serialization::KeyframeFormatter_FieldReader>**)Il2CppClass::FromTypeDefinitionIndex(KeyframeFormatter_TypeDefinitionIndex)->GetStaticField(0x6068);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_IntSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KeyframeFormatter_TypeDefinitionIndex)->GetStaticField(0x6070);
		}
		static ::System::Boolean* StaticGet_Is_In_2018_1_Or_Above()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KeyframeFormatter_TypeDefinitionIndex)->GetStaticField(0x3240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Read(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

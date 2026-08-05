#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }

#define SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER_DESERIALIZEIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1FB17580)
#define SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1FB17570)
#define SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER_SERIALIZEIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1FB180A0)
#define SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB18530)
#define SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB184D0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ArrayListFormatter_TypeDefinitionIndex = 7449;

	class ArrayListFormatter : public ::Sirenix::Serialization::BaseFormatter_1<::System::Collections::ArrayList*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ObjectSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ArrayListFormatter_TypeDefinitionIndex)->GetStaticField(0x6380);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Collections::ArrayList* GetUninitializedObject()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET))(this);
		}

		::System::Void DeserializeImplementation(::System::Collections::ArrayList*& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER_DESERIALIZEIMPLEMENTATION_OFFSET))(this, value, reader);
		}

		::System::Void SerializeImplementation(::System::Collections::ArrayList*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ARRAYLISTFORMATTER_SERIALIZEIMPLEMENTATION_OFFSET))(this, value, writer);
		}
	};
}

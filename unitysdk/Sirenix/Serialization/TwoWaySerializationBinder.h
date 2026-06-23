#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class DebugContext; }
namespace System { class String; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_TWOWAYSERIALIZATIONBINDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BB4E0)
#define SIRENIX_SERIALIZATION_TWOWAYSERIALIZATIONBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BB4D0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int TwoWaySerializationBinder_TypeDefinitionIndex = 7536;

	class TwoWaySerializationBinder : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::TwoWaySerializationBinder** StaticGet_Default()
		{
			return (::Sirenix::Serialization::TwoWaySerializationBinder**)Il2CppClass::FromTypeDefinitionIndex(TwoWaySerializationBinder_TypeDefinitionIndex)->GetStaticField(0x6340);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TWOWAYSERIALIZATIONBINDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TWOWAYSERIALIZATIONBINDER__CCTOR_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class ServiceOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B20340)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B20380)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x15B20390)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceOptions___c_TypeDefinitionIndex = 6293;

	class ServiceOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::ServiceOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::ServiceOptions___c**)Il2CppClass::FromTypeDefinitionIndex(ServiceOptions___c_TypeDefinitionIndex)->GetStaticField(0xE350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceOptions* __cctor_b__43_0()
		{
			return ((::Google::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C___CCTOR_B__43_0_OFFSET))(this);
		}
	};
}

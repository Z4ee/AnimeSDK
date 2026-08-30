#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class OneofOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B395930)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B395970)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1B395980)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofOptions___c_TypeDefinitionIndex = 5493;

	class OneofOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::OneofOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::OneofOptions___c**)Il2CppClass::FromTypeDefinitionIndex(OneofOptions___c_TypeDefinitionIndex)->GetStaticField(0x166F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofOptions* __cctor_b__33_0()
		{
			return ((::Google::Protobuf::Reflection::OneofOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS___C___CCTOR_B__33_0_OFFSET))(this);
		}
	};
}

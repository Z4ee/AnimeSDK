#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FieldOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B85D170)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85D1B0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS___C___CCTOR_B__89_0_OFFSET UNITYSDK_OFFSET(0x1B85D1C0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldOptions___c_TypeDefinitionIndex = 5498;

	class FieldOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FieldOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::FieldOptions___c**)Il2CppClass::FromTypeDefinitionIndex(FieldOptions___c_TypeDefinitionIndex)->GetStaticField(0x20F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldOptions* __cctor_b__89_0()
		{
			return ((::Google::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS___C___CCTOR_B__89_0_OFFSET))(this);
		}
	};
}

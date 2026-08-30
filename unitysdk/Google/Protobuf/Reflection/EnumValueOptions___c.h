#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class EnumValueOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B372F60)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B372FA0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1B372FB0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueOptions___c_TypeDefinitionIndex = 5497;

	class EnumValueOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::EnumValueOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::EnumValueOptions___c**)Il2CppClass::FromTypeDefinitionIndex(EnumValueOptions___c_TypeDefinitionIndex)->GetStaticField(0x1E8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueOptions* __cctor_b__43_0()
		{
			return ((::Google::Protobuf::Reflection::EnumValueOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C___CCTOR_B__43_0_OFFSET))(this);
		}
	};
}

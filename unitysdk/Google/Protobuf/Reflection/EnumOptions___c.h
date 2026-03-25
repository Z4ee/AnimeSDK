#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class EnumOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AF94F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AF9530)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C___CCTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x15AF9540)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumOptions___c_TypeDefinitionIndex = 6289;

	class EnumOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::EnumOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::EnumOptions___c**)Il2CppClass::FromTypeDefinitionIndex(EnumOptions___c_TypeDefinitionIndex)->GetStaticField(0xCAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumOptions* __cctor_b__52_0()
		{
			return ((::Google::Protobuf::Reflection::EnumOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS___C___CCTOR_B__52_0_OFFSET))(this);
		}
	};
}

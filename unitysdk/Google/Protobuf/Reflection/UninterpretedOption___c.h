#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class UninterpretedOption; }

#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E83B70)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E83BB0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C___CCTOR_B__81_0_OFFSET UNITYSDK_OFFSET(0x17E83BC0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption___c_TypeDefinitionIndex = 5514;

	class UninterpretedOption___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::UninterpretedOption___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::UninterpretedOption___c**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption___c_TypeDefinitionIndex)->GetStaticField(0x42690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::UninterpretedOption* __cctor_b__81_0()
		{
			return ((::Google::Protobuf::Reflection::UninterpretedOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C___CCTOR_B__81_0_OFFSET))(this);
		}
	};
}

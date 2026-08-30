#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class ExtensionRangeOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B375E10)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B375E50)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1B375E60)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ExtensionRangeOptions___c_TypeDefinitionIndex = 5462;

	class ExtensionRangeOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::ExtensionRangeOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::ExtensionRangeOptions___c**)Il2CppClass::FromTypeDefinitionIndex(ExtensionRangeOptions___c_TypeDefinitionIndex)->GetStaticField(0x1EB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ExtensionRangeOptions* __cctor_b__33_0()
		{
			return ((::Google::Protobuf::Reflection::ExtensionRangeOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS___C___CCTOR_B__33_0_OFFSET))(this);
		}
	};
}

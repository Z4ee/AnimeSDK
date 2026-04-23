#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueOptions; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173A8FA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173A8FE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x173A8FF0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueOptions___c_TypeDefinitionIndex = 33711;

	class EnumValueOptions___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions___c**)Il2CppClass::FromTypeDefinitionIndex(EnumValueOptions___c_TypeDefinitionIndex)->GetStaticField(0x68DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions* __cctor_b__29_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C___CCTOR_B__29_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FieldOptions; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173AC800)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173AC840)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C___CCTOR_B__55_0_OFFSET UNITYSDK_OFFSET(0x173AC850)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldOptions___c_TypeDefinitionIndex = 33705;

	class FieldOptions___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FieldOptions___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FieldOptions___c**)Il2CppClass::FromTypeDefinitionIndex(FieldOptions___c_TypeDefinitionIndex)->GetStaticField(0x68ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* __cctor_b__55_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C___CCTOR_B__55_0_OFFSET))(this);
		}
	};
}

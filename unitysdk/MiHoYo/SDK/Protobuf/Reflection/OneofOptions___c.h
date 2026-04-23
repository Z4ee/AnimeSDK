#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class OneofOptions; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BA4D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173BA510)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C___CCTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x173BA520)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofOptions___c_TypeDefinitionIndex = 33707;

	class OneofOptions___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::OneofOptions___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::OneofOptions___c**)Il2CppClass::FromTypeDefinitionIndex(OneofOptions___c_TypeDefinitionIndex)->GetStaticField(0x69420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* __cctor_b__24_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C___CCTOR_B__24_0_OFFSET))(this);
		}
	};
}

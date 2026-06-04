#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedCodeInfo_Types_Annotation; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181BEE40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181BEE80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C___CCTOR_B__39_0_OFFSET UNITYSDK_OFFSET(0x181BEE90)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_Types_Annotation___c_TypeDefinitionIndex = 34011;

	class GeneratedCodeInfo_Types_Annotation___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation___c**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation___c_TypeDefinitionIndex)->GetStaticField(0x4DB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* __cctor_b__39_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C___CCTOR_B__39_0_OFFSET))(this);
		}
	};
}

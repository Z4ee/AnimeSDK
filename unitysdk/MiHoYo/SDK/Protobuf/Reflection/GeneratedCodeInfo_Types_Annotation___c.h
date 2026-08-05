#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedCodeInfo_Types_Annotation; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6E040)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6E080)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C___CCTOR_B__39_0_OFFSET UNITYSDK_OFFSET(0x1FC6E090)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_Types_Annotation___c_TypeDefinitionIndex = 29159;

	class GeneratedCodeInfo_Types_Annotation___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation___c**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation___c_TypeDefinitionIndex)->GetStaticField(0x24A90);
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

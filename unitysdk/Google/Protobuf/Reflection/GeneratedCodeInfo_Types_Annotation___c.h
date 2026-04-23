#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class GeneratedCodeInfo_Types_Annotation; }

#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171102F0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17110330)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x17110340)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_Types_Annotation___c_TypeDefinitionIndex = 6321;

	class GeneratedCodeInfo_Types_Annotation___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation___c**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation___c_TypeDefinitionIndex)->GetStaticField(0x5950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* __cctor_b__53_0()
		{
			return ((::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}

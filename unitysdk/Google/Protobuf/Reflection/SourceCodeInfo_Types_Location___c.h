#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class SourceCodeInfo_Types_Location; }

#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDCDE50)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDCDE90)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1BDCDEA0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo_Types_Location___c_TypeDefinitionIndex = 5523;

	class SourceCodeInfo_Types_Location___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location___c**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location___c_TypeDefinitionIndex)->GetStaticField(0x39960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location* __cctor_b__53_0()
		{
			return ((::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}

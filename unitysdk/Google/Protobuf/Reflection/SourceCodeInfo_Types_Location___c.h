#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class SourceCodeInfo_Types_Location; }

#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E80F50)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E80F90)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x17E80FA0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo_Types_Location___c_TypeDefinitionIndex = 5518;

	class SourceCodeInfo_Types_Location___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location___c**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location___c_TypeDefinitionIndex)->GetStaticField(0x424B0);
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

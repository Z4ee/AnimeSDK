#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class SourceCodeInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B217E0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B21820)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C___CCTOR_B__26_0_OFFSET UNITYSDK_OFFSET(0x15B21830)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo___c_TypeDefinitionIndex = 6307;

	class SourceCodeInfo___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::SourceCodeInfo___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::SourceCodeInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo___c_TypeDefinitionIndex)->GetStaticField(0xE3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::SourceCodeInfo* __cctor_b__26_0()
		{
			return ((::Google::Protobuf::Reflection::SourceCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO___C___CCTOR_B__26_0_OFFSET))(this);
		}
	};
}

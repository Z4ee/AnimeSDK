#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_BUFFERS_TEXT_PARSERHELPERS_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x18517AA0)
#define SYSTEM_BUFFERS_TEXT_PARSERHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18517AB0)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int ParserHelpers_TypeDefinitionIndex = 4999;

	class ParserHelpers : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_s_hexLookup()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ParserHelpers_TypeDefinitionIndex)->GetStaticField(0x1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_PARSERHELPERS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDigit(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_PARSERHELPERS_ISDIGIT_OFFSET))(i);
		}
	};
}

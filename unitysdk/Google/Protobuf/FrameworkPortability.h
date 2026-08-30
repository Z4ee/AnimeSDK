#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

#define GOOGLE_PROTOBUF_FRAMEWORKPORTABILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3546F0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int FrameworkPortability_TypeDefinitionIndex = 5386;

	class FrameworkPortability : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::RegexOptions* StaticGet_CompiledRegexWhereAvailable()
		{
			return (::System::Text::RegularExpressions::RegexOptions*)Il2CppClass::FromTypeDefinitionIndex(FrameworkPortability_TypeDefinitionIndex)->GetStaticField(0x9C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FRAMEWORKPORTABILITY__CCTOR_OFFSET))();
		}
	};
}

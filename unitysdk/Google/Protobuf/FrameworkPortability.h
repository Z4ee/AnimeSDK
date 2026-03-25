#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

#define GOOGLE_PROTOBUF_FRAMEWORKPORTABILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x15ADF440)

namespace Google::Protobuf
{
	inline static constexpr unsigned int FrameworkPortability_TypeDefinitionIndex = 6180;

	class FrameworkPortability : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::RegexOptions* StaticGet_CompiledRegexWhereAvailable()
		{
			return (::System::Text::RegularExpressions::RegexOptions*)Il2CppClass::FromTypeDefinitionIndex(FrameworkPortability_TypeDefinitionIndex)->GetStaticField(0x48C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FRAMEWORKPORTABILITY__CCTOR_OFFSET))();
		}
	};
}

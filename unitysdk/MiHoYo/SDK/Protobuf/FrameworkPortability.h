#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

#define MIHOYO_SDK_PROTOBUF_FRAMEWORKPORTABILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E688F80)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int FrameworkPortability_TypeDefinitionIndex = 28456;

	class FrameworkPortability : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::RegexOptions* StaticGet_CompiledRegexWhereAvailable()
		{
			return (::System::Text::RegularExpressions::RegexOptions*)Il2CppClass::FromTypeDefinitionIndex(FrameworkPortability_TypeDefinitionIndex)->GetStaticField(0x7920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FRAMEWORKPORTABILITY__CCTOR_OFFSET))();
		}
	};
}

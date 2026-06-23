#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_INIPARSER_LOADANDPARSE_OFFSET UNITYSDK_OFFSET(0x1C5D54F0)

namespace Foundation
{
	inline static constexpr unsigned int IniParser_TypeDefinitionIndex = 7958;

	class IniParser : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* loadAndParse(::System::String* filePath)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_INIPARSER_LOADANDPARSE_OFFSET))(filePath);
		}
	};
}

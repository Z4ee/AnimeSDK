#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/CommentHandling.h"
#include "unitysdk/Newtonsoft/Json/Linq/LineInfoHandling.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_COMMENTHANDLING_OFFSET UNITYSDK_OFFSET(0x172D4940)
#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_LINEINFOHANDLING_OFFSET UNITYSDK_OFFSET(0x172D4950)
#define NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x172D4960)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JsonLoadSettings_TypeDefinitionIndex = 9696;

	class JsonLoadSettings : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Linq::CommentHandling _commentHandling; // 0x10
		::Newtonsoft::Json::Linq::LineInfoHandling _lineInfoHandling; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::CommentHandling get_CommentHandling()
		{
			return ((::Newtonsoft::Json::Linq::CommentHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_COMMENTHANDLING_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::LineInfoHandling get_LineInfoHandling()
		{
			return ((::Newtonsoft::Json::Linq::LineInfoHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONLOADSETTINGS_GET_LINEINFOHANDLING_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_39BEC054B54B7956___C__DISPLAYCLASS5_0__BUILDANIMGROUPEVENTTASKISCLIENTONLYERRORLOG_B__0_OFFSET UNITYSDK_OFFSET(0x8835620)
#define CLASS_1_39BEC054B54B7956___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8834CF0)

inline static constexpr unsigned int Class_1_39BEC054B54B7956___c__DisplayClass5_0_TypeDefinitionIndex = 44816;

class Class_1_39BEC054B54B7956___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::String* ownerName; // 0x10
	::System::Text::StringBuilder* stringBuilder; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::String* _BuildAnimGroupEventTaskIsClientOnlyErrorLog_b__0(::System::String* msg)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956___C__DISPLAYCLASS5_0__BUILDANIMGROUPEVENTTASKISCLIENTONLYERRORLOG_B__0_OFFSET))(this, msg);
	}
};

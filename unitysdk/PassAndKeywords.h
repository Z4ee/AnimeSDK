#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PASSANDKEYWORDS__CTOR_OFFSET UNITYSDK_OFFSET(0xC493260)

inline static constexpr unsigned int PassAndKeywords_TypeDefinitionIndex = 47889;

class PassAndKeywords : public ::System::Object
{
public:
	::System::Int32 PassIndex; // 0x10
	::System::String* KeywordStr; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PASSANDKEYWORDS__CTOR_OFFSET))(this);
	}
};

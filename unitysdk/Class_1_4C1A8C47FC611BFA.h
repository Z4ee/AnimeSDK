#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4C1A8C47FC611BFA_METHOD_1_378A56D42261F595_OFFSET UNITYSDK_OFFSET(0x169C4EC0)
#define CLASS_1_4C1A8C47FC611BFA__CTOR_OFFSET UNITYSDK_OFFSET(0x169C4FB0)

inline static constexpr unsigned int Class_1_4C1A8C47FC611BFA_TypeDefinitionIndex = 76094;

class Class_1_4C1A8C47FC611BFA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C1A8C47FC611BFA__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_378A56D42261F595(::RPG::Client::TextID a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C1A8C47FC611BFA_METHOD_1_378A56D42261F595_OFFSET))(this, a1);
	}
};

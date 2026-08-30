#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ButtonShowPriority.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_3E7CB4EB71D78E39__CTOR_OFFSET UNITYSDK_OFFSET(0x18353470)

inline static constexpr unsigned int Class_1_3E7CB4EB71D78E39_TypeDefinitionIndex = 52780;

class Class_1_3E7CB4EB71D78E39 : public ::System::Object
{
public:
	::System::String* PHFMCACHFIJ; // 0x10
	::System::String* LHAOGGODHCB; // 0x18
	::RPG::Client::TextID GDLFBAPFPBF; // 0x20
	::RPG::GameCore::ButtonShowPriority DOPGIAJMFFO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E7CB4EB71D78E39__CTOR_OFFSET))(this);
	}
};

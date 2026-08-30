#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPanelData; }
namespace RPG::GameCore { class ActivityPanelRow; }

#define CLASS_1_0C09D55BD986C7A5_METHOD_1_3AAD5C7D48E66392_OFFSET UNITYSDK_OFFSET(0x18351600)
#define CLASS_1_0C09D55BD986C7A5__CTOR_OFFSET UNITYSDK_OFFSET(0x183518D0)

inline static constexpr unsigned int Class_1_0C09D55BD986C7A5_TypeDefinitionIndex = 61791;

class Class_1_0C09D55BD986C7A5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C09D55BD986C7A5__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ActivityPanelData* Method_1_3AAD5C7D48E66392(::RPG::Client::ActivityPanelTemplate a1, ::RPG::GameCore::ActivityPanelRow* a2)
	{
		return ((::RPG::Client::ActivityPanelData*(*)(::RPG::Client::ActivityPanelTemplate, ::RPG::GameCore::ActivityPanelRow*))((::PBYTE)hIl2Cpp + CLASS_1_0C09D55BD986C7A5_METHOD_1_3AAD5C7D48E66392_OFFSET))(a1, a2);
	}
};

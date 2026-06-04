#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPanelData; }
namespace RPG::GameCore { class ActivityPanelRow; }

#define CLASS_1_374C090FC7E83F9F_METHOD_1_E541407C60725271_OFFSET UNITYSDK_OFFSET(0x141DA090)
#define CLASS_1_374C090FC7E83F9F__CTOR_OFFSET UNITYSDK_OFFSET(0x141DA2D0)

inline static constexpr unsigned int Class_1_374C090FC7E83F9F_TypeDefinitionIndex = 57690;

class Class_1_374C090FC7E83F9F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_374C090FC7E83F9F__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ActivityPanelData* Method_1_E541407C60725271(::RPG::Client::ActivityPanelTemplate a1, ::RPG::GameCore::ActivityPanelRow* a2)
	{
		return ((::RPG::Client::ActivityPanelData*(*)(::RPG::Client::ActivityPanelTemplate, ::RPG::GameCore::ActivityPanelRow*))((::PBYTE)hIl2Cpp + CLASS_1_374C090FC7E83F9F_METHOD_1_E541407C60725271_OFFSET))(a1, a2);
	}
};

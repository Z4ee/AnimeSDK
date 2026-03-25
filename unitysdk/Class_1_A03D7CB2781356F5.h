#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPanelData; }
namespace RPG::GameCore { class ActivityPanelRow; }

#define CLASS_1_A03D7CB2781356F5_METHOD_1_32DF36622DFB2ECE_OFFSET UNITYSDK_OFFSET(0x105C0810)
#define CLASS_1_A03D7CB2781356F5__CTOR_OFFSET UNITYSDK_OFFSET(0x105C0A60)

inline static constexpr unsigned int Class_1_A03D7CB2781356F5_TypeDefinitionIndex = 50059;

class Class_1_A03D7CB2781356F5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A03D7CB2781356F5__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ActivityPanelData* Method_1_32DF36622DFB2ECE(::RPG::Client::ActivityPanelTemplate a1, ::RPG::GameCore::ActivityPanelRow* a2)
	{
		return ((::RPG::Client::ActivityPanelData*(*)(::RPG::Client::ActivityPanelTemplate, ::RPG::GameCore::ActivityPanelRow*))((::PBYTE)hIl2Cpp + CLASS_1_A03D7CB2781356F5_METHOD_1_32DF36622DFB2ECE_OFFSET))(a1, a2);
	}
};

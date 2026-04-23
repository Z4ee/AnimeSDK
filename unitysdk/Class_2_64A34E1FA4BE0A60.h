#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyContentTrigger.h"
#include "unitysdk/RPG/Client/MonopolyContentType.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MonopolyOptionalGroupEventDisplayData; }

#define CLASS_2_64A34E1FA4BE0A60_TRIGGER_OFFSET UNITYSDK_OFFSET(0x96CE400)
#define CLASS_2_64A34E1FA4BE0A60__CTOR_OFFSET UNITYSDK_OFFSET(0x96CE3E0)
#define CLASS_2_64A34E1FA4BE0A60___IFIXBASEPROXY_TRIGGER_OFFSET UNITYSDK_OFFSET(0x96CE470)

inline static constexpr unsigned int Class_2_64A34E1FA4BE0A60_TypeDefinitionIndex = 61040;

class Class_2_64A34E1FA4BE0A60 : public ::RPG::Client::MonopolyContentTrigger
{
public:
	::RPG::Client::MonopolyOptionalGroupEventDisplayData* Field_2_0; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MonopolyContentType a3, ::RPG::Client::MonopolyOptionalGroupEventDisplayData* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MonopolyContentType, ::RPG::Client::MonopolyOptionalGroupEventDisplayData*))((::PBYTE)hIl2Cpp + CLASS_2_64A34E1FA4BE0A60__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::LuaUIController* Trigger()
	{
		return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64A34E1FA4BE0A60_TRIGGER_OFFSET))(this);
	}

	::RPG::Client::LuaUIController* __iFixBaseProxy_Trigger()
	{
		return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64A34E1FA4BE0A60___IFIXBASEPROXY_TRIGGER_OFFSET))(this);
	}
};

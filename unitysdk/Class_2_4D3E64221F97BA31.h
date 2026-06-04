#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyContentTrigger.h"
#include "unitysdk/RPG/Client/MonopolyContentType.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MonopolyRandomOptionContentData; }

#define CLASS_2_4D3E64221F97BA31_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1366EDE0)
#define CLASS_2_4D3E64221F97BA31__CTOR_OFFSET UNITYSDK_OFFSET(0x1366EDC0)
#define CLASS_2_4D3E64221F97BA31___IFIXBASEPROXY_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1366EE50)

inline static constexpr unsigned int Class_2_4D3E64221F97BA31_TypeDefinitionIndex = 61977;

class Class_2_4D3E64221F97BA31 : public ::RPG::Client::MonopolyContentTrigger
{
public:
	::RPG::Client::MonopolyRandomOptionContentData* Field_2_0; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MonopolyContentType a3, ::RPG::Client::MonopolyRandomOptionContentData* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MonopolyContentType, ::RPG::Client::MonopolyRandomOptionContentData*))((::PBYTE)hIl2Cpp + CLASS_2_4D3E64221F97BA31__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::LuaUIController* Trigger()
	{
		return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D3E64221F97BA31_TRIGGER_OFFSET))(this);
	}

	::RPG::Client::LuaUIController* __iFixBaseProxy_Trigger()
	{
		return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D3E64221F97BA31___IFIXBASEPROXY_TRIGGER_OFFSET))(this);
	}
};

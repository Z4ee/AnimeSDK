#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_426391BD841CEF9C;
namespace RPG::Client::FateRin { class CardStateChangeContext; }

#define CLASS_1_05C260DCF29BD133__CTOR_OFFSET UNITYSDK_OFFSET(0xC330D50)

inline static constexpr unsigned int Class_1_05C260DCF29BD133_TypeDefinitionIndex = 79221;

class Class_1_05C260DCF29BD133 : public ::System::Object
{
public:
	::Class_1_426391BD841CEF9C* HNEOOKPBCNK; // 0x10
	::RPG::Client::FateRin::CardStateChangeContext* BFIFDHMLIAD; // 0x18

	::System::Void _ctor(::Class_1_426391BD841CEF9C* a1, ::RPG::Client::FateRin::CardStateChangeContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_426391BD841CEF9C*, ::RPG::Client::FateRin::CardStateChangeContext*))((::PBYTE)hIl2Cpp + CLASS_1_05C260DCF29BD133__CTOR_OFFSET))(this, a1, a2);
	}
};

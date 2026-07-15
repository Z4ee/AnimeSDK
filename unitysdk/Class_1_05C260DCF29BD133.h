#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F4140148FE9021F9;
namespace RPG::Client::FateRin { class CardStateChangeContext; }

#define CLASS_1_05C260DCF29BD133__CTOR_OFFSET UNITYSDK_OFFSET(0x15E749B0)

inline static constexpr unsigned int Class_1_05C260DCF29BD133_TypeDefinitionIndex = 75587;

class Class_1_05C260DCF29BD133 : public ::System::Object
{
public:
	::Class_1_F4140148FE9021F9* Field_1_0; // 0x10
	::RPG::Client::FateRin::CardStateChangeContext* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_F4140148FE9021F9* a1, ::RPG::Client::FateRin::CardStateChangeContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F4140148FE9021F9*, ::RPG::Client::FateRin::CardStateChangeContext*))((::PBYTE)hIl2Cpp + CLASS_1_05C260DCF29BD133__CTOR_OFFSET))(this, a1, a2);
	}
};

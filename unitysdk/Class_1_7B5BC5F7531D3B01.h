#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1304;
class Class_1_5F4D64A4B97E38F9;
class Class_1_C85C4DAB350DD5FC_2;
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define CLASS_1_7B5BC5F7531D3B01_METHOD_1_72AD355B93E892C7_OFFSET UNITYSDK_OFFSET(0x1673C6B0)
#define CLASS_1_7B5BC5F7531D3B01__CTOR_OFFSET UNITYSDK_OFFSET(0x1673C6A0)

inline static constexpr unsigned int Class_1_7B5BC5F7531D3B01_TypeDefinitionIndex = 76200;

class Class_1_7B5BC5F7531D3B01 : public ::System::Object
{
public:
	::Class_1_5F4D64A4B97E38F9* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1304* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1304* a1, ::Class_1_5F4D64A4B97E38F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1304*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* Method_1_72AD355B93E892C7(::Class_1_C85C4DAB350DD5FC_2* a1)
	{
		return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_METHOD_1_72AD355B93E892C7_OFFSET))(this, a1);
	}
};

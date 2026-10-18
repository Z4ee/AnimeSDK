#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1588;
class Class_1_1294FEF8E985635C;
class Class_1_C85C4DAB350DD5FC_2;
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define CLASS_1_7B5BC5F7531D3B01_3_METHOD_1_72AD355B93E892C7_OFFSET UNITYSDK_OFFSET(0x154AFDB0)
#define CLASS_1_7B5BC5F7531D3B01_3__CTOR_OFFSET UNITYSDK_OFFSET(0x154AFDA0)

inline static constexpr unsigned int Class_1_7B5BC5F7531D3B01_3_TypeDefinitionIndex = 81157;

class Class_1_7B5BC5F7531D3B01_3 : public ::System::Object
{
public:
	::Class_1_1294FEF8E985635C* GJALMBBNNOF; // 0x10
	::Class_0_16E4307DCC419505_1588* DCJKFEDHKFF; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1588* a1, ::Class_1_1294FEF8E985635C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1588*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_3__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* Method_1_72AD355B93E892C7(::Class_1_C85C4DAB350DD5FC_2* a1)
	{
		return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_3_METHOD_1_72AD355B93E892C7_OFFSET))(this, a1);
	}
};

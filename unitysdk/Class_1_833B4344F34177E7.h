#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B105BEE67D1C2502;
namespace RPG::Client { class MapNpcDef; }

#define CLASS_1_833B4344F34177E7_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x152E6990)
#define CLASS_1_833B4344F34177E7__CTOR_OFFSET UNITYSDK_OFFSET(0x152E6980)

inline static constexpr unsigned int Class_1_833B4344F34177E7_TypeDefinitionIndex = 60731;

class Class_1_833B4344F34177E7 : public ::System::Object
{
public:
	::Class_2_B105BEE67D1C2502* LKCGAFENIJG; // 0x10
	::RPG::Client::MapNpcDef* CMBIMHDPELH; // 0x18

	::System::Void _ctor(::RPG::Client::MapNpcDef* a1, ::Class_2_B105BEE67D1C2502* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::Class_2_B105BEE67D1C2502*))((::PBYTE)hIl2Cpp + CLASS_1_833B4344F34177E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_833B4344F34177E7_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}
};

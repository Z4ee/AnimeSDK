#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_24E22182AA59B845_CLASS_1_364D3EE06AA8C584_METHOD_1_E6E308A392C9D70D_OFFSET UNITYSDK_OFFSET(0x15896820)
#define CLASS_2_24E22182AA59B845_CLASS_1_364D3EE06AA8C584__CTOR_OFFSET UNITYSDK_OFFSET(0x15896890)

inline static constexpr unsigned int Class_2_24E22182AA59B845_Class_1_364D3EE06AA8C584_TypeDefinitionIndex = 71747;

class Class_2_24E22182AA59B845_Class_1_364D3EE06AA8C584 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::System::Boolean PKLFLANJCDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_CLASS_1_364D3EE06AA8C584__CTOR_OFFSET))(this);
	}

	static ::Class_2_24E22182AA59B845_Class_1_364D3EE06AA8C584* Method_1_E6E308A392C9D70D(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_2_24E22182AA59B845_Class_1_364D3EE06AA8C584*(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_CLASS_1_364D3EE06AA8C584_METHOD_1_E6E308A392C9D70D_OFFSET))(a1, a2);
	}
};

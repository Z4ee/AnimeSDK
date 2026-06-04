#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_421;
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_927E990AD52009A0_METHOD_1_7F979B765D281CF4_OFFSET UNITYSDK_OFFSET(0xA83B8E0)
#define CLASS_1_927E990AD52009A0_METHOD_1_E94DFE0A440AADEF_OFFSET UNITYSDK_OFFSET(0xA83B970)

inline static constexpr unsigned int Class_1_927E990AD52009A0_TypeDefinitionIndex = 68400;

class Class_1_927E990AD52009A0 : public ::System::Object
{
public:
	static ::RPG::GameCore::GameWorld* Method_1_7F979B765D281CF4(::RPG::GameCore::GameWorld* a1, ::Class_0_16E4307DCC419505_421* a2)
	{
		return ((::RPG::GameCore::GameWorld*(*)(::RPG::GameCore::GameWorld*, ::Class_0_16E4307DCC419505_421*))((::PBYTE)hIl2Cpp + CLASS_1_927E990AD52009A0_METHOD_1_7F979B765D281CF4_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_421* Method_1_E94DFE0A440AADEF(::RPG::GameCore::GameWorld* a1)
	{
		return ((::Class_0_16E4307DCC419505_421*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_927E990AD52009A0_METHOD_1_E94DFE0A440AADEF_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleMap; }

#define CLASS_1_89A70EF203D563DC_METHOD_1_CB708181166B980B_OFFSET UNITYSDK_OFFSET(0x17D46B00)
#define CLASS_1_89A70EF203D563DC__CTOR_OFFSET UNITYSDK_OFFSET(0x17D46CE0)

inline static constexpr unsigned int Class_1_89A70EF203D563DC_TypeDefinitionIndex = 63928;

class Class_1_89A70EF203D563DC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89A70EF203D563DC__CTOR_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleMap* Method_1_CB708181166B980B(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89A70EF203D563DC_METHOD_1_CB708181166B980B_OFFSET))(this, a1);
	}
};

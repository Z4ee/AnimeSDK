#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FFE5B8A52EC38E9C_2;
namespace RPG::Client { class ExpeditionBattleRoute; }

#define CLASS_1_65EC9CACFF41765E___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC1600)
#define CLASS_1_65EC9CACFF41765E___C__DISPLAYCLASS12_0__SYNCRECORDBYMAPINFO_B__0_OFFSET UNITYSDK_OFFSET(0x17AC3310)

inline static constexpr unsigned int Class_1_65EC9CACFF41765E___c__DisplayClass12_0_TypeDefinitionIndex = 63997;

class Class_1_65EC9CACFF41765E___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_1_FFE5B8A52EC38E9C_2* routeInfo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EC9CACFF41765E___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SyncRecordByMapInfo_b__0(::RPG::Client::ExpeditionBattleRoute* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionBattleRoute*))((::PBYTE)hIl2Cpp + CLASS_1_65EC9CACFF41765E___C__DISPLAYCLASS12_0__SYNCRECORDBYMAPINFO_B__0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleAreaRow; }

#define CLASS_1_4230F9CA2B3ADD2E_METHOD_1_EBA3FE2E19206D0A_OFFSET UNITYSDK_OFFSET(0xB5F3460)
#define CLASS_1_4230F9CA2B3ADD2E__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F3500)

inline static constexpr unsigned int Class_1_4230F9CA2B3ADD2E_TypeDefinitionIndex = 58918;

class Class_1_4230F9CA2B3ADD2E : public ::System::Object
{
public:
	::System::UInt32 NJIOMOHBILM; // 0x10
	::System::UInt32 LLDCHLHNADA; // 0x14
	::System::UInt32 GKAENDDHNOG; // 0x18
	::System::UInt32 FFLDMJCEMDC; // 0x1C
	::System::UInt32 FIMNPJLNLEE; // 0x20
	::System::UInt32 HNEIIAGADGO; // 0x24
	::System::UInt32 NMBKAIEIAPE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4230F9CA2B3ADD2E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBA3FE2E19206D0A(::RPG::GameCore::BattleAreaRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAreaRow*))((::PBYTE)hIl2Cpp + CLASS_1_4230F9CA2B3ADD2E_METHOD_1_EBA3FE2E19206D0A_OFFSET))(this, a1);
	}
};

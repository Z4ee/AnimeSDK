#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BABB143454D17CA6.h"
#include "unitysdk/System/Object.h"

class Class_1_7E72B772E0973369;
namespace RPG::Client { class ExpeditionBattleTeam; }

#define CLASS_1_F9FBCC956DFCF137_17_METHOD_1_FFCB3E2DEAF6CE16_OFFSET UNITYSDK_OFFSET(0xBF5ADF0)
#define CLASS_1_F9FBCC956DFCF137_17__CTOR_OFFSET UNITYSDK_OFFSET(0xBF5ADE0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_17_TypeDefinitionIndex = 64002;

class Class_1_F9FBCC956DFCF137_17 : public ::System::Object
{
public:
	::Class_1_7E72B772E0973369* OEOGNEPBADO; // 0x10

	::System::Void _ctor(::Class_1_7E72B772E0973369* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E72B772E0973369*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_17__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleTeam* Method_1_FFCB3E2DEAF6CE16(::Struct_2_BABB143454D17CA6 a1)
	{
		return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID, ::Struct_2_BABB143454D17CA6))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_17_METHOD_1_FFCB3E2DEAF6CE16_OFFSET))(this, a1);
	}
};

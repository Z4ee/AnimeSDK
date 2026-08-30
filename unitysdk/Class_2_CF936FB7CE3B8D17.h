#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AIActionType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CF936FB7CE3B8D17_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F80E40)
#define CLASS_2_CF936FB7CE3B8D17_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18F80E80)
#define CLASS_2_CF936FB7CE3B8D17__CTOR_OFFSET UNITYSDK_OFFSET(0x18F80E30)

inline static constexpr unsigned int Class_2_CF936FB7CE3B8D17_TypeDefinitionIndex = 52542;

class Class_2_CF936FB7CE3B8D17 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
	::System::Boolean MEPJIFHMCJF; // 0x28
	::RPG::GameCore::AIActionType BCMKMNHPPPK; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_CF936FB7CE3B8D17__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF936FB7CE3B8D17_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF936FB7CE3B8D17_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};

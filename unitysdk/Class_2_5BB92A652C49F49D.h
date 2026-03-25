#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowWorldShop4ThUpgradeHint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5BB92A652C49F49D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109B1C90)
#define CLASS_2_5BB92A652C49F49D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x109B1CD0)
#define CLASS_2_5BB92A652C49F49D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x109B1E40)
#define CLASS_2_5BB92A652C49F49D_TICK_OFFSET UNITYSDK_OFFSET(0x109B1E90)
#define CLASS_2_5BB92A652C49F49D__CTOR_OFFSET UNITYSDK_OFFSET(0x109B1C80)

inline static constexpr unsigned int Class_2_5BB92A652C49F49D_TypeDefinitionIndex = 43148;

class Class_2_5BB92A652C49F49D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowWorldShop4ThUpgradeHint* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*))((::PBYTE)hIl2Cpp + CLASS_2_5BB92A652C49F49D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BB92A652C49F49D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BB92A652C49F49D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BB92A652C49F49D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5BB92A652C49F49D_TICK_OFFSET))(this, a1);
	}
};

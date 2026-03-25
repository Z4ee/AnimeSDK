#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChessFireWaveProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9B00882C3B1056A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA82B70)
#define CLASS_2_9B00882C3B1056A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA82BB0)
#define CLASS_2_9B00882C3B1056A9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEA82C00)
#define CLASS_2_9B00882C3B1056A9_TICK_OFFSET UNITYSDK_OFFSET(0xEA82C50)
#define CLASS_2_9B00882C3B1056A9__CTOR_OFFSET UNITYSDK_OFFSET(0xEA82B60)

inline static constexpr unsigned int Class_2_9B00882C3B1056A9_TypeDefinitionIndex = 45202;

class Class_2_9B00882C3B1056A9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ChessFireWaveProjectile* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessFireWaveProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessFireWaveProjectile*))((::PBYTE)hIl2Cpp + CLASS_2_9B00882C3B1056A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B00882C3B1056A9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B00882C3B1056A9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B00882C3B1056A9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B00882C3B1056A9_TICK_OFFSET))(this, a1);
	}
};

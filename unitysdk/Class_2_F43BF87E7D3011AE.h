#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyCreateWorld; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F43BF87E7D3011AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6A2800)
#define CLASS_2_F43BF87E7D3011AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6A2540)
#define CLASS_2_F43BF87E7D3011AE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6A27B0)
#define CLASS_2_F43BF87E7D3011AE_TICK_OFFSET UNITYSDK_OFFSET(0xB6A2840)
#define CLASS_2_F43BF87E7D3011AE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6A2530)

inline static constexpr unsigned int Class_2_F43BF87E7D3011AE_TypeDefinitionIndex = 58368;

class Class_2_F43BF87E7D3011AE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MonopolyCreateWorld* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCreateWorld* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCreateWorld*))((::PBYTE)hIl2Cpp + CLASS_2_F43BF87E7D3011AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43BF87E7D3011AE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43BF87E7D3011AE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43BF87E7D3011AE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F43BF87E7D3011AE_TICK_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyCreateWorld; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F43BF87E7D3011AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1B0180)
#define CLASS_2_F43BF87E7D3011AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1AFEC0)
#define CLASS_2_F43BF87E7D3011AE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD1B0130)
#define CLASS_2_F43BF87E7D3011AE_TICK_OFFSET UNITYSDK_OFFSET(0xD1B01C0)
#define CLASS_2_F43BF87E7D3011AE__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AFEB0)

inline static constexpr unsigned int Class_2_F43BF87E7D3011AE_TypeDefinitionIndex = 46959;

class Class_2_F43BF87E7D3011AE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MonopolyCreateWorld* Field_2_1; // 0x20

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

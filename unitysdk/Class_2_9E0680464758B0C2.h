#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBattleFeverTimeScreenFire; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_9E0680464758B0C2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A309E0)
#define CLASS_2_9E0680464758B0C2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A30A20)
#define CLASS_2_9E0680464758B0C2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A30B90)
#define CLASS_2_9E0680464758B0C2_TICK_OFFSET UNITYSDK_OFFSET(0x17A30BE0)
#define CLASS_2_9E0680464758B0C2__CTOR_OFFSET UNITYSDK_OFFSET(0x17A309D0)

inline static constexpr unsigned int Class_2_9E0680464758B0C2_TypeDefinitionIndex = 53092;

class Class_2_9E0680464758B0C2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::ShowBattleFeverTimeScreenFire* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleFeverTimeScreenFire* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleFeverTimeScreenFire*))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2_TICK_OFFSET))(this, a1);
	}
};

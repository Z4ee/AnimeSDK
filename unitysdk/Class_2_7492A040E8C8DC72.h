#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropClosePuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7492A040E8C8DC72_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128D0740)
#define CLASS_2_7492A040E8C8DC72_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128D04D0)
#define CLASS_2_7492A040E8C8DC72_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x128D06F0)
#define CLASS_2_7492A040E8C8DC72_TICK_OFFSET UNITYSDK_OFFSET(0x128D0780)
#define CLASS_2_7492A040E8C8DC72__CTOR_OFFSET UNITYSDK_OFFSET(0x128D04C0)

inline static constexpr unsigned int Class_2_7492A040E8C8DC72_TypeDefinitionIndex = 53773;

class Class_2_7492A040E8C8DC72 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropClosePuzzle* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropClosePuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropClosePuzzle*))((::PBYTE)hIl2Cpp + CLASS_2_7492A040E8C8DC72__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492A040E8C8DC72_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492A040E8C8DC72_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492A040E8C8DC72_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7492A040E8C8DC72_TICK_OFFSET))(this, a1);
	}
};

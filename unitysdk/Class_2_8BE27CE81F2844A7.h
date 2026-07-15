#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowPuzzleHudWolfBro; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8BE27CE81F2844A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14CE1930)
#define CLASS_2_8BE27CE81F2844A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14CE1970)
#define CLASS_2_8BE27CE81F2844A7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14CE1C00)
#define CLASS_2_8BE27CE81F2844A7_TICK_OFFSET UNITYSDK_OFFSET(0x14CE1C50)
#define CLASS_2_8BE27CE81F2844A7__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE1920)

inline static constexpr unsigned int Class_2_8BE27CE81F2844A7_TypeDefinitionIndex = 56053;

class Class_2_8BE27CE81F2844A7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowPuzzleHudWolfBro* Field_2_1; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPuzzleHudWolfBro* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPuzzleHudWolfBro*))((::PBYTE)hIl2Cpp + CLASS_2_8BE27CE81F2844A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BE27CE81F2844A7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BE27CE81F2844A7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BE27CE81F2844A7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8BE27CE81F2844A7_TICK_OFFSET))(this, a1);
	}
};

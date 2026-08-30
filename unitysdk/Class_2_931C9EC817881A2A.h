#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropStartPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_931C9EC817881A2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4CFEE0)
#define CLASS_2_931C9EC817881A2A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4CFBF0)
#define CLASS_2_931C9EC817881A2A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4CFE60)
#define CLASS_2_931C9EC817881A2A_TICK_OFFSET UNITYSDK_OFFSET(0xB4D0000)
#define CLASS_2_931C9EC817881A2A__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CFB60)

inline static constexpr unsigned int Class_2_931C9EC817881A2A_TypeDefinitionIndex = 58507;

class Class_2_931C9EC817881A2A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* EDBPHODBFCP; // 0x18
	::RPG::GameCore::PropComponent* IKHBMOJMEEM; // 0x20
	::RPG::GameCore::PropStartPuzzle* IGHAHBNLIJA; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
	::System::Boolean KBJACNAMHBA; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStartPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStartPuzzle*))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_931C9EC817881A2A_TICK_OFFSET))(this, a1);
	}
};

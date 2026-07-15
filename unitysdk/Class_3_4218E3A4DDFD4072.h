#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_43018DB440EBECE9.h"
#include "unitysdk/Struct_2_263B64D8FC8C9763.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdventureLoopAttackDetect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4218E3A4DDFD4072_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B15C60)
#define CLASS_3_4218E3A4DDFD4072_METHOD_3_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x14B170C0)
#define CLASS_3_4218E3A4DDFD4072_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B173E0)
#define CLASS_3_4218E3A4DDFD4072_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B17690)
#define CLASS_3_4218E3A4DDFD4072_TICK_OFFSET UNITYSDK_OFFSET(0x14B15F20)
#define CLASS_3_4218E3A4DDFD4072__CTOR_OFFSET UNITYSDK_OFFSET(0x14B15900)

inline static constexpr unsigned int Class_3_4218E3A4DDFD4072_TypeDefinitionIndex = 55330;

class Class_3_4218E3A4DDFD4072 : public ::Class_2_43018DB440EBECE9
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_0; // 0x40
	::RPG::GameCore::AdventureLoopAttackDetect* Field_3_1; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_3_2; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_3; // 0x58
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_4; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_5; // 0x68
	::System::Collections::Generic::List_1<::Struct_2_263B64D8FC8C9763>* Field_3_6; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_7; // 0x78
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_8; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_9; // 0x88
	::RPG::GameCore::TaskContext* Field_3_10; // 0x90
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_11; // 0x98
	::RPG::GameCore::GameEntity* Field_3_12; // 0xA0
	::System::Single Field_3_13; // 0xA8
	::System::Single Field_3_14; // 0xAC
	::System::Single Field_3_15; // 0xB0
	::System::Single Field_3_16; // 0xB4

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureLoopAttackDetect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureLoopAttackDetect*))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4218E3A4DDFD4072_METHOD_3_F7BA13C72A6B3F58_OFFSET))(this);
	}
};

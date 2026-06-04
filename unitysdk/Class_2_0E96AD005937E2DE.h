#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/Struct_2_E7006A023E2F4936.h"

class Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A;
class Class_2_B992A3C719B13727;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SetSkillTargetFormationByPos; }
namespace RPG::GameCore { class TargetFormationPosConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0E96AD005937E2DE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8B5680)
#define CLASS_2_0E96AD005937E2DE_METHOD_2_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0xA8B8370)
#define CLASS_2_0E96AD005937E2DE_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xA8B72A0)
#define CLASS_2_0E96AD005937E2DE_METHOD_2_9C71264C758F571B_OFFSET UNITYSDK_OFFSET(0xA8B73C0)
#define CLASS_2_0E96AD005937E2DE_METHOD_2_A0065D036DCDF2FA_OFFSET UNITYSDK_OFFSET(0xA8B7B70)
#define CLASS_2_0E96AD005937E2DE_METHOD_2_A9B4C83BBCBD7285_OFFSET UNITYSDK_OFFSET(0xA8B81A0)
#define CLASS_2_0E96AD005937E2DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8B5890)
#define CLASS_2_0E96AD005937E2DE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA8B8B70)
#define CLASS_2_0E96AD005937E2DE_TICK_OFFSET UNITYSDK_OFFSET(0xA8B5830)
#define CLASS_2_0E96AD005937E2DE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8B55A0)

inline static constexpr unsigned int Class_2_0E96AD005937E2DE_TypeDefinitionIndex = 52677;

class Class_2_0E96AD005937E2DE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_B992A3C719B13727* Field_2_0; // 0x18
	::Struct_2_E7006A023E2F4936 Field_2_1; // 0x20
	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>* Field_2_2; // 0x48
	::RPG::PoolList_1<::Struct_2_0347AE3FB0036865>* Field_2_3; // 0x50
	::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* Field_2_4; // 0x58
	::RPG::GameCore::SetSkillTargetFormationByPos* Field_2_5; // 0x60
	::System::Collections::Generic::LinkedListNode_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* Field_2_6; // 0x68
	::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>* Field_2_7; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* Field_2_8; // 0x78
	::RPG::GameCore::TaskContext* Field_2_9; // 0x80
	::RPG::GameCore::GameEntity* Field_2_10; // 0x88
	::System::Boolean Field_2_11; // 0x90

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_332E8DA02BCCBD12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE_METHOD_2_332E8DA02BCCBD12_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C71264C758F571B(::RPG::GameCore::GameEntityList*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*&))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE_METHOD_2_9C71264C758F571B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0065D036DCDF2FA(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE_METHOD_2_A0065D036DCDF2FA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A9B4C83BBCBD7285(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE_METHOD_2_A9B4C83BBCBD7285_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E96AD005937E2DE_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}
};

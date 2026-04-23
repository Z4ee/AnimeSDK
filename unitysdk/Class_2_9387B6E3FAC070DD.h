#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/Struct_2_CBD6D7DB1AA269CF.h"

class Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A;
class Class_2_35DC892F466147D4;
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

#define CLASS_2_9387B6E3FAC070DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B3E2C0)
#define CLASS_2_9387B6E3FAC070DD_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x12B3FDD0)
#define CLASS_2_9387B6E3FAC070DD_METHOD_2_684096009AF9FA5C_OFFSET UNITYSDK_OFFSET(0x12B40A00)
#define CLASS_2_9387B6E3FAC070DD_METHOD_2_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x12B40B70)
#define CLASS_2_9387B6E3FAC070DD_METHOD_2_DE52A0B32F251F68_OFFSET UNITYSDK_OFFSET(0x12B406D0)
#define CLASS_2_9387B6E3FAC070DD_METHOD_2_EE02094EA9F1E247_OFFSET UNITYSDK_OFFSET(0x12B3FF60)
#define CLASS_2_9387B6E3FAC070DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12B3E570)
#define CLASS_2_9387B6E3FAC070DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12B41260)
#define CLASS_2_9387B6E3FAC070DD_TICK_OFFSET UNITYSDK_OFFSET(0x12B3E510)
#define CLASS_2_9387B6E3FAC070DD__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3E1E0)

inline static constexpr unsigned int Class_2_9387B6E3FAC070DD_TypeDefinitionIndex = 52003;

class Class_2_9387B6E3FAC070DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::LinkedListNode_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* Field_2_10; // 0x18
	::RPG::PoolList_1<::Struct_2_0347AE3FB0036865>* Field_2_6; // 0x20
	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_2; // 0x30
	::Struct_2_CBD6D7DB1AA269CF Field_2_9; // 0x38
	::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>* Field_2_4; // 0x60
	::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* Field_2_5; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* Field_2_11; // 0x70
	::Class_2_35DC892F466147D4* Field_2_8; // 0x78
	::RPG::GameCore::SetSkillTargetFormationByPos* Field_2_1; // 0x80
	::RPG::GameCore::GameEntity* Field_2_7; // 0x88
	::System::Boolean Field_2_0; // 0x90

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD_METHOD_2_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE02094EA9F1E247(::RPG::GameCore::GameEntityList*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*&))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD_METHOD_2_EE02094EA9F1E247_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE52A0B32F251F68(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD_METHOD_2_DE52A0B32F251F68_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_684096009AF9FA5C(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD_METHOD_2_684096009AF9FA5C_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9387B6E3FAC070DD_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}
};

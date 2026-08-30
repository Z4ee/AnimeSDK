#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/Struct_2_E7006A023E2F4936.h"

class Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A;
class Class_2_70550F2EE8A92C1F;
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

#define CLASS_2_188534F009ABDD1B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CB0C50)
#define CLASS_2_188534F009ABDD1B_METHOD_2_2D01737268D36D3D_OFFSET UNITYSDK_OFFSET(0x15CB2EE0)
#define CLASS_2_188534F009ABDD1B_METHOD_2_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0x15CB3400)
#define CLASS_2_188534F009ABDD1B_METHOD_2_5EB3529E328231BC_OFFSET UNITYSDK_OFFSET(0x15CB2850)
#define CLASS_2_188534F009ABDD1B_METHOD_2_A9B4C83BBCBD7285_OFFSET UNITYSDK_OFFSET(0x15CB3240)
#define CLASS_2_188534F009ABDD1B_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x15CB2730)
#define CLASS_2_188534F009ABDD1B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CB0E50)
#define CLASS_2_188534F009ABDD1B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CB3B30)
#define CLASS_2_188534F009ABDD1B_TICK_OFFSET UNITYSDK_OFFSET(0x15CB0DF0)
#define CLASS_2_188534F009ABDD1B__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB0B60)

inline static constexpr unsigned int Class_2_188534F009ABDD1B_TypeDefinitionIndex = 56606;

class Class_2_188534F009ABDD1B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>* GBMAIEBEKGM; // 0x18
	::RPG::GameCore::GameEntity* DPGHBJPAAEN; // 0x20
	::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>* BPOPEEOIBEG; // 0x28
	::Class_2_70550F2EE8A92C1F* JBDCABFMHNC; // 0x30
	::Struct_2_E7006A023E2F4936 GEOGOILLHKO; // 0x38
	::System::Collections::Generic::LinkedListNode_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* JBJLKAEGGDG; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* LGBOLNEKFML; // 0x68
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x70
	::RPG::PoolList_1<::Struct_2_0347AE3FB0036865>* FJHJNKHLPNP; // 0x78
	::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* LMLLIFFMOMC; // 0x80
	::RPG::GameCore::SetSkillTargetFormationByPos* OFKGLJOAMLD; // 0x88
	::System::Boolean OEEOPDMIBNC; // 0x90

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_332E8DA02BCCBD12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_332E8DA02BCCBD12_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EB3529E328231BC(::RPG::GameCore::GameEntityList*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*&))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_5EB3529E328231BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D01737268D36D3D(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_2D01737268D36D3D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A9B4C83BBCBD7285(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_A9B4C83BBCBD7285_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetSortByElationPriority; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7EB2431E98D5143A_COMPARE_OFFSET UNITYSDK_OFFSET(0xB72F700)
#define CLASS_2_7EB2431E98D5143A_METHOD_2_8AA31AFF8421133A_OFFSET UNITYSDK_OFFSET(0xB72FAF0)
#define CLASS_2_7EB2431E98D5143A_METHOD_2_F54190C563A0FB8C_OFFSET UNITYSDK_OFFSET(0xB72F9C0)
#define CLASS_2_7EB2431E98D5143A_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB72FBD0)
#define CLASS_2_7EB2431E98D5143A__CTOR_OFFSET UNITYSDK_OFFSET(0xB72F6C0)

inline static constexpr unsigned int Class_2_7EB2431E98D5143A_TypeDefinitionIndex = 59314;

class Class_2_7EB2431E98D5143A : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByElationPriority*>
{
public:
	::RPG::GameCore::JsonEnum* AALGBNBLDFG; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* HNGJMPDONDF; // 0x20
	::System::Int32 OOHLBFDJMBJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TargetSortByElationPriority* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + CLASS_2_7EB2431E98D5143A__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB2431E98D5143A_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_F54190C563A0FB8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB2431E98D5143A_METHOD_2_F54190C563A0FB8C_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AA31AFF8421133A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_7EB2431E98D5143A_METHOD_2_8AA31AFF8421133A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB2431E98D5143A_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

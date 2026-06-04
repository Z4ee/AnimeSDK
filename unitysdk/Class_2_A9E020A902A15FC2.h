#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByAITag; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A9E020A902A15FC2_COMPARE_OFFSET UNITYSDK_OFFSET(0xDE5A380)
#define CLASS_2_A9E020A902A15FC2_METHOD_2_294EBA93487CBB9F_OFFSET UNITYSDK_OFFSET(0xDE59FF0)
#define CLASS_2_A9E020A902A15FC2_METHOD_2_DA7F32EBD3A97D4F_OFFSET UNITYSDK_OFFSET(0xDE5A490)
#define CLASS_2_A9E020A902A15FC2_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xDE5A070)
#define CLASS_2_A9E020A902A15FC2__CTOR_OFFSET UNITYSDK_OFFSET(0xDE59FE0)

inline static constexpr unsigned int Class_2_A9E020A902A15FC2_TypeDefinitionIndex = 55305;

class Class_2_A9E020A902A15FC2 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByAITag*>
{
public:
	::RPG::GameCore::FixPoint Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortByAITag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + CLASS_2_A9E020A902A15FC2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_294EBA93487CBB9F(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_A9E020A902A15FC2_METHOD_2_294EBA93487CBB9F_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A9E020A902A15FC2_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A9E020A902A15FC2_COMPARE_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_DA7F32EBD3A97D4F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A9E020A902A15FC2_METHOD_2_DA7F32EBD3A97D4F_OFFSET))(this, a1);
	}
};

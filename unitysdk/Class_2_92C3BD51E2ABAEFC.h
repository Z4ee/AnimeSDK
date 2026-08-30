#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByAITag; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_92C3BD51E2ABAEFC_COMPARE_OFFSET UNITYSDK_OFFSET(0x105BFF20)
#define CLASS_2_92C3BD51E2ABAEFC_METHOD_2_294EBA93487CBB9F_OFFSET UNITYSDK_OFFSET(0x105BFB80)
#define CLASS_2_92C3BD51E2ABAEFC_METHOD_2_DA7F32EBD3A97D4F_OFFSET UNITYSDK_OFFSET(0x105C0030)
#define CLASS_2_92C3BD51E2ABAEFC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x105BFC00)
#define CLASS_2_92C3BD51E2ABAEFC__CTOR_OFFSET UNITYSDK_OFFSET(0x105BFB70)

inline static constexpr unsigned int Class_2_92C3BD51E2ABAEFC_TypeDefinitionIndex = 59326;

class Class_2_92C3BD51E2ABAEFC : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByAITag*>
{
public:
	::RPG::GameCore::FixPoint AMEGANPAIMK; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortByAITag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + CLASS_2_92C3BD51E2ABAEFC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_294EBA93487CBB9F(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_92C3BD51E2ABAEFC_METHOD_2_294EBA93487CBB9F_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_92C3BD51E2ABAEFC_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_92C3BD51E2ABAEFC_COMPARE_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_DA7F32EBD3A97D4F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_92C3BD51E2ABAEFC_METHOD_2_DA7F32EBD3A97D4F_OFFSET))(this, a1);
	}
};

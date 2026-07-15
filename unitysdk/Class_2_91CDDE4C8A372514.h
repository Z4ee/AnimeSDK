#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_91CDDE4C8A372514_COMPARE_OFFSET UNITYSDK_OFFSET(0x17546C10)
#define CLASS_2_91CDDE4C8A372514_METHOD_2_BDCB80B02EC7EFF2_OFFSET UNITYSDK_OFFSET(0x17546D80)
#define CLASS_2_91CDDE4C8A372514_METHOD_2_E32BDF5C9351F70A_OFFSET UNITYSDK_OFFSET(0x17546F40)
#define CLASS_2_91CDDE4C8A372514_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x17546F90)
#define CLASS_2_91CDDE4C8A372514__CTOR_OFFSET UNITYSDK_OFFSET(0x17546BF0)

inline static constexpr unsigned int Class_2_91CDDE4C8A372514_TypeDefinitionIndex = 56528;

class Class_2_91CDDE4C8A372514 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByProperty* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + CLASS_2_91CDDE4C8A372514__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_91CDDE4C8A372514_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BDCB80B02EC7EFF2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_91CDDE4C8A372514_METHOD_2_BDCB80B02EC7EFF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E32BDF5C9351F70A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_91CDDE4C8A372514_METHOD_2_E32BDF5C9351F70A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_91CDDE4C8A372514_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

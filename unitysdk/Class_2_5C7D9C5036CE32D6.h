#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByFormation; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5C7D9C5036CE32D6_COMPARE_OFFSET UNITYSDK_OFFSET(0x129B0F30)
#define CLASS_2_5C7D9C5036CE32D6_METHOD_2_E32BDF5C9351F70A_OFFSET UNITYSDK_OFFSET(0x129B1210)
#define CLASS_2_5C7D9C5036CE32D6_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x129B1260)
#define CLASS_2_5C7D9C5036CE32D6__CTOR_OFFSET UNITYSDK_OFFSET(0x129B0F10)

inline static constexpr unsigned int Class_2_5C7D9C5036CE32D6_TypeDefinitionIndex = 54568;

class Class_2_5C7D9C5036CE32D6 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByFormation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByFormation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + CLASS_2_5C7D9C5036CE32D6__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5C7D9C5036CE32D6_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E32BDF5C9351F70A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_5C7D9C5036CE32D6_METHOD_2_E32BDF5C9351F70A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_5C7D9C5036CE32D6_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

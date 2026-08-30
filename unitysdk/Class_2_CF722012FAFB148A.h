#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAliveSourceEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CF722012FAFB148A_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x19518960)
#define CLASS_2_CF722012FAFB148A__CTOR_OFFSET UNITYSDK_OFFSET(0x19518940)

inline static constexpr unsigned int Class_2_CF722012FAFB148A_TypeDefinitionIndex = 59298;

class Class_2_CF722012FAFB148A : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFetchAliveSourceEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAliveSourceEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CF722012FAFB148A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF722012FAFB148A_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

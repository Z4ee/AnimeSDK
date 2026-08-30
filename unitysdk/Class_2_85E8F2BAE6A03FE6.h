#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapCharacterChangeSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_85E8F2BAE6A03FE6_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x17CAE3F0)
#define CLASS_2_85E8F2BAE6A03FE6__CTOR_OFFSET UNITYSDK_OFFSET(0x17CAE3D0)

inline static constexpr unsigned int Class_2_85E8F2BAE6A03FE6_TypeDefinitionIndex = 59330;

class Class_2_85E8F2BAE6A03FE6 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapCharacterChangeSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapCharacterChangeSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + CLASS_2_85E8F2BAE6A03FE6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_85E8F2BAE6A03FE6_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

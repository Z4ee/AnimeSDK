#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapGridOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_08B0B20EDB5F5CB9_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16D8AF70)
#define CLASS_2_08B0B20EDB5F5CB9__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8AF50)

inline static constexpr unsigned int Class_2_08B0B20EDB5F5CB9_TypeDefinitionIndex = 51343;

class Class_2_08B0B20EDB5F5CB9 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapGridOwner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapGridOwner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapGridOwner*))((::PBYTE)hIl2Cpp + CLASS_2_08B0B20EDB5F5CB9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_08B0B20EDB5F5CB9_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

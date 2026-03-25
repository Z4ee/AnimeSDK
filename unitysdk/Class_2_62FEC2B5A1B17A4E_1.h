#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDamageDefender; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_62FEC2B5A1B17A4E_1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x109F5460)
#define CLASS_2_62FEC2B5A1B17A4E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x109F5440)

inline static constexpr unsigned int Class_2_62FEC2B5A1B17A4E_1_TypeDefinitionIndex = 47781;

class Class_2_62FEC2B5A1B17A4E_1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapDamageDefender*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapDamageDefender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + CLASS_2_62FEC2B5A1B17A4E_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_62FEC2B5A1B17A4E_1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

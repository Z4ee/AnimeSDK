#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFilter; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_942CEE1E64A6EE38_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A78ADE0)
#define CLASS_2_942CEE1E64A6EE38__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78ADC0)

inline static constexpr unsigned int Class_2_942CEE1E64A6EE38_TypeDefinitionIndex = 59345;

class Class_2_942CEE1E64A6EE38 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFilter*>
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + CLASS_2_942CEE1E64A6EE38__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_942CEE1E64A6EE38_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

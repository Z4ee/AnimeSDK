#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDynamicEntityParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_03DFF81F683AB2BA_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x116DC1E0)
#define CLASS_2_03DFF81F683AB2BA__CTOR_OFFSET UNITYSDK_OFFSET(0x116DC100)

inline static constexpr unsigned int Class_2_03DFF81F683AB2BA_TypeDefinitionIndex = 47815;

class Class_2_03DFF81F683AB2BA : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapDynamicEntityParam*>
{
public:
	::RPG::GameCore::StringHash Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetMapDynamicEntityParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + CLASS_2_03DFF81F683AB2BA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_03DFF81F683AB2BA_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

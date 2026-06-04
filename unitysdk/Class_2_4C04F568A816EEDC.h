#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDynamicEntityParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4C04F568A816EEDC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x140122D0)
#define CLASS_2_4C04F568A816EEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x140121F0)

inline static constexpr unsigned int Class_2_4C04F568A816EEDC_TypeDefinitionIndex = 55281;

class Class_2_4C04F568A816EEDC : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapDynamicEntityParam*>
{
public:
	::RPG::GameCore::StringHash Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetMapDynamicEntityParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + CLASS_2_4C04F568A816EEDC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_4C04F568A816EEDC_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

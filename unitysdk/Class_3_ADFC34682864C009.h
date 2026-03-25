#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearFormationFaceDeltaRecord; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ADFC34682864C009_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA6EF90)
#define CLASS_3_ADFC34682864C009__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6EF60)

inline static constexpr unsigned int Class_3_ADFC34682864C009_TypeDefinitionIndex = 43957;

class Class_3_ADFC34682864C009 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearFormationFaceDeltaRecord*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearFormationFaceDeltaRecord* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearFormationFaceDeltaRecord*))((::PBYTE)hIl2Cpp + CLASS_3_ADFC34682864C009__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ADFC34682864C009_ONTASKBEGIN_OFFSET))(this);
	}
};

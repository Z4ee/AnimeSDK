#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SwordTrainingSetDynamicValueByAllyRank; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_71942FDDDA31276C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186FCEC0)
#define CLASS_3_71942FDDDA31276C__CTOR_OFFSET UNITYSDK_OFFSET(0x186FCDE0)

inline static constexpr unsigned int Class_3_71942FDDDA31276C_TypeDefinitionIndex = 53177;

class Class_3_71942FDDDA31276C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank*))((::PBYTE)hIl2Cpp + CLASS_3_71942FDDDA31276C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71942FDDDA31276C_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class RogueTournCollectionInfo; }
namespace RPG::GameCore { class ByIsRogueTournCollectionDisplayingCollection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EDAF2148B79C0566_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15388960)
#define CLASS_3_EDAF2148B79C0566_METHOD_3_D9869B46982E29C2_OFFSET UNITYSDK_OFFSET(0x15388D80)
#define CLASS_3_EDAF2148B79C0566__CTOR_OFFSET UNITYSDK_OFFSET(0x15388930)

inline static constexpr unsigned int Class_3_EDAF2148B79C0566_TypeDefinitionIndex = 58136;

class Class_3_EDAF2148B79C0566 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + CLASS_3_EDAF2148B79C0566__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDAF2148B79C0566_EVALUATE_OFFSET))(this);
	}

	static ::RPG::Client::RogueTournCollectionInfo* Method_3_D9869B46982E29C2()
	{
		return ((::RPG::Client::RogueTournCollectionInfo*(*)())((::PBYTE)hIl2Cpp + CLASS_3_EDAF2148B79C0566_METHOD_3_D9869B46982E29C2_OFFSET))();
	}
};

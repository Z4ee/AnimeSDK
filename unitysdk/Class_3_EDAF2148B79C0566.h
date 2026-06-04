#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class RogueTournCollectionInfo; }
namespace RPG::GameCore { class ByIsRogueTournCollectionDisplayingCollection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EDAF2148B79C0566_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13694250)
#define CLASS_3_EDAF2148B79C0566_METHOD_3_61BB99FC3B9DAAD6_OFFSET UNITYSDK_OFFSET(0x136944F0)
#define CLASS_3_EDAF2148B79C0566__CTOR_OFFSET UNITYSDK_OFFSET(0x13694220)

inline static constexpr unsigned int Class_3_EDAF2148B79C0566_TypeDefinitionIndex = 54182;

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

	static ::RPG::Client::RogueTournCollectionInfo* Method_3_61BB99FC3B9DAAD6()
	{
		return ((::RPG::Client::RogueTournCollectionInfo*(*)())((::PBYTE)hIl2Cpp + CLASS_3_EDAF2148B79C0566_METHOD_3_61BB99FC3B9DAAD6_OFFSET))();
	}
};

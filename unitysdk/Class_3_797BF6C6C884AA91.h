#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ScalePropByCollectionProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_797BF6C6C884AA91_METHOD_3_47E3E5CC24595F74_OFFSET UNITYSDK_OFFSET(0x166EFC20)
#define CLASS_3_797BF6C6C884AA91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166EF990)
#define CLASS_3_797BF6C6C884AA91__CTOR_OFFSET UNITYSDK_OFFSET(0x166EF960)

inline static constexpr unsigned int Class_3_797BF6C6C884AA91_TypeDefinitionIndex = 55881;

class Class_3_797BF6C6C884AA91 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ScalePropByCollectionProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScalePropByCollectionProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScalePropByCollectionProgress*))((::PBYTE)hIl2Cpp + CLASS_3_797BF6C6C884AA91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797BF6C6C884AA91_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::Client::QuestData* Method_3_47E3E5CC24595F74()
	{
		return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797BF6C6C884AA91_METHOD_3_47E3E5CC24595F74_OFFSET))(this);
	}
};

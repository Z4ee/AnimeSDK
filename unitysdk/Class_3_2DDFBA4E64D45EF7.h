#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class OpenRaid; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2DDFBA4E64D45EF7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158A2710)
#define CLASS_3_2DDFBA4E64D45EF7__CTOR_OFFSET UNITYSDK_OFFSET(0x158A2660)

inline static constexpr unsigned int Class_3_2DDFBA4E64D45EF7_TypeDefinitionIndex = 55660;

class Class_3_2DDFBA4E64D45EF7 : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenRaid*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenRaid* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenRaid*))((::PBYTE)hIl2Cpp + CLASS_3_2DDFBA4E64D45EF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DDFBA4E64D45EF7_ONTASKBEGIN_OFFSET))(this);
	}
};

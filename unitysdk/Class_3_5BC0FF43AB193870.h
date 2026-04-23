#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InfiniteWaveSortByActivity340; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5BC0FF43AB193870_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117B9690)
#define CLASS_3_5BC0FF43AB193870__CTOR_OFFSET UNITYSDK_OFFSET(0x117B9660)

inline static constexpr unsigned int Class_3_5BC0FF43AB193870_TypeDefinitionIndex = 50823;

class Class_3_5BC0FF43AB193870 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InfiniteWaveSortByActivity340*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveSortByActivity340* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveSortByActivity340*))((::PBYTE)hIl2Cpp + CLASS_3_5BC0FF43AB193870__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BC0FF43AB193870_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_4850E14C21779202;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F4ADFD0E4F1734B_6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF93FC0)
#define CLASS_3_1F4ADFD0E4F1734B_6__CTOR_OFFSET UNITYSDK_OFFSET(0xBF93EE0)

inline static constexpr unsigned int Class_3_1F4ADFD0E4F1734B_6_TypeDefinitionIndex = 55654;

class Class_3_1F4ADFD0E4F1734B_6 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4850E14C21779202*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4850E14C21779202* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4850E14C21779202*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_6_ONTASKBEGIN_OFFSET))(this);
	}
};

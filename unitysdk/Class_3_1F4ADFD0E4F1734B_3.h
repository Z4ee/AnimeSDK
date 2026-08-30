#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_EA399F9F90E8B690;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F4ADFD0E4F1734B_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA592F0)
#define CLASS_3_1F4ADFD0E4F1734B_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA59210)

inline static constexpr unsigned int Class_3_1F4ADFD0E4F1734B_3_TypeDefinitionIndex = 55264;

class Class_3_1F4ADFD0E4F1734B_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EA399F9F90E8B690*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EA399F9F90E8B690* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EA399F9F90E8B690*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_3_ONTASKBEGIN_OFFSET))(this);
	}
};

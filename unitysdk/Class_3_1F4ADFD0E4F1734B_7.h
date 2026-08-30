#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_44D35BAFA44CC880;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F4ADFD0E4F1734B_7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFA82A90)
#define CLASS_3_1F4ADFD0E4F1734B_7__CTOR_OFFSET UNITYSDK_OFFSET(0xFA829B0)

inline static constexpr unsigned int Class_3_1F4ADFD0E4F1734B_7_TypeDefinitionIndex = 55912;

class Class_3_1F4ADFD0E4F1734B_7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_44D35BAFA44CC880*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_44D35BAFA44CC880* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_44D35BAFA44CC880*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_7_ONTASKBEGIN_OFFSET))(this);
	}
};

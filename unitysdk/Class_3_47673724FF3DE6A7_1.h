#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D512E916C716041_7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA96B0C0)
#define CLASS_3_47673724FF3DE6A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA96B090)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_1_TypeDefinitionIndex = 54776;

class Class_3_47673724FF3DE6A7_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D512E916C716041_7*>
{
public:
	::Class_3_2D512E916C716041_7* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_7*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1_ONTASKBEGIN_OFFSET))(this);
	}
};

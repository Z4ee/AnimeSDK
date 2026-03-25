#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D512E916C716041_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE4D6F0)
#define CLASS_3_47673724FF3DE6A7__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4D6C0)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_TypeDefinitionIndex = 47318;

class Class_3_47673724FF3DE6A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D512E916C716041_3*>
{
public:
	::Class_3_2D512E916C716041_3* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_3*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_ONTASKBEGIN_OFFSET))(this);
	}
};

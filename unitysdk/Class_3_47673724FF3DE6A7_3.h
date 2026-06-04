#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D512E916C716041_9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8F1C70)
#define CLASS_3_47673724FF3DE6A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA8F1C40)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_3_TypeDefinitionIndex = 54780;

class Class_3_47673724FF3DE6A7_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D512E916C716041_9*>
{
public:
	::Class_3_2D512E916C716041_9* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_9*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_3_ONTASKBEGIN_OFFSET))(this);
	}
};

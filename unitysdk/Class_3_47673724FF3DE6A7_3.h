#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D512E916C716041_8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7A3CB0)
#define CLASS_3_47673724FF3DE6A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA7A3C80)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_3_TypeDefinitionIndex = 54054;

class Class_3_47673724FF3DE6A7_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D512E916C716041_8*>
{
public:
	::Class_3_2D512E916C716041_8* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_8*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_3_ONTASKBEGIN_OFFSET))(this);
	}
};

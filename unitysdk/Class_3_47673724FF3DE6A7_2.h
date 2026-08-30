#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_12;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16486DB0)
#define CLASS_3_47673724FF3DE6A7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16486D80)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_2_TypeDefinitionIndex = 58778;

class Class_3_47673724FF3DE6A7_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_12*>
{
public:
	::Class_3_7AA0663B46C8586F_12* IGHAHBNLIJA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_12* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_12*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_2_ONTASKBEGIN_OFFSET))(this);
	}
};

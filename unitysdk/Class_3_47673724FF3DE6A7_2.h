#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_11;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A7B900)
#define CLASS_3_47673724FF3DE6A7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7B8D0)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_2_TypeDefinitionIndex = 56003;

class Class_3_47673724FF3DE6A7_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_11*>
{
public:
	::Class_3_7AA0663B46C8586F_11* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_11* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_11*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_2_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_14;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC762E0)
#define CLASS_3_47673724FF3DE6A7_4__CTOR_OFFSET UNITYSDK_OFFSET(0xBC762B0)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_4_TypeDefinitionIndex = 58782;

class Class_3_47673724FF3DE6A7_4 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_14*>
{
public:
	::Class_3_7AA0663B46C8586F_14* IGHAHBNLIJA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_14* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_14*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_4_ONTASKBEGIN_OFFSET))(this);
	}
};

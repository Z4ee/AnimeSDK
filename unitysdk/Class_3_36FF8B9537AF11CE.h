#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_827373C1CEDFE355;
namespace RPG::GameCore { class RandomSelectDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36FF8B9537AF11CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114139F0)
#define CLASS_3_36FF8B9537AF11CE__CTOR_OFFSET UNITYSDK_OFFSET(0x114137E0)

inline static constexpr unsigned int Class_3_36FF8B9537AF11CE_TypeDefinitionIndex = 44247;

class Class_3_36FF8B9537AF11CE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RandomSelectDynamicValue*>
{
public:
	::Class_1_827373C1CEDFE355* Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_36FF8B9537AF11CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36FF8B9537AF11CE_ONTASKBEGIN_OFFSET))(this);
	}
};

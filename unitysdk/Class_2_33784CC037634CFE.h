#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierReattachEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_33784CC037634CFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB613EA0)
#define CLASS_2_33784CC037634CFE_METHOD_2_305515D9BCC0D223_OFFSET UNITYSDK_OFFSET(0xB614260)
#define CLASS_2_33784CC037634CFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB613EE0)
#define CLASS_2_33784CC037634CFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB614330)
#define CLASS_2_33784CC037634CFE_TICK_OFFSET UNITYSDK_OFFSET(0xB614380)
#define CLASS_2_33784CC037634CFE__CTOR_OFFSET UNITYSDK_OFFSET(0xB613E90)

inline static constexpr unsigned int Class_2_33784CC037634CFE_TypeDefinitionIndex = 55185;

class Class_2_33784CC037634CFE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ModifierReattachEffect* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifierReattachEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifierReattachEffect*))((::PBYTE)hIl2Cpp + CLASS_2_33784CC037634CFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33784CC037634CFE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33784CC037634CFE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33784CC037634CFE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_33784CC037634CFE_TICK_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_2_305515D9BCC0D223(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_33784CC037634CFE_METHOD_2_305515D9BCC0D223_OFFSET))(this, a1);
	}
};

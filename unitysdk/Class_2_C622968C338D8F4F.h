#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvModifierListenPhotograph; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C622968C338D8F4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF42BC70)
#define CLASS_2_C622968C338D8F4F_METHOD_2_7908E0A3A062534E_OFFSET UNITYSDK_OFFSET(0xF42BF00)
#define CLASS_2_C622968C338D8F4F_METHOD_2_A626FD3D950B8B9D_OFFSET UNITYSDK_OFFSET(0xF42C070)
#define CLASS_2_C622968C338D8F4F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF42BAA0)
#define CLASS_2_C622968C338D8F4F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF42BBA0)
#define CLASS_2_C622968C338D8F4F_TICK_OFFSET UNITYSDK_OFFSET(0xF42BEA0)
#define CLASS_2_C622968C338D8F4F__CTOR_OFFSET UNITYSDK_OFFSET(0xF42B9A0)

inline static constexpr unsigned int Class_2_C622968C338D8F4F_TypeDefinitionIndex = 52673;

class Class_2_C622968C338D8F4F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* DDHDKBNKPAM; // 0x18
	::Class_3_07C3C4D2990C49EE* CIAELKANOIB; // 0x20
	::RPG::GameCore::AdvModifierListenPhotograph* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::RPG::GameCore::GameEntity* MOBJADOMNGJ; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvModifierListenPhotograph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvModifierListenPhotograph*))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7908E0A3A062534E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_METHOD_2_7908E0A3A062534E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A626FD3D950B8B9D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_METHOD_2_A626FD3D950B8B9D_OFFSET))(this, a1);
	}
};

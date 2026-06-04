#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class MonoWolfBroCustomData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroPuzzleGameDataListener; }

#define CLASS_2_6C83AC618F18B309_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1439D7C0)
#define CLASS_2_6C83AC618F18B309_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x1439D980)
#define CLASS_2_6C83AC618F18B309_METHOD_2_91F134D80943E100_OFFSET UNITYSDK_OFFSET(0x1439DA00)
#define CLASS_2_6C83AC618F18B309_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1439D3E0)
#define CLASS_2_6C83AC618F18B309_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1439D540)
#define CLASS_2_6C83AC618F18B309_TICK_OFFSET UNITYSDK_OFFSET(0x1439D860)
#define CLASS_2_6C83AC618F18B309__CTOR_OFFSET UNITYSDK_OFFSET(0x1439D300)

inline static constexpr unsigned int Class_2_6C83AC618F18B309_TypeDefinitionIndex = 55095;

class Class_2_6C83AC618F18B309 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::MonoWolfBroCustomData* Field_2_0; // 0x18
	::RPG::GameCore::WolfBroPuzzleGameDataListener* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroPuzzleGameDataListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroPuzzleGameDataListener*))((::PBYTE)hIl2Cpp + CLASS_2_6C83AC618F18B309__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C83AC618F18B309_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C83AC618F18B309_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C83AC618F18B309_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6C83AC618F18B309_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_91F134D80943E100(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6C83AC618F18B309_METHOD_2_91F134D80943E100_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C83AC618F18B309_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}
};

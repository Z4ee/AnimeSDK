#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class MonoWolfBroCustomData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroPuzzleGameDataListener; }

#define CLASS_2_6C83AC618F18B309_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1630AE60)
#define CLASS_2_6C83AC618F18B309_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x1630B100)
#define CLASS_2_6C83AC618F18B309_METHOD_2_91F134D80943E100_OFFSET UNITYSDK_OFFSET(0x1630B180)
#define CLASS_2_6C83AC618F18B309_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1630A8C0)
#define CLASS_2_6C83AC618F18B309_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1630AB00)
#define CLASS_2_6C83AC618F18B309_TICK_OFFSET UNITYSDK_OFFSET(0x1630AFE0)
#define CLASS_2_6C83AC618F18B309__CTOR_OFFSET UNITYSDK_OFFSET(0x1630A7E0)

inline static constexpr unsigned int Class_2_6C83AC618F18B309_TypeDefinitionIndex = 59110;

class Class_2_6C83AC618F18B309 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::MonoWolfBroCustomData* HIJOAMLICNE; // 0x18
	::Class_3_07C3C4D2990C49EE* FOHLNOOAIFK; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::Class_3_07C3C4D2990C49EE* GOOKJDJGMGD; // 0x30
	::RPG::GameCore::WolfBroPuzzleGameDataListener* IGHAHBNLIJA; // 0x38
	::System::Boolean CPLCHJNPGJK; // 0x40

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

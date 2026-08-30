#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LegacyConflictStateBinder; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8E501A13ECB1C2F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153F8CD0)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x153F91C0)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x153F9040)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x153F8E80)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x153F93A0)
#define CLASS_2_8E501A13ECB1C2F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153F8D80)
#define CLASS_2_8E501A13ECB1C2F4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x153F8D30)
#define CLASS_2_8E501A13ECB1C2F4_TICK_OFFSET UNITYSDK_OFFSET(0x153F9340)
#define CLASS_2_8E501A13ECB1C2F4__CTOR_OFFSET UNITYSDK_OFFSET(0x153F8CC0)

inline static constexpr unsigned int Class_2_8E501A13ECB1C2F4_TypeDefinitionIndex = 53205;

class Class_2_8E501A13ECB1C2F4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LegacyConflictStateBinder* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LegacyConflictStateBinder* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LegacyConflictStateBinder*))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_E52C357E96F7A058(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_E52C357E96F7A058_OFFSET))(this, a1);
	}
};

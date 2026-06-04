#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LegacyConflictStateBinder; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8E501A13ECB1C2F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13638490)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x13638A00)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_3CAD92CFB876DBF6_1_OFFSET UNITYSDK_OFFSET(0x13638890)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x13638780)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x13638640)
#define CLASS_2_8E501A13ECB1C2F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13638540)
#define CLASS_2_8E501A13ECB1C2F4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x136384F0)
#define CLASS_2_8E501A13ECB1C2F4_TICK_OFFSET UNITYSDK_OFFSET(0x136389A0)
#define CLASS_2_8E501A13ECB1C2F4__CTOR_OFFSET UNITYSDK_OFFSET(0x13638480)

inline static constexpr unsigned int Class_2_8E501A13ECB1C2F4_TypeDefinitionIndex = 49487;

class Class_2_8E501A13ECB1C2F4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LegacyConflictStateBinder* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28

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

	::System::Void Method_2_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_8C6E66D260CC37AD_OFFSET))(this, a1);
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

	::System::Void Method_2_3CAD92CFB876DBF6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_3CAD92CFB876DBF6_1_OFFSET))(this);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}
};

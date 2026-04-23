#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LegacyConflictStateBinder; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8E501A13ECB1C2F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9834060)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x9834450)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x98345B0)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_72A8068D2AF9B485_OFFSET UNITYSDK_OFFSET(0x9834350)
#define CLASS_2_8E501A13ECB1C2F4_METHOD_2_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x9834210)
#define CLASS_2_8E501A13ECB1C2F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9834110)
#define CLASS_2_8E501A13ECB1C2F4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x98340C0)
#define CLASS_2_8E501A13ECB1C2F4_TICK_OFFSET UNITYSDK_OFFSET(0x9834550)
#define CLASS_2_8E501A13ECB1C2F4__CTOR_OFFSET UNITYSDK_OFFSET(0x9834050)

inline static constexpr unsigned int Class_2_8E501A13ECB1C2F4_TypeDefinitionIndex = 48821;

class Class_2_8E501A13ECB1C2F4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LegacyConflictStateBinder* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_0; // 0x28

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

	::System::Void Method_2_72A8068D2AF9B485()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_72A8068D2AF9B485_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_8E501A13ECB1C2F4_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};

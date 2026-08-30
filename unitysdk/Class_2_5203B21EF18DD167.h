#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class EntityOnEraFlippedListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5203B21EF18DD167_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15814000)
#define CLASS_2_5203B21EF18DD167_METHOD_2_20A698DC0CFFEC8A_1_OFFSET UNITYSDK_OFFSET(0x15814830)
#define CLASS_2_5203B21EF18DD167_METHOD_2_20A698DC0CFFEC8A_OFFSET UNITYSDK_OFFSET(0x15814400)
#define CLASS_2_5203B21EF18DD167_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15813A90)
#define CLASS_2_5203B21EF18DD167_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15813D60)
#define CLASS_2_5203B21EF18DD167_TICK_OFFSET UNITYSDK_OFFSET(0x15814C60)
#define CLASS_2_5203B21EF18DD167__CTOR_OFFSET UNITYSDK_OFFSET(0x158138C0)

inline static constexpr unsigned int Class_2_5203B21EF18DD167_TypeDefinitionIndex = 53037;

class Class_2_5203B21EF18DD167 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* NPOIKFJCHJL; // 0x18
	::Class_3_07C3C4D2990C49EE* FPNIMFDENKJ; // 0x20
	::Class_3_07C3C4D2990C49EE* KFMEEBGHGMF; // 0x28
	::RPG::GameCore::EntityOnEraFlippedListener* IGHAHBNLIJA; // 0x30
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
	::Class_3_07C3C4D2990C49EE* KPMOLCKCBHO; // 0x40
	::System::Boolean HPPIMDBIDKA; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EntityOnEraFlippedListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EntityOnEraFlippedListener*))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_20A698DC0CFFEC8A(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_METHOD_2_20A698DC0CFFEC8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_20A698DC0CFFEC8A_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_METHOD_2_20A698DC0CFFEC8A_1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_TICK_OFFSET))(this, a1);
	}
};

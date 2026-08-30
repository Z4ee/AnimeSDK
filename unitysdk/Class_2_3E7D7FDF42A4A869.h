#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_3_07C3C4D2990C49EE;
class Class_3_4FEC308312B5461F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3E7D7FDF42A4A869_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB70CDD0)
#define CLASS_2_3E7D7FDF42A4A869_METHOD_2_7EA54838B888644E_OFFSET UNITYSDK_OFFSET(0xB70D700)
#define CLASS_2_3E7D7FDF42A4A869_METHOD_2_BCEDF88FD731AB55_OFFSET UNITYSDK_OFFSET(0xB70D6A0)
#define CLASS_2_3E7D7FDF42A4A869_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB70CF30)
#define CLASS_2_3E7D7FDF42A4A869_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB70D5A0)
#define CLASS_2_3E7D7FDF42A4A869_TICK_OFFSET UNITYSDK_OFFSET(0xB70D5F0)
#define CLASS_2_3E7D7FDF42A4A869__CTOR_OFFSET UNITYSDK_OFFSET(0xB70CC80)

inline static constexpr unsigned int Class_2_3E7D7FDF42A4A869_TypeDefinitionIndex = 54124;

class Class_2_3E7D7FDF42A4A869 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* BCGLDJBEBPK; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_4FEC308312B5461F* OFKGLJOAMLD; // 0x28
	::Class_1_0AD6129525BF5F86* BLDLELNJDML; // 0x30
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4FEC308312B5461F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4FEC308312B5461F*))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BCEDF88FD731AB55(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_METHOD_2_BCEDF88FD731AB55_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EA54838B888644E(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_METHOD_2_7EA54838B888644E_OFFSET))(this, a1);
	}
};

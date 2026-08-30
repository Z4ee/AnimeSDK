#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class EndPropInteract; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C0384F08613C4596_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15224920)
#define CLASS_2_C0384F08613C4596_METHOD_2_2CB8AB76FB774170_OFFSET UNITYSDK_OFFSET(0x15224C60)
#define CLASS_2_C0384F08613C4596_METHOD_2_3CAD92CFB876DBF6_1_OFFSET UNITYSDK_OFFSET(0x152251F0)
#define CLASS_2_C0384F08613C4596_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x152250F0)
#define CLASS_2_C0384F08613C4596_METHOD_2_7C798DF2D7BB7252_OFFSET UNITYSDK_OFFSET(0x15224DE0)
#define CLASS_2_C0384F08613C4596_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x15224AF0)
#define CLASS_2_C0384F08613C4596_METHOD_2_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0x152252F0)
#define CLASS_2_C0384F08613C4596_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15224E20)
#define CLASS_2_C0384F08613C4596_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152250A0)
#define CLASS_2_C0384F08613C4596_TICK_OFFSET UNITYSDK_OFFSET(0x152249F0)
#define CLASS_2_C0384F08613C4596__CTOR_OFFSET UNITYSDK_OFFSET(0x15224860)

inline static constexpr unsigned int Class_2_C0384F08613C4596_TypeDefinitionIndex = 58268;

class Class_2_C0384F08613C4596 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::EndPropInteract* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::LevelGraph* DCOPELFHOLO; // 0x20
	::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x38
	::System::Boolean KAICIINDFBF; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndPropInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndPropInteract*))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CB8AB76FB774170(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_METHOD_2_2CB8AB76FB774170_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::TaskConfig* Method_2_7C798DF2D7BB7252()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_METHOD_2_7C798DF2D7BB7252_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_METHOD_2_3CAD92CFB876DBF6_1_OFFSET))(this);
	}

	::System::Void Method_2_EF343326A0C7462C(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_C0384F08613C4596_METHOD_2_EF343326A0C7462C_OFFSET))(this, a1);
	}
};

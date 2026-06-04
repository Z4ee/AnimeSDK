#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class GridFightShowGuideHintWithText; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E4058CAD487BEAB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139C5300)
#define CLASS_2_E4058CAD487BEAB2_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x139C5940)
#define CLASS_2_E4058CAD487BEAB2_METHOD_2_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0x139C54E0)
#define CLASS_2_E4058CAD487BEAB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139C53A0)
#define CLASS_2_E4058CAD487BEAB2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139C5760)
#define CLASS_2_E4058CAD487BEAB2_TICK_OFFSET UNITYSDK_OFFSET(0x139C57C0)
#define CLASS_2_E4058CAD487BEAB2__CTOR_OFFSET UNITYSDK_OFFSET(0x139C52F0)

inline static constexpr unsigned int Class_2_E4058CAD487BEAB2_TypeDefinitionIndex = 50037;

class Class_2_E4058CAD487BEAB2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GridFightShowGuideHintWithText* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_F3391C70DC37088D* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowGuideHintWithText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowGuideHintWithText*))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_METHOD_2_33B1098CBCE7AEF5_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4058CAD487BEAB2_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}
};

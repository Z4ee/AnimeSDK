#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_4;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowGuideDetailDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1A0820588D0058BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17321BB0)
#define CLASS_2_1A0820588D0058BE_METHOD_2_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x17321C40)
#define CLASS_2_1A0820588D0058BE_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x173224D0)
#define CLASS_2_1A0820588D0058BE_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x17322660)
#define CLASS_2_1A0820588D0058BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17321BF0)
#define CLASS_2_1A0820588D0058BE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x173223B0)
#define CLASS_2_1A0820588D0058BE_TICK_OFFSET UNITYSDK_OFFSET(0x17322400)
#define CLASS_2_1A0820588D0058BE__CTOR_OFFSET UNITYSDK_OFFSET(0x17321BA0)
#define CLASS_2_1A0820588D0058BE___SHOWGUIDEDETAILDIALOG_B__5_0_OFFSET UNITYSDK_OFFSET(0x173226B0)

inline static constexpr unsigned int Class_2_1A0820588D0058BE_TypeDefinitionIndex = 56025;

class Class_2_1A0820588D0058BE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::RPG::GameCore::ShowGuideDetailDialog* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideDetailDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideDetailDialog*))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE_METHOD_2_1283EC0876EAAACF_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void __ShowGuideDetailDialog_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE___SHOWGUIDEDETAILDIALOG_B__5_0_OFFSET))(this);
	}
};

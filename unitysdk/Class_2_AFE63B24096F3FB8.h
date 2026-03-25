#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RoguePropOpenPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AFE63B24096F3FB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11056AC0)
#define CLASS_2_AFE63B24096F3FB8_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x11056F10)
#define CLASS_2_AFE63B24096F3FB8_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x11056E50)
#define CLASS_2_AFE63B24096F3FB8_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x11056B80)
#define CLASS_2_AFE63B24096F3FB8_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11056FF0)
#define CLASS_2_AFE63B24096F3FB8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x110570A0)
#define CLASS_2_AFE63B24096F3FB8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11056B30)
#define CLASS_2_AFE63B24096F3FB8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11056DA0)
#define CLASS_2_AFE63B24096F3FB8_TICK_OFFSET UNITYSDK_OFFSET(0x11056DF0)
#define CLASS_2_AFE63B24096F3FB8__CTOR_OFFSET UNITYSDK_OFFSET(0x11056A30)
#define CLASS_2_AFE63B24096F3FB8___SHOWUI_B__5_0_OFFSET UNITYSDK_OFFSET(0x110570F0)

inline static constexpr unsigned int Class_2_AFE63B24096F3FB8_TypeDefinitionIndex = 47172;

class Class_2_AFE63B24096F3FB8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x20
	::RPG::GameCore::RoguePropOpenPage* Field_2_0; // 0x28
	::RPG::Client::LuaUIController* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RoguePropOpenPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RoguePropOpenPage*))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __ShowUI_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE63B24096F3FB8___SHOWUI_B__5_0_OFFSET))(this);
	}
};

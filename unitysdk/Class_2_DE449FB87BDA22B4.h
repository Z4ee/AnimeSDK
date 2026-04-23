#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamLeaderRunning; }

#define CLASS_2_DE449FB87BDA22B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE637B10)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_32F9C58B690E51E5_OFFSET UNITYSDK_OFFSET(0xE638130)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_5EB6B43A59A0A89B_OFFSET UNITYSDK_OFFSET(0xE637EF0)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_77A72C81AB95B330_OFFSET UNITYSDK_OFFSET(0xE638350)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE6385D0)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE638590)
#define CLASS_2_DE449FB87BDA22B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE637C30)
#define CLASS_2_DE449FB87BDA22B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE637D20)
#define CLASS_2_DE449FB87BDA22B4_TICK_OFFSET UNITYSDK_OFFSET(0xE637E70)
#define CLASS_2_DE449FB87BDA22B4__CTOR_OFFSET UNITYSDK_OFFSET(0xE637A80)

inline static constexpr unsigned int Class_2_DE449FB87BDA22B4_TypeDefinitionIndex = 49183;

class Class_2_DE449FB87BDA22B4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x20
	::RPG::GameCore::TeamLeaderRunning* Field_2_1; // 0x28
	::System::Boolean Field_2_5; // 0x30
	::System::Boolean Field_2_2; // 0x31
	::System::Single Field_2_3; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeamLeaderRunning* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeamLeaderRunning*))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_32F9C58B690E51E5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_METHOD_2_32F9C58B690E51E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EB6B43A59A0A89B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_METHOD_2_5EB6B43A59A0A89B_OFFSET))(this, a1);
	}

	::System::Void Method_2_77A72C81AB95B330(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_METHOD_2_77A72C81AB95B330_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};

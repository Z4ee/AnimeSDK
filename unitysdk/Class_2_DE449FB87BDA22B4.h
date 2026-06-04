#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamLeaderRunning; }

#define CLASS_2_DE449FB87BDA22B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB51B560)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_32F9C58B690E51E5_OFFSET UNITYSDK_OFFSET(0xB51BBC0)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_5EB6B43A59A0A89B_OFFSET UNITYSDK_OFFSET(0xB51B970)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_7519F151EAC666F9_OFFSET UNITYSDK_OFFSET(0xB51BDE0)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB51C060)
#define CLASS_2_DE449FB87BDA22B4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB51C020)
#define CLASS_2_DE449FB87BDA22B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB51B690)
#define CLASS_2_DE449FB87BDA22B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB51B790)
#define CLASS_2_DE449FB87BDA22B4_TICK_OFFSET UNITYSDK_OFFSET(0xB51B8F0)
#define CLASS_2_DE449FB87BDA22B4__CTOR_OFFSET UNITYSDK_OFFSET(0xB51B4D0)

inline static constexpr unsigned int Class_2_DE449FB87BDA22B4_TypeDefinitionIndex = 49850;

class Class_2_DE449FB87BDA22B4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TeamLeaderRunning* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x34
	::System::Boolean Field_2_5; // 0x35

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

	::System::Void Method_2_7519F151EAC666F9(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_DE449FB87BDA22B4_METHOD_2_7519F151EAC666F9_OFFSET))(this, a1);
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

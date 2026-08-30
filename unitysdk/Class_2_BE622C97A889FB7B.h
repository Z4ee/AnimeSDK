#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_BE622C97A889FB7B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BE52E0)
#define CLASS_2_BE622C97A889FB7B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x19BE62B0)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x19BE5DB0)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x19BE5570)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_98BACA2FF165A70D_OFFSET UNITYSDK_OFFSET(0x19BE61D0)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19BE5B80)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_E004C1AF69B0D7B4_OFFSET UNITYSDK_OFFSET(0x19BE5FC0)
#define CLASS_2_BE622C97A889FB7B_ONSKIP_OFFSET UNITYSDK_OFFSET(0x19BE5C70)
#define CLASS_2_BE622C97A889FB7B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19BE54E0)
#define CLASS_2_BE622C97A889FB7B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19BE5BC0)
#define CLASS_2_BE622C97A889FB7B_TICK_OFFSET UNITYSDK_OFFSET(0x19BE5C10)
#define CLASS_2_BE622C97A889FB7B__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE5170)
#define CLASS_2_BE622C97A889FB7B___SHOWUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x19BE62C0)

inline static constexpr unsigned int Class_2_BE622C97A889FB7B_TypeDefinitionIndex = 58856;

class Class_2_BE622C97A889FB7B : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* NKOODGOCHHI; // 0x0
	// static const ::System::String* CDMMOBINDKJ; // 0x0
	// static const ::System::String* CGNDEOCKKCP; // 0x0
	// static const ::System::String* OLILKDDCBHD; // 0x0
	// static const ::System::String* IHOGADJKNII; // 0x0
	// static const ::System::String* OCBKJJBGKKG; // 0x0
	::Class_3_07C3C4D2990C49EE* CKMKMCAOLOG; // 0x18
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_3_07C3C4D2990C49EE* BKCCFPHPIHM; // 0x30
	::Class_3_07C3C4D2990C49EE* GMMCBEFIKHL; // 0x38
	::RPG::GameCore::ShowUI* OFKGLJOAMLD; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_98BACA2FF165A70D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_98BACA2FF165A70D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::RPG::Client::LuaUIController* Method_2_E004C1AF69B0D7B4()
	{
		return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_E004C1AF69B0D7B4_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void __ShowUI_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B___SHOWUI_B__6_0_OFFSET))(this);
	}
};

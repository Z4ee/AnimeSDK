#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_BE622C97A889FB7B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185D3DD0)
#define CLASS_2_BE622C97A889FB7B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x185D4DC0)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x185D48C0)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x185D4060)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_98BACA2FF165A70D_OFFSET UNITYSDK_OFFSET(0x185D4CE0)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x185D4680)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_E004C1AF69B0D7B4_OFFSET UNITYSDK_OFFSET(0x185D4AD0)
#define CLASS_2_BE622C97A889FB7B_ONSKIP_OFFSET UNITYSDK_OFFSET(0x185D4770)
#define CLASS_2_BE622C97A889FB7B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x185D3FD0)
#define CLASS_2_BE622C97A889FB7B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x185D46C0)
#define CLASS_2_BE622C97A889FB7B_TICK_OFFSET UNITYSDK_OFFSET(0x185D4710)
#define CLASS_2_BE622C97A889FB7B__CTOR_OFFSET UNITYSDK_OFFSET(0x185D3C60)
#define CLASS_2_BE622C97A889FB7B___SHOWUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x185D4DD0)

inline static constexpr unsigned int Class_2_BE622C97A889FB7B_TypeDefinitionIndex = 56081;

class Class_2_BE622C97A889FB7B : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::RPG::GameCore::TaskContext* Field_2_6; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_7; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_8; // 0x28
	::RPG::Client::LuaUIController* Field_2_9; // 0x30
	::RPG::GameCore::ShowUI* Field_2_10; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_11; // 0x40

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

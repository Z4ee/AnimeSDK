#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_BE622C97A889FB7B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9787030)
#define CLASS_2_BE622C97A889FB7B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x9787F30)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x9787980)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x9787180)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9787750)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_DBDFEC4F5CFD28A9_OFFSET UNITYSDK_OFFSET(0x9787E70)
#define CLASS_2_BE622C97A889FB7B_METHOD_2_DE3FCCED54BB837F_OFFSET UNITYSDK_OFFSET(0x9787B90)
#define CLASS_2_BE622C97A889FB7B_ONSKIP_OFFSET UNITYSDK_OFFSET(0x9787840)
#define CLASS_2_BE622C97A889FB7B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97870F0)
#define CLASS_2_BE622C97A889FB7B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9787790)
#define CLASS_2_BE622C97A889FB7B_TICK_OFFSET UNITYSDK_OFFSET(0x97877E0)
#define CLASS_2_BE622C97A889FB7B__CTOR_OFFSET UNITYSDK_OFFSET(0x9786EC0)
#define CLASS_2_BE622C97A889FB7B___SHOWUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x9787F40)

inline static constexpr unsigned int Class_2_BE622C97A889FB7B_TypeDefinitionIndex = 54124;

class Class_2_BE622C97A889FB7B : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::RPG::Client::LuaUIController* Field_2_5; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x30
	::RPG::GameCore::ShowUI* Field_2_0; // 0x38
	::RPG::GameCore::TaskContext* Field_2_1; // 0x40

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

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DBDFEC4F5CFD28A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_DBDFEC4F5CFD28A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::RPG::Client::LuaUIController* Method_2_DE3FCCED54BB837F()
	{
		return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE622C97A889FB7B_METHOD_2_DE3FCCED54BB837F_OFFSET))(this);
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

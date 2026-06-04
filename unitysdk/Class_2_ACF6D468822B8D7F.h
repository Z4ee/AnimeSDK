#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class DronesPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_ACF6D468822B8D7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1435F960)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_464F9487BF0D77F8_1_OFFSET UNITYSDK_OFFSET(0x1435FC40)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x1435FA60)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x1435FEB0)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_D2E56E6447D54237_OFFSET UNITYSDK_OFFSET(0x14360030)
#define CLASS_2_ACF6D468822B8D7F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1435F5A0)
#define CLASS_2_ACF6D468822B8D7F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1435F7B0)
#define CLASS_2_ACF6D468822B8D7F_TICK_OFFSET UNITYSDK_OFFSET(0x143602C0)
#define CLASS_2_ACF6D468822B8D7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1435F360)

inline static constexpr unsigned int Class_2_ACF6D468822B8D7F_TypeDefinitionIndex = 54289;

class Class_2_ACF6D468822B8D7F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::DronesPuzzleEventListener* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::RPG::GameCore::TaskContext* Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x50
	::System::Boolean Field_2_8; // 0x51
	::System::Boolean Field_2_9; // 0x52
	::System::Boolean Field_2_10; // 0x53

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DronesPuzzleEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DronesPuzzleEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_464F9487BF0D77F8_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_464F9487BF0D77F8_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2E56E6447D54237(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_D2E56E6447D54237_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_TICK_OFFSET))(this, a1);
	}
};

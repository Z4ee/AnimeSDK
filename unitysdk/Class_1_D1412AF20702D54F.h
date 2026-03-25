#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionToType.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionTriggerType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_1_198C3C5F8B64ECE7;
class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_D1412AF20702D54F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BEEE40)
#define CLASS_1_D1412AF20702D54F_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x8BEF200)
#define CLASS_1_D1412AF20702D54F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8BEF1E0)
#define CLASS_1_D1412AF20702D54F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8BEF210)
#define CLASS_1_D1412AF20702D54F_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x8BEF020)
#define CLASS_1_D1412AF20702D54F_METHOD_1_58281F8DD6185AEB_OFFSET UNITYSDK_OFFSET(0x8BEF1C0)
#define CLASS_1_D1412AF20702D54F_METHOD_1_84B1598345C45AF1_OFFSET UNITYSDK_OFFSET(0x8BEEF90)
#define CLASS_1_D1412AF20702D54F_METHOD_1_CFE8F7AD72A13225_OFFSET UNITYSDK_OFFSET(0x8BEEEB0)
#define CLASS_1_D1412AF20702D54F_METHOD_1_D8E3D6C72BC9AE7A_OFFSET UNITYSDK_OFFSET(0x8BEF1A0)
#define CLASS_1_D1412AF20702D54F_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x8BEED60)
#define CLASS_1_D1412AF20702D54F__CTOR_OFFSET UNITYSDK_OFFSET(0x8BEECD0)

inline static constexpr unsigned int Class_1_D1412AF20702D54F_TypeDefinitionIndex = 42226;

class Class_1_D1412AF20702D54F : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::RPG::GameCore::StateTreeTransitionConfig* Field_1_2; // 0x18
	::Class_1_198C3C5F8B64ECE7* Field_1_1; // 0x20
	::RPG::GameCore::TaskContext* Field_1_3; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_1_4; // 0x30
	::System::Single Field_1_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::StateTreeTransitionConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_198C3C5F8B64ECE7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeTransitionConfig*, ::RPG::GameCore::TaskContext*, ::Class_1_198C3C5F8B64ECE7*))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_CFE8F7AD72A13225(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_METHOD_1_CFE8F7AD72A13225_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_84B1598345C45AF1(::RPG::GameCore::TaskState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_METHOD_1_84B1598345C45AF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::RPG::GameCore::StateTreeTransitionTriggerType Method_1_D8E3D6C72BC9AE7A()
	{
		return ((::RPG::GameCore::StateTreeTransitionTriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_METHOD_1_D8E3D6C72BC9AE7A_OFFSET))(this);
	}

	::RPG::GameCore::StateTreeTransitionToType Method_1_58281F8DD6185AEB()
	{
		return ((::RPG::GameCore::StateTreeTransitionToType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_METHOD_1_58281F8DD6185AEB_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::Class_1_198C3C5F8B64ECE7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_198C3C5F8B64ECE7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1412AF20702D54F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};

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

#define CLASS_1_D1412AF20702D54F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE02FE0)
#define CLASS_1_D1412AF20702D54F_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xBE033F0)
#define CLASS_1_D1412AF20702D54F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xBE033D0)
#define CLASS_1_D1412AF20702D54F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xBE03400)
#define CLASS_1_D1412AF20702D54F_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xBE03220)
#define CLASS_1_D1412AF20702D54F_METHOD_1_58281F8DD6185AEB_OFFSET UNITYSDK_OFFSET(0xBE033B0)
#define CLASS_1_D1412AF20702D54F_METHOD_1_84B1598345C45AF1_OFFSET UNITYSDK_OFFSET(0xBE03190)
#define CLASS_1_D1412AF20702D54F_METHOD_1_CFE8F7AD72A13225_OFFSET UNITYSDK_OFFSET(0xBE030B0)
#define CLASS_1_D1412AF20702D54F_METHOD_1_D8E3D6C72BC9AE7A_OFFSET UNITYSDK_OFFSET(0xBE03390)
#define CLASS_1_D1412AF20702D54F_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xBE02F00)
#define CLASS_1_D1412AF20702D54F__CTOR_OFFSET UNITYSDK_OFFSET(0xBE02E70)

inline static constexpr unsigned int Class_1_D1412AF20702D54F_TypeDefinitionIndex = 53851;

class Class_1_D1412AF20702D54F : public ::System::Object
{
public:
	::RPG::GameCore::StateTreeTransitionConfig* OFKGLJOAMLD; // 0x10
	::Class_1_5F51D4049EA87B7B* OLPNJHPNJNG; // 0x18
	::System::String* FEMHOGGGPIG; // 0x20
	::Class_1_198C3C5F8B64ECE7* DLNIGFGLPLJ; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::System::Single NDHHEFKHPLE; // 0x38

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

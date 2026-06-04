#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/BoomRobotGameplayState.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class BoomRobotGameplayControllerInitialize; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_98A51A566C201D47_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13544FA0)
#define CLASS_2_98A51A566C201D47_METHOD_2_01ACC9B513C5E7F7_OFFSET UNITYSDK_OFFSET(0x13548B10)
#define CLASS_2_98A51A566C201D47_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x135474A0)
#define CLASS_2_98A51A566C201D47_METHOD_2_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x13546520)
#define CLASS_2_98A51A566C201D47_METHOD_2_1FB0ACAE24BA9984_1_OFFSET UNITYSDK_OFFSET(0x13548100)
#define CLASS_2_98A51A566C201D47_METHOD_2_1FB0ACAE24BA9984_OFFSET UNITYSDK_OFFSET(0x13546AE0)
#define CLASS_2_98A51A566C201D47_METHOD_2_2BEB3887295B939A_OFFSET UNITYSDK_OFFSET(0x13546F10)
#define CLASS_2_98A51A566C201D47_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x13548810)
#define CLASS_2_98A51A566C201D47_METHOD_2_524425424314D634_OFFSET UNITYSDK_OFFSET(0x13547600)
#define CLASS_2_98A51A566C201D47_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x13546320)
#define CLASS_2_98A51A566C201D47_METHOD_2_638B7168F3D35983_OFFSET UNITYSDK_OFFSET(0x135470B0)
#define CLASS_2_98A51A566C201D47_METHOD_2_6EECE8924BBFC43C_1_OFFSET UNITYSDK_OFFSET(0x135478C0)
#define CLASS_2_98A51A566C201D47_METHOD_2_6EECE8924BBFC43C_2_OFFSET UNITYSDK_OFFSET(0x13547CE0)
#define CLASS_2_98A51A566C201D47_METHOD_2_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x135483A0)
#define CLASS_2_98A51A566C201D47_METHOD_2_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x135454A0)
#define CLASS_2_98A51A566C201D47_METHOD_2_87318FF00D6BC7EB_1_OFFSET UNITYSDK_OFFSET(0x13544FF0)
#define CLASS_2_98A51A566C201D47_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x13545F40)
#define CLASS_2_98A51A566C201D47_METHOD_2_98CF22BA36B43C83_OFFSET UNITYSDK_OFFSET(0x135482C0)
#define CLASS_2_98A51A566C201D47_METHOD_2_9B06BEA621946036_OFFSET UNITYSDK_OFFSET(0x135481B0)
#define CLASS_2_98A51A566C201D47_METHOD_2_B03BD337C608E98D_OFFSET UNITYSDK_OFFSET(0x13546DD0)
#define CLASS_2_98A51A566C201D47_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13548A60)
#define CLASS_2_98A51A566C201D47_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x13548AC0)
#define CLASS_2_98A51A566C201D47_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x135487C0)
#define CLASS_2_98A51A566C201D47_METHOD_2_CBE03CAF8EC51024_OFFSET UNITYSDK_OFFSET(0x13547540)
#define CLASS_2_98A51A566C201D47_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x13546900)
#define CLASS_2_98A51A566C201D47_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x13546BA0)
#define CLASS_2_98A51A566C201D47_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x13546E60)
#define CLASS_2_98A51A566C201D47_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13545430)
#define CLASS_2_98A51A566C201D47_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x135464E0)
#define CLASS_2_98A51A566C201D47_TICK_OFFSET UNITYSDK_OFFSET(0x135453D0)
#define CLASS_2_98A51A566C201D47__CTOR_OFFSET UNITYSDK_OFFSET(0x13544E50)

inline static constexpr unsigned int Class_2_98A51A566C201D47_TypeDefinitionIndex = 49140;

class Class_2_98A51A566C201D47 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	::RPG::Client::AdventurePhase* Field_2_13; // 0x18
	::RPG::GameCore::BoomRobotGameplayControllerInitialize* Field_2_14; // 0x20
	::RPG::GameCore::GameEntity* Field_2_15; // 0x28
	::RPG::Client::RuntimeGroupManager* Field_2_16; // 0x30
	::RPG::GameCore::TaskContext* Field_2_17; // 0x38
	::RPG::GameCore::GameEntity* Field_2_18; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_19; // 0x48
	::RPG::GameCore::GameEntity* Field_2_20; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_21; // 0x58
	::RPG::GameCore::GameEntity* Field_2_22; // 0x60
	::System::Int32 Field_2_23; // 0x68
	::System::Boolean Field_2_24; // 0x6C
	::System::Boolean Field_2_25; // 0x6D
	::System::Int32 Field_2_26; // 0x70
	::RPG::GameCore::BoomRobotGameplayState Field_2_27; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayControllerInitialize* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayControllerInitialize*))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_87318FF00D6BC7EB_1_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_2_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_1FB0ACAE24BA9984(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_1FB0ACAE24BA9984_OFFSET))(this, a1);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_B03BD337C608E98D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_B03BD337C608E98D_OFFSET))(this);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_2BEB3887295B939A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_2BEB3887295B939A_OFFSET))(this);
	}

	::System::Void Method_2_638B7168F3D35983()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_638B7168F3D35983_OFFSET))(this);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_2_CBE03CAF8EC51024(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_CBE03CAF8EC51024_OFFSET))(this, a1);
	}

	::System::Void Method_2_524425424314D634(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_524425424314D634_OFFSET))(this, a1);
	}

	::System::Void Method_2_1FB0ACAE24BA9984_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_1FB0ACAE24BA9984_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9B06BEA621946036(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_9B06BEA621946036_OFFSET))(this, a1);
	}

	::System::Void Method_2_98CF22BA36B43C83(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_98CF22BA36B43C83_OFFSET))(this, a1);
	}

	::System::Void Method_2_6EECE8924BBFC43C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_6EECE8924BBFC43C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_6EECE8924BBFC43C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_6EECE8924BBFC43C_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_6EECE8924BBFC43C_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_6EECE8924BBFC43C_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_01ACC9B513C5E7F7(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_98A51A566C201D47_METHOD_2_01ACC9B513C5E7F7_OFFSET))(this, a1);
	}
};

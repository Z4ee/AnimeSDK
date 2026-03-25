#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/BoomRobotGameplayState.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class BoomRobotGameplayControllerInitialize; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8E14E6B1CACBC152_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105850B0)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_1F47CAD86E555F5A_OFFSET UNITYSDK_OFFSET(0x10586D40)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x10585540)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x10586320)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x10586F10)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_524425424314D634_OFFSET UNITYSDK_OFFSET(0x10587440)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_57D21531A2DC98EE_OFFSET UNITYSDK_OFFSET(0x10588920)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_5A124CAF1E48B74F_1_OFFSET UNITYSDK_OFFSET(0x10585100)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x10585DB0)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x105872F0)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_6EECE8924BBFC43C_1_OFFSET UNITYSDK_OFFSET(0x10587690)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_6EECE8924BBFC43C_2_OFFSET UNITYSDK_OFFSET(0x10587AB0)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x10588190)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_726354DCE97130D8_OFFSET UNITYSDK_OFFSET(0x10586C00)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_98CF22BA36B43C83_OFFSET UNITYSDK_OFFSET(0x105880B0)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_9C8E91C267CA702D_OFFSET UNITYSDK_OFFSET(0x10587390)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x10586730)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x10586120)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10588870)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x105888D0)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x105885B0)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x10588600)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_EBC83762ED0D0E57_1_OFFSET UNITYSDK_OFFSET(0x10587ED0)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_EBC83762ED0D0E57_OFFSET UNITYSDK_OFFSET(0x10586910)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_EEF4B7F98C2E56E0_OFFSET UNITYSDK_OFFSET(0x10587F80)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x10586C90)
#define CLASS_2_8E14E6B1CACBC152_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x105869D0)
#define CLASS_2_8E14E6B1CACBC152_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105854D0)
#define CLASS_2_8E14E6B1CACBC152_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105862E0)
#define CLASS_2_8E14E6B1CACBC152_TICK_OFFSET UNITYSDK_OFFSET(0x10585470)
#define CLASS_2_8E14E6B1CACBC152__CTOR_OFFSET UNITYSDK_OFFSET(0x10584F70)

inline static constexpr unsigned int Class_2_8E14E6B1CACBC152_TypeDefinitionIndex = 42552;

class Class_2_8E14E6B1CACBC152 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_15; // 0x0
	// static const ::System::String* Field_2_16; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	// static const ::System::String* Field_2_21; // 0x0
	// static const ::System::String* Field_2_22; // 0x0
	// static const ::System::String* Field_2_23; // 0x0
	// static const ::System::String* Field_2_24; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_10; // 0x18
	::RPG::GameCore::GameEntity* Field_2_12; // 0x20
	::RPG::GameCore::GameEntity* Field_2_7; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_9; // 0x30
	::RPG::Client::RuntimeGroupManager* Field_2_4; // 0x38
	::RPG::GameCore::GameEntity* Field_2_6; // 0x40
	::RPG::GameCore::TaskContext* Field_2_1; // 0x48
	::RPG::GameCore::GameEntity* Field_2_5; // 0x50
	::RPG::GameCore::BoomRobotGameplayControllerInitialize* Field_2_0; // 0x58
	::RPG::Client::AdventurePhase* Field_2_3; // 0x60
	::System::Int32 Field_2_14; // 0x68
	::System::Boolean Field_2_13; // 0x6C
	::System::Boolean Field_2_8; // 0x6D
	::RPG::GameCore::BoomRobotGameplayState Field_2_2; // 0x70
	::System::Int32 Field_2_11; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayControllerInitialize* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayControllerInitialize*))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_5A124CAF1E48B74F_1_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_2_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_EBC83762ED0D0E57(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_EBC83762ED0D0E57_OFFSET))(this, a1);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_726354DCE97130D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_726354DCE97130D8_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_1F47CAD86E555F5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_1F47CAD86E555F5A_OFFSET))(this);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C8E91C267CA702D(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_9C8E91C267CA702D_OFFSET))(this, a1);
	}

	::System::Void Method_2_524425424314D634(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_524425424314D634_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBC83762ED0D0E57_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_EBC83762ED0D0E57_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EEF4B7F98C2E56E0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_EEF4B7F98C2E56E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_98CF22BA36B43C83(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_98CF22BA36B43C83_OFFSET))(this, a1);
	}

	::System::Void Method_2_6EECE8924BBFC43C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_6EECE8924BBFC43C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_6EECE8924BBFC43C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_6EECE8924BBFC43C_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_6EECE8924BBFC43C_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_6EECE8924BBFC43C_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_57D21531A2DC98EE(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_8E14E6B1CACBC152_METHOD_2_57D21531A2DC98EE_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6CE432AB5E8A11E_Struct_2_E47C43DF677B0E66.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/MoleMole/CloudButtonRumbleType.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/MoleMole/MobileTouchRumbleBattleMode.h"
#include "unitysdk/MoleMole/MobileTouchRumbleDevice.h"
#include "unitysdk/MoleMole/MobileTouchRumbleEnableType.h"
#include "unitysdk/ScePadTriggerMask.h"
#include "unitysdk/Struct_2_22CD11FF1B0EB1E8.h"
#include "unitysdk/Struct_2_E5B9063FC59797FE.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class GamepadRumbleEntry; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_E6CE432AB5E8A11E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117DADC0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_0342EFB2444704A2_OFFSET UNITYSDK_OFFSET(0x150968E0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_035FB05768996FEB_OFFSET UNITYSDK_OFFSET(0x150975F0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_064B808565FFF95F_OFFSET UNITYSDK_OFFSET(0x15097340)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_163BBF152F1B95D8_OFFSET UNITYSDK_OFFSET(0x15097660)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_1BC539462B1DCAB4_OFFSET UNITYSDK_OFFSET(0x117DDCD0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_1C34F442AF2B454A_OFFSET UNITYSDK_OFFSET(0x117DC210)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15096B70)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_29293AA3D92A90C0_OFFSET UNITYSDK_OFFSET(0x15096590)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_29839FFC11E6037F_OFFSET UNITYSDK_OFFSET(0x117DB360)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_2A67190FB7F1E078_OFFSET UNITYSDK_OFFSET(0x117DCD20)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_320D446C7083DC5E_OFFSET UNITYSDK_OFFSET(0x15097650)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_56C27DDD8EBD3E3D_OFFSET UNITYSDK_OFFSET(0x15095E60)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_5AA175BBD14C0D7E_OFFSET UNITYSDK_OFFSET(0x117DBA00)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_614E673AC92D159A_OFFSET UNITYSDK_OFFSET(0x117DBBC0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_69AE30C87055610F_OFFSET UNITYSDK_OFFSET(0x15097500)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_6A313828EA450791_OFFSET UNITYSDK_OFFSET(0x150976B0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_6E567866C2EC7AA0_OFFSET UNITYSDK_OFFSET(0x117DB300)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_6E810824A2D29F27_OFFSET UNITYSDK_OFFSET(0x117DDAC0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_74A32D70C868D8A8_OFFSET UNITYSDK_OFFSET(0x15095F60)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_7DCD7D504DD01052_OFFSET UNITYSDK_OFFSET(0x15095D70)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_7E8D9F0525B90F34_OFFSET UNITYSDK_OFFSET(0x15097A50)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x150962D0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_82E992240300FB30_1_OFFSET UNITYSDK_OFFSET(0x15096930)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x117DA780)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_84E8431323067286_OFFSET UNITYSDK_OFFSET(0x15095B60)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x15097560)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x117DDD40)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_8A921FE9D1442D28_OFFSET UNITYSDK_OFFSET(0x117DC300)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0x15095E10)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0x15096BD0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_93097B60EF70000E_OFFSET UNITYSDK_OFFSET(0x117DD840)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_99CD96D02EBB75E5_OFFSET UNITYSDK_OFFSET(0x117DD4C0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x117DD760)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_A9B1D05671270FFB_OFFSET UNITYSDK_OFFSET(0x15095D60)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_AA99A1C3FC0CFB9D_OFFSET UNITYSDK_OFFSET(0x117DAA90)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_AE721E797323F86D_OFFSET UNITYSDK_OFFSET(0x150958B0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_B2C74F5AD64DF01E_OFFSET UNITYSDK_OFFSET(0x117DC660)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_B5E3FF83B209C62D_OFFSET UNITYSDK_OFFSET(0x117DBB00)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_BC18648869EC0F4E_OFFSET UNITYSDK_OFFSET(0x117DD4D0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_BD109F289592E366_OFFSET UNITYSDK_OFFSET(0x117DC900)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_C053FE63BE295A6F_1_OFFSET UNITYSDK_OFFSET(0x15097160)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_C053FE63BE295A6F_OFFSET UNITYSDK_OFFSET(0x117DC850)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_C39949B4C63BAFC3_OFFSET UNITYSDK_OFFSET(0x15097890)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_C9A261AB835CB046_OFFSET UNITYSDK_OFFSET(0x15095940)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_D0EF00E99905EE0D_OFFSET UNITYSDK_OFFSET(0x15097210)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_D84684F15B1BC810_OFFSET UNITYSDK_OFFSET(0x15096CF0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x117DBA50)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x15095F20)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0x150968A0)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x117DA290)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_F2EA1EB05D911CBF_OFFSET UNITYSDK_OFFSET(0x117DDF10)
#define CLASS_3_E6CE432AB5E8A11E_METHOD_3_FF5653CC799264D4_OFFSET UNITYSDK_OFFSET(0x15095820)
#define CLASS_3_E6CE432AB5E8A11E_ONCREATE_OFFSET UNITYSDK_OFFSET(0x117DA010)
#define CLASS_3_E6CE432AB5E8A11E_ONSTART_OFFSET UNITYSDK_OFFSET(0x117DA2D0)
#define CLASS_3_E6CE432AB5E8A11E__CTOR_OFFSET UNITYSDK_OFFSET(0x117DB260)

inline static constexpr unsigned int Class_3_E6CE432AB5E8A11E_TypeDefinitionIndex = 85700;

class Class_3_E6CE432AB5E8A11E : public ::Foundation::GameManager_1<::Class_3_E6CE432AB5E8A11E*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_22CD11FF1B0EB1E8>* Field_3_1; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_E5B9063FC59797FE>* Field_3_12; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_E5B9063FC59797FE>* Field_3_13; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_3_2; // 0x28
	::System::Int32 Field_3_9; // 0x30
	::System::Int32 Field_3_18; // 0x34
	::MoleMole::MobileTouchRumbleEnableType Field_3_4; // 0x38
	::System::Int32 Field_3_7; // 0x3C
	::MoleMole::MobileTouchRumbleDevice Field_3_10; // 0x40
	::System::Int32 Field_3_0; // 0x44
	::System::Int32 Field_3_8; // 0x48
	::System::Int32 Field_3_19; // 0x4C
	::MoleMole::CloudButtonRumbleType Field_3_14; // 0x50
	::MoleMole::MobileTouchRumbleBattleMode Field_3_11; // 0x54
	::System::Boolean Field_3_6; // 0x58
	::System::Boolean Field_3_5; // 0x59
	::System::Int32 Field_3_15; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_6E567866C2EC7AA0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_6E567866C2EC7AA0_OFFSET))(this, a1);
	}

	::System::Void Method_3_5AA175BBD14C0D7E(::MoleMole::MobileTouchRumbleBattleMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MobileTouchRumbleBattleMode))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_5AA175BBD14C0D7E_OFFSET))(this, a1);
	}

	::System::Void Method_3_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Void Method_3_29839FFC11E6037F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_29839FFC11E6037F_OFFSET))(this, a1);
	}

	::System::Void Method_3_B5E3FF83B209C62D(::ScePadTriggerMask a1, ::Class_3_E6CE432AB5E8A11E_Struct_2_E47C43DF677B0E66& a2)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::Class_3_E6CE432AB5E8A11E_Struct_2_E47C43DF677B0E66&))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_B5E3FF83B209C62D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1C34F442AF2B454A(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_1C34F442AF2B454A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_B2C74F5AD64DF01E(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_B2C74F5AD64DF01E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C053FE63BE295A6F(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_C053FE63BE295A6F_OFFSET))(this, a1);
	}

	::System::Void Method_3_BD109F289592E366(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_BD109F289592E366_OFFSET))(this, a1);
	}

	::System::Void Method_3_2A67190FB7F1E078(::MoleMole::MobileTouchRumbleEnableType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MobileTouchRumbleEnableType))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_2A67190FB7F1E078_OFFSET))(this, a1);
	}

	::MoleMole::CloudButtonRumbleType Method_3_99CD96D02EBB75E5()
	{
		return ((::MoleMole::CloudButtonRumbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_99CD96D02EBB75E5_OFFSET))(this);
	}

	static ::System::Boolean Method_3_BC18648869EC0F4E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_BC18648869EC0F4E_OFFSET))();
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_3_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_3_8A921FE9D1442D28(::System::String* a1, ::MoleMole::Config::GamepadRumbleEntry* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::GamepadRumbleEntry*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_8A921FE9D1442D28_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_AA99A1C3FC0CFB9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_AA99A1C3FC0CFB9D_OFFSET))(this);
	}

	::System::Void Method_3_614E673AC92D159A(::ScePadTriggerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_614E673AC92D159A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_93097B60EF70000E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_93097B60EF70000E_OFFSET))(this);
	}

	::System::Void Method_3_6E810824A2D29F27(::ScePadTriggerMask a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_6E810824A2D29F27_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_F0E307B84478A272_OFFSET))();
	}

	::System::Void Method_3_1BC539462B1DCAB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_1BC539462B1DCAB4_OFFSET))(this);
	}

	static ::System::Boolean Method_3_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_8A2AC7CD7EA66CAC_OFFSET))();
	}

	static ::System::Boolean Method_3_F2EA1EB05D911CBF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_F2EA1EB05D911CBF_OFFSET))();
	}

	::System::Void Method_3_FF5653CC799264D4(::MoleMole::Config::InputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_FF5653CC799264D4_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_AE721E797323F86D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_AE721E797323F86D_OFFSET))();
	}

	static ::System::Boolean Method_3_C9A261AB835CB046(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_C9A261AB835CB046_OFFSET))(a1);
	}

	::MoleMole::MobileTouchRumbleDevice Method_3_A9B1D05671270FFB()
	{
		return ((::MoleMole::MobileTouchRumbleDevice(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_A9B1D05671270FFB_OFFSET))(this);
	}

	::System::Void Method_3_7DCD7D504DD01052(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_7DCD7D504DD01052_OFFSET))(this, a1);
	}

	::System::Void Method_3_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_8B37A17B7A3F06D8_OFFSET))(this);
	}

	static ::System::Boolean Method_3_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_F0E307B84478A272_1_OFFSET))();
	}

	::System::Void Method_3_74A32D70C868D8A8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_74A32D70C868D8A8_OFFSET))(this, a1);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	static ::System::Boolean Method_3_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_F0E307B84478A272_2_OFFSET))();
	}

	::System::Void Method_3_0342EFB2444704A2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_0342EFB2444704A2_OFFSET))(this, a1);
	}

	::System::Void Method_3_82E992240300FB30_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_82E992240300FB30_1_OFFSET))(this);
	}

	::System::Void Method_3_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Void Method_3_D84684F15B1BC810(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_D84684F15B1BC810_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C053FE63BE295A6F_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_C053FE63BE295A6F_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_D0EF00E99905EE0D(::MoleMole::MobileTouchRumbleDevice a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MobileTouchRumbleDevice))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_D0EF00E99905EE0D_OFFSET))(this, a1);
	}

	::System::Void Method_3_064B808565FFF95F(::ScePadTriggerMask a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4, ::System::Boolean a5, ::MoleMole::Config::InputType a6)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*, ::System::String*, ::System::UInt32, ::System::Boolean, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_064B808565FFF95F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_3_29293AA3D92A90C0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_29293AA3D92A90C0_OFFSET))(this);
	}

	::System::Boolean Method_3_84E8431323067286(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_84E8431323067286_OFFSET))(this, a1);
	}

	::System::Void Method_3_56C27DDD8EBD3E3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_56C27DDD8EBD3E3D_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_86026B47A3027B67_OFFSET))();
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_035FB05768996FEB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_035FB05768996FEB_OFFSET))(this, a1);
	}

	::MoleMole::MobileTouchRumbleBattleMode Method_3_320D446C7083DC5E()
	{
		return ((::MoleMole::MobileTouchRumbleBattleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_320D446C7083DC5E_OFFSET))(this);
	}

	::System::Boolean Method_3_163BBF152F1B95D8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_163BBF152F1B95D8_OFFSET))(this);
	}

	::System::Void Method_3_6A313828EA450791(::MoleMole::CloudButtonRumbleType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CloudButtonRumbleType))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_6A313828EA450791_OFFSET))(this, a1);
	}

	::System::Void Method_3_C39949B4C63BAFC3(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_C39949B4C63BAFC3_OFFSET))(this, a1, a2);
	}

	::MoleMole::MobileTouchRumbleEnableType Method_3_7E8D9F0525B90F34()
	{
		return ((::MoleMole::MobileTouchRumbleEnableType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_7E8D9F0525B90F34_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_E5B9063FC59797FE>* Method_3_69AE30C87055610F(::ScePadTriggerMask a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_E5B9063FC59797FE>*(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_METHOD_3_69AE30C87055610F_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAnimStateTransitionType.h"
#include "unitysdk/RPG/GameCore/WaitAnimStateResult.h"
#include "unitysdk/Struct_2_AECA2D14AC7B49F5.h"
#include "unitysdk/Struct_2_BE9205D119086684.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_379;
class Class_0_16E4307DCC419505_402;
class Class_0_16E4307DCC419505_442;
class Class_1_1FCAAEF5576DC4EA;
class Class_1_38A5D85D4AE9F24D;
class Class_1_39BEC054B54B7956;
class Class_1_5469D397DAE62876;
class Class_1_5F51D4049EA87B7B;
class Class_1_751573BAE3E2714A;
class Class_1_FB0847DAACA4F413;
class Class_1_FD7BA687A1A99180_Class_1_297FAF7E56DDEC67;
class Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE;
class Class_2_A48F3719AA1CF200_6;
namespace RPG { template <typename T> class RingBuffer_1; }
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace RPG::GameCore { class LogicAnimEventEntry; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define CLASS_1_FD7BA687A1A99180_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A4FA70)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_03C1246974DB020D_OFFSET UNITYSDK_OFFSET(0x10A57D00)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_063EA2EB894327DC_OFFSET UNITYSDK_OFFSET(0x10A4F930)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_0755B90650615BBB_OFFSET UNITYSDK_OFFSET(0x10A56520)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_0A8B7B9A966B5017_OFFSET UNITYSDK_OFFSET(0x10A53440)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x10A53C90)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_0E0F3D0B099105F8_OFFSET UNITYSDK_OFFSET(0x10A57070)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_13F4188E2EBDA6D5_OFFSET UNITYSDK_OFFSET(0x10A57000)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_1F4B84D9AAE70FEF_OFFSET UNITYSDK_OFFSET(0x10A54C40)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_1F83EFED5B72DE38_OFFSET UNITYSDK_OFFSET(0x10A578C0)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x10A54390)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_3D3B7DDE460ADF37_OFFSET UNITYSDK_OFFSET(0x10A57130)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_45872D1C931761E1_OFFSET UNITYSDK_OFFSET(0x10A53870)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_49E64BB444E4E049_OFFSET UNITYSDK_OFFSET(0x10A56AB0)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_596C0081305B769E_OFFSET UNITYSDK_OFFSET(0x10A587F0)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_597B3B9AB4D14BB6_OFFSET UNITYSDK_OFFSET(0x10A52D60)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x10A58900)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_64067ADDA85F4D2B_OFFSET UNITYSDK_OFFSET(0x10A57500)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_7B95409E451D9B66_OFFSET UNITYSDK_OFFSET(0x10A55840)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10A57450)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x10A54070)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_BE253ACF49BE36BD_OFFSET UNITYSDK_OFFSET(0x10A53DE0)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_BEF2D00B46C3636D_OFFSET UNITYSDK_OFFSET(0x10A56D90)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_BF05EA15CD8FD52D_OFFSET UNITYSDK_OFFSET(0x10A54890)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_BF3771D135752EB2_OFFSET UNITYSDK_OFFSET(0x10A58020)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_C73D7A46F5E88789_OFFSET UNITYSDK_OFFSET(0x10A4F810)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_C9B4E26DFFDFE14E_OFFSET UNITYSDK_OFFSET(0x10A58330)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_D2FE4FBDA2D93FB3_OFFSET UNITYSDK_OFFSET(0x10A50FD0)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_D35281D68AEF9D19_OFFSET UNITYSDK_OFFSET(0x10A53AC0)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_DAB3C36617620944_OFFSET UNITYSDK_OFFSET(0x10A58630)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_F0AA6FD14F20A508_OFFSET UNITYSDK_OFFSET(0x10A53B90)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_F10FFC333DC3F67B_OFFSET UNITYSDK_OFFSET(0x10A568A0)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_F2EEC5E8503D3622_OFFSET UNITYSDK_OFFSET(0x10A53980)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_F4BFBCDF3925D932_OFFSET UNITYSDK_OFFSET(0x10A53640)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_F4C8B018D655630D_OFFSET UNITYSDK_OFFSET(0x10A526F0)
#define CLASS_1_FD7BA687A1A99180_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x10A50570)
#define CLASS_1_FD7BA687A1A99180__CTOR_OFFSET UNITYSDK_OFFSET(0x10A58910)
#define CLASS_1_FD7BA687A1A99180___SETUPANIMEVENTCONFIGFILE_B__20_0_OFFSET UNITYSDK_OFFSET(0x10A58A80)

inline static constexpr unsigned int Class_1_FD7BA687A1A99180_TypeDefinitionIndex = 46006;

class Class_1_FD7BA687A1A99180 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* Field_1_9; // 0x10
	::Il2CppArray<::System::String*>* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_1FCAAEF5576DC4EA*>*>* Field_1_12; // 0x20
	::Il2CppArray<::Class_1_39BEC054B54B7956*>* Field_1_19; // 0x28
	::Il2CppArray<::Struct_2_AECA2D14AC7B49F5>* Field_1_20; // 0x30
	::Il2CppArray<::Class_1_FD7BA687A1A99180_Class_1_297FAF7E56DDEC67*>* Field_1_17; // 0x38
	::Class_0_16E4307DCC419505_442* Field_1_2; // 0x40
	::Class_0_16E4307DCC419505_379* Field_1_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_FB0847DAACA4F413*>*>* Field_1_11; // 0x50
	::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* Field_1_7; // 0x58
	::Il2CppArray<::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE*>* Field_1_15; // 0x60
	::Il2CppArray<::System::Int32>* Field_1_14; // 0x68
	::Il2CppArray<::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE*>* Field_1_16; // 0x70
	::Class_1_751573BAE3E2714A* Field_1_3; // 0x78
	::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* Field_1_8; // 0x80
	::UnityEngine::RuntimeAnimatorController* Field_1_4; // 0x88
	::RPG::RingBuffer_1<::Struct_2_BE9205D119086684>* Field_1_21; // 0x90
	::System::String* Field_1_5; // 0x98
	::Il2CppArray<::System::String*>* Field_1_10; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_F780BA94AF5E7E37_1>* Field_1_13; // 0xA8
	::Class_0_16E4307DCC419505_402* Field_1_1; // 0xB0
	::Il2CppArray<::Class_1_FD7BA687A1A99180_Class_1_297FAF7E56DDEC67*>* Field_1_18; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C73D7A46F5E88789(::Class_0_16E4307DCC419505_379* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Class_0_16E4307DCC419505_402* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_402*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_C73D7A46F5E88789_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_063EA2EB894327DC(::Class_0_16E4307DCC419505_379* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a3, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a4, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a5, ::Il2CppArray<::System::String*>* a6, ::Class_0_16E4307DCC419505_402* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_402*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_063EA2EB894327DC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_D2FE4FBDA2D93FB3(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_D2FE4FBDA2D93FB3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BE253ACF49BE36BD(::Class_1_FB0847DAACA4F413* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB0847DAACA4F413*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_BE253ACF49BE36BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_A8458C1526636349(::Class_1_FB0847DAACA4F413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB0847DAACA4F413*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_A8458C1526636349_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4C8B018D655630D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_F4C8B018D655630D_OFFSET))(this);
	}

	::System::Void Method_1_7B95409E451D9B66(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_7B95409E451D9B66_OFFSET))(this, a1, a2);
	}

	::Class_1_38A5D85D4AE9F24D* Method_1_0755B90650615BBB(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
	{
		return ((::Class_1_38A5D85D4AE9F24D*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_0755B90650615BBB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F10FFC333DC3F67B(::Class_1_38A5D85D4AE9F24D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38A5D85D4AE9F24D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_F10FFC333DC3F67B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BEF2D00B46C3636D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_BEF2D00B46C3636D_OFFSET))(this, a1);
	}

	::System::Void Method_1_13F4188E2EBDA6D5(::Il2CppArray<::System::String*>* a1, ::Class_0_16E4307DCC419505_402* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_402*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_13F4188E2EBDA6D5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0E0F3D0B099105F8(::System::Int32 a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_0E0F3D0B099105F8_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::WaitAnimStateResult Method_1_3D3B7DDE460ADF37(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::RPG::GameCore::WaitAnimStateResult(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_3D3B7DDE460ADF37_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_64067ADDA85F4D2B(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_64067ADDA85F4D2B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_03C1246974DB020D(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>* a4, ::System::Object* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_03C1246974DB020D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_BF05EA15CD8FD52D(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_BF05EA15CD8FD52D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F4B84D9AAE70FEF(::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a2, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a3, ::Il2CppArray<::RPG::GameCore::LogicAnimEventEntry*>* a4, ::RPG::GameCore::TaskContext* a5, ::Class_1_38A5D85D4AE9F24D* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::RPG::GameCore::LogicAnimEventEntry*>*, ::RPG::GameCore::TaskContext*, ::Class_1_38A5D85D4AE9F24D*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_1F4B84D9AAE70FEF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_49E64BB444E4E049(::Class_1_38A5D85D4AE9F24D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38A5D85D4AE9F24D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_49E64BB444E4E049_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D35281D68AEF9D19(::Class_1_FD7BA687A1A99180_Class_1_297FAF7E56DDEC67* a1, ::System::Single a2, ::System::Boolean a3, ::RPG::GameCore::EAnimStateTransitionType a4, ::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD7BA687A1A99180_Class_1_297FAF7E56DDEC67*, ::System::Single, ::System::Boolean, ::RPG::GameCore::EAnimStateTransitionType, ::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_D35281D68AEF9D19_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_5469D397DAE62876* Method_1_597B3B9AB4D14BB6()
	{
		return ((::Class_1_5469D397DAE62876*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_597B3B9AB4D14BB6_OFFSET))(this);
	}

	::System::Void Method_1_0A8B7B9A966B5017(::System::Boolean a1, ::Struct_2_AECA2D14AC7B49F5& a2, ::Struct_2_AECA2D14AC7B49F5& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_AECA2D14AC7B49F5&, ::Struct_2_AECA2D14AC7B49F5&))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_0A8B7B9A966B5017_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_F4BFBCDF3925D932(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::EAnimStateTransitionType a5, ::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32, ::RPG::GameCore::EAnimStateTransitionType, ::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_F4BFBCDF3925D932_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_1F83EFED5B72DE38(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4, ::RPG::GameCore::EAnimStateTransitionType a5, ::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::RPG::GameCore::EAnimStateTransitionType, ::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_1F83EFED5B72DE38_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_DAB3C36617620944(::Class_1_FB0847DAACA4F413* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB0847DAACA4F413*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_DAB3C36617620944_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C9B4E26DFFDFE14E(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::Class_1_FD7BA687A1A99180_Class_1_D24BA05D84C362BE*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_C9B4E26DFFDFE14E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_596C0081305B769E(::UnityEngine::Animator* a1, ::RPG::GameCore::AnimParamRangeEntry* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::RPG::GameCore::AnimParamRangeEntry*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_596C0081305B769E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_45872D1C931761E1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_45872D1C931761E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F2EEC5E8503D3622(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_F2EEC5E8503D3622_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0AA6FD14F20A508(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_F0AA6FD14F20A508_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF3771D135752EB2(::Class_2_A48F3719AA1CF200_6* a1, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_6*, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_BF3771D135752EB2_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_442* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_442*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::String* __SetupAnimEventConfigFile_b__20_0(::System::String* msg)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD7BA687A1A99180___SETUPANIMEVENTCONFIGFILE_B__20_0_OFFSET))(this, msg);
	}
};

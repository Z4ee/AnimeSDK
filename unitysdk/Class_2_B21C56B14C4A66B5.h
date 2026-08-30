#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B21C56B14C4A66B5_Struct_2_BBD456EBC9087BC2_7.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

class Class_2_B21C56B14C4A66B5_Class_1_BAE463B36F571562;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class CharacterAnimEventConfig; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B21C56B14C4A66B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1910A7C0)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x1910A900)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_0B57C515D997AC51_OFFSET UNITYSDK_OFFSET(0x1910BFC0)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x1910C0B0)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_40E06565F44E066F_OFFSET UNITYSDK_OFFSET(0x1910BE90)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_4BFD22BA064FDA06_OFFSET UNITYSDK_OFFSET(0x1910BC90)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x1910AD20)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x1910B5B0)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_9B12B3DBC5092B81_OFFSET UNITYSDK_OFFSET(0x1910A460)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1910BD40)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x1910B700)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_B5B1B5EF5324F442_1_OFFSET UNITYSDK_OFFSET(0x1910C1D0)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_B5B1B5EF5324F442_OFFSET UNITYSDK_OFFSET(0x1910BD90)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_B5B2A098DFB6D461_OFFSET UNITYSDK_OFFSET(0x1910A240)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_CE1ABE6CC81D9AE6_OFFSET UNITYSDK_OFFSET(0x1910C2D0)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_D1C386AEA2F5BE59_OFFSET UNITYSDK_OFFSET(0x1910B7B0)
#define CLASS_2_B21C56B14C4A66B5_METHOD_2_F70251E97F300003_OFFSET UNITYSDK_OFFSET(0x1910B8B0)
#define CLASS_2_B21C56B14C4A66B5_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x1910A770)
#define CLASS_2_B21C56B14C4A66B5_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x1910B550)
#define CLASS_2_B21C56B14C4A66B5_TICK_OFFSET UNITYSDK_OFFSET(0x1910AAB0)
#define CLASS_2_B21C56B14C4A66B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1910C520)

inline static constexpr unsigned int Class_2_B21C56B14C4A66B5_TypeDefinitionIndex = 57592;

class Class_2_B21C56B14C4A66B5 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::TaskContext* OBKLPOKMIEA; // 0x18
	::System::Collections::Generic::List_1<::Class_2_B21C56B14C4A66B5_Struct_2_BBD456EBC9087BC2_7>* GFMCAPNLKOK; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::AnimGroupEventConfig*>* ECDEMCDBOPP; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HJLLLJKGCFO; // 0x30
	::RPG::GameCore::CharacterModelComponent* HLCINALDOAC; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_B21C56B14C4A66B5_Class_1_BAE463B36F571562*>* FBLHAPDHBEO; // 0x40
	::System::UInt64 PJKHBGMKGBB; // 0x48
	::System::Boolean FNNEABNCAPH; // 0x50
	::System::Int32 LEAECMEADLL; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B5B2A098DFB6D461(::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_B5B2A098DFB6D461_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_TICK_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Boolean Method_2_A871253BFD471C99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_A871253BFD471C99_OFFSET))(this);
	}

	::System::Void Method_2_B5B1B5EF5324F442(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_B5B1B5EF5324F442_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0B57C515D997AC51(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_0B57C515D997AC51_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B5B1B5EF5324F442_1(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_B5B1B5EF5324F442_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_40E06565F44E066F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_40E06565F44E066F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CE1ABE6CC81D9AE6(::Class_2_B21C56B14C4A66B5_Class_1_BAE463B36F571562* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B21C56B14C4A66B5_Class_1_BAE463B36F571562*))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_CE1ABE6CC81D9AE6_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B12B3DBC5092B81(::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_9B12B3DBC5092B81_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D1C386AEA2F5BE59(::RPG::GameCore::AnimGroupEventConfig* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnimGroupEventConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_D1C386AEA2F5BE59_OFFSET))(this, a1, a2);
	}

	::Class_2_B21C56B14C4A66B5_Class_1_BAE463B36F571562* Method_2_F70251E97F300003(::System::Int32 a1, ::RPG::GameCore::AnimGroupEventConfig* a2)
	{
		return ((::Class_2_B21C56B14C4A66B5_Class_1_BAE463B36F571562*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AnimGroupEventConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_F70251E97F300003_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_025E4B1A2211CF52_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_2_4BFD22BA064FDA06(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B21C56B14C4A66B5_METHOD_2_4BFD22BA064FDA06_OFFSET))(this, a1);
	}
};

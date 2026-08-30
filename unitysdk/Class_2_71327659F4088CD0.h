#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/Class_2_71327659F4088CD0_NpcState.h"
#include "unitysdk/RPG/Client/ChaseBailuResult.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_11AD7A2D72029F1E;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client::Prop { class ChaseBailuConfig; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_71327659F4088CD0_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x134C7990)
#define CLASS_2_71327659F4088CD0_METHOD_2_01244C5D42565CB2_OFFSET UNITYSDK_OFFSET(0x134C55B0)
#define CLASS_2_71327659F4088CD0_METHOD_2_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x134C5CD0)
#define CLASS_2_71327659F4088CD0_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x134C5330)
#define CLASS_2_71327659F4088CD0_METHOD_2_3D42765ED80D6DAA_OFFSET UNITYSDK_OFFSET(0x134C6D60)
#define CLASS_2_71327659F4088CD0_METHOD_2_425B226ADBC6BFAE_OFFSET UNITYSDK_OFFSET(0x134C7930)
#define CLASS_2_71327659F4088CD0_METHOD_2_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x134C57B0)
#define CLASS_2_71327659F4088CD0_METHOD_2_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x134C7080)
#define CLASS_2_71327659F4088CD0_METHOD_2_7013082DF68F440A_OFFSET UNITYSDK_OFFSET(0x134C7240)
#define CLASS_2_71327659F4088CD0_METHOD_2_7C3F9BC9F59B706F_OFFSET UNITYSDK_OFFSET(0x134C6220)
#define CLASS_2_71327659F4088CD0_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x134C68A0)
#define CLASS_2_71327659F4088CD0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x134C6C80)
#define CLASS_2_71327659F4088CD0_METHOD_2_999F013FC7D047C7_OFFSET UNITYSDK_OFFSET(0x134C79C0)
#define CLASS_2_71327659F4088CD0_METHOD_2_ADA6C8726D795A94_OFFSET UNITYSDK_OFFSET(0x134C5FC0)
#define CLASS_2_71327659F4088CD0_METHOD_2_C2D94B542F8BDBB0_OFFSET UNITYSDK_OFFSET(0x134C6170)
#define CLASS_2_71327659F4088CD0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x134C6D10)
#define CLASS_2_71327659F4088CD0_METHOD_2_EF55C3D1E6114769_OFFSET UNITYSDK_OFFSET(0x134C5E70)
#define CLASS_2_71327659F4088CD0_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x134C79B0)
#define CLASS_2_71327659F4088CD0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x134C79A0)
#define CLASS_2_71327659F4088CD0_METHOD_2_FB104879113C1C1D_OFFSET UNITYSDK_OFFSET(0x134C73F0)
#define CLASS_2_71327659F4088CD0_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x134C5180)
#define CLASS_2_71327659F4088CD0_TICK_OFFSET UNITYSDK_OFFSET(0x134C5280)
#define CLASS_2_71327659F4088CD0__CTOR_OFFSET UNITYSDK_OFFSET(0x134C79D0)

inline static constexpr unsigned int Class_2_71327659F4088CD0_TypeDefinitionIndex = 60288;

class Class_2_71327659F4088CD0 : public ::Class_1_5BBB2050B3F3F683
{
public:
	// static const ::System::Int32 JAMBLEFBLNL = 0xFFFFFFFE; // 0x0
	// static const ::System::Single DDNMDMBJFBN; // 0x0
	::System::Collections::Generic::HashSet_1<::System::Int32>* GHGJEFFDLAO; // 0x20
	::Class_3_07C3C4D2990C49EE* CNJFCHENKFN; // 0x28
	::RPG::GameCore::GameEntity* ILAJEHHAPBD; // 0x30
	::RPG::GameCore::AdventureCharacterController* EBGPOAMDPIJ; // 0x38
	::UnityEngine::GameObject* KANJEOAEGMG; // 0x40
	::System::String* BAPFMDAAFAL; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* CHDPGOJGMGE; // 0x50
	::Class_2_11AD7A2D72029F1E* FNLONNEABNB; // 0x58
	::RPG::Client::Prop::ChaseBailuConfig* IGHAHBNLIJA; // 0x60
	::RPG::GameCore::TransformComponent* MOHDIBEPIPM; // 0x68
	::System::Int32 IOKFEHLBIMC; // 0x70
	::System::Int32 FFHKPHIPNIP; // 0x74
	::RPG::Client::ChaseBailuResult GNOEGILFEMD; // 0x78
	::System::Single KIAIHMKLDKO; // 0x7C
	::System::Single AIMCBIHHNAK; // 0x80
	::System::Single CDJBJJPBGAB; // 0x84
	::System::Int32 JPIDMCDNLOM; // 0x88
	::System::Single DNNNHDAEAHH; // 0x8C
	::Class_2_71327659F4088CD0_NpcState KEKGALDOCFE; // 0x90
	::System::Int32 HBKCBNKNOHP; // 0x94
	::System::Boolean FMNEEONAMNO; // 0x98
	::System::Boolean PIPLLENMLIM; // 0x99
	::System::Int32 MCLDOBAKOGH; // 0x9C
	::System::Single NGPHKPGCPJM; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0__CTOR_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_ONUNINIT_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF55C3D1E6114769(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_EF55C3D1E6114769_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ADA6C8726D795A94(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_ADA6C8726D795A94_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C2D94B542F8BDBB0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_C2D94B542F8BDBB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C3F9BC9F59B706F(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::CharacterMotionFlag a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Single a14, ::System::String* a15, ::RPG::GameCore::TaskContext* a16, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a17)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_7C3F9BC9F59B706F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_3D42765ED80D6DAA(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_3D42765ED80D6DAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_2_01244C5D42565CB2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_01244C5D42565CB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Void Method_2_2898E3EC91BCF259(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_2898E3EC91BCF259_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_507A5122CD01412B_OFFSET))(this);
	}

	::System::Int32 Method_2_FB104879113C1C1D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_FB104879113C1C1D_OFFSET))(this);
	}

	::System::Boolean Method_2_425B226ADBC6BFAE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_425B226ADBC6BFAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7013082DF68F440A(::RPG::Client::ChaseBailuResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChaseBailuResult))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_7013082DF68F440A_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::Client::ChaseBailuResult Method_2_999F013FC7D047C7()
	{
		return ((::RPG::Client::ChaseBailuResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_999F013FC7D047C7_OFFSET))(this);
	}
};

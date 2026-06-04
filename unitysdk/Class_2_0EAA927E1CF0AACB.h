#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_2DE6E652B33A5FF1;
class Class_1_B68CA618BEA3A2C8;
class Class_1_E05E7A6D9DE9138B;
class Class_1_EFCBA1FD97ED5FE9;
class Class_2_7CF36DB1DCE43BAF;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class NpcMonoLod; }
namespace RPG::GameCore { class EntityLodLoadingData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0EAA927E1CF0AACB_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x143E84F0)
#define CLASS_2_0EAA927E1CF0AACB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143E8540)
#define CLASS_2_0EAA927E1CF0AACB_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x143EAB60)
#define CLASS_2_0EAA927E1CF0AACB_GETMODELART_OFFSET UNITYSDK_OFFSET(0x143EA810)
#define CLASS_2_0EAA927E1CF0AACB_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x143E7A60)
#define CLASS_2_0EAA927E1CF0AACB_GET_ISPOLYMER_OFFSET UNITYSDK_OFFSET(0x143EAC90)
#define CLASS_2_0EAA927E1CF0AACB_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x143EACB0)
#define CLASS_2_0EAA927E1CF0AACB_GET_MATERIALGROUPCONTAINERINSTANCE_OFFSET UNITYSDK_OFFSET(0x143EAB50)
#define CLASS_2_0EAA927E1CF0AACB_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x143EAB40)
#define CLASS_2_0EAA927E1CF0AACB_GET_SCENEOBJHANDLER_OFFSET UNITYSDK_OFFSET(0x143EACA0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_0D1FE04D54BD7FF2_OFFSET UNITYSDK_OFFSET(0x143E7370)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_0F3D3A5ABDA9779E_OFFSET UNITYSDK_OFFSET(0x143E9380)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x143E9CE0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_2741B399F496A828_OFFSET UNITYSDK_OFFSET(0x143E9080)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x143E9920)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_2EC08A3DF3EE073C_OFFSET UNITYSDK_OFFSET(0x143E8BB0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_311DDAC730F6D367_OFFSET UNITYSDK_OFFSET(0x143EAA90)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x143E7AC0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x143E9420)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x143E75D0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_43A20E51EFDACFFD_1_OFFSET UNITYSDK_OFFSET(0x143E8450)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_43A20E51EFDACFFD_OFFSET UNITYSDK_OFFSET(0x143E83B0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x143E7900)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_47EDBC4CA1AB8BEE_1_OFFSET UNITYSDK_OFFSET(0x143E8960)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_47EDBC4CA1AB8BEE_2_OFFSET UNITYSDK_OFFSET(0x143EA5C0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_47EDBC4CA1AB8BEE_3_OFFSET UNITYSDK_OFFSET(0x143EA120)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x143EA370)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x143EA070)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_773313A27DB2F491_OFFSET UNITYSDK_OFFSET(0x143E7F90)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_7AAA6FC0F0F914CF_OFFSET UNITYSDK_OFFSET(0x143E8D00)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_7CB9C71E2C2A0739_OFFSET UNITYSDK_OFFSET(0x143E7D60)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x143E9F50)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_8B15790C5B608EDF_OFFSET UNITYSDK_OFFSET(0x143E9120)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_949F94BF6D875FC3_OFFSET UNITYSDK_OFFSET(0x143E7DB0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x143E9C70)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x143E9010)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x143E7680)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_A15EF7939F75CCED_OFFSET UNITYSDK_OFFSET(0x143E9FE0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x143E7B70)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x143E87C0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x143E97D0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_BCBA2F161B837B0C_OFFSET UNITYSDK_OFFSET(0x143E80C0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_D88F12B2FEA01D49_OFFSET UNITYSDK_OFFSET(0x143E77C0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_E0A096FC69F007A0_OFFSET UNITYSDK_OFFSET(0x143EACC0)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_E274BF1089E49903_OFFSET UNITYSDK_OFFSET(0x143E7520)
#define CLASS_2_0EAA927E1CF0AACB_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x143E7C50)
#define CLASS_2_0EAA927E1CF0AACB_REFRESHADDCOLLIDERSENABLE_OFFSET UNITYSDK_OFFSET(0x143EAC50)
#define CLASS_2_0EAA927E1CF0AACB_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x143EACD0)
#define CLASS_2_0EAA927E1CF0AACB_SETSCENEOBJVISIBLE_OFFSET UNITYSDK_OFFSET(0x143EABB0)
#define CLASS_2_0EAA927E1CF0AACB_TRYHIDEACTOR_OFFSET UNITYSDK_OFFSET(0x143EAC00)
#define CLASS_2_0EAA927E1CF0AACB__CTOR_OFFSET UNITYSDK_OFFSET(0x143EAE40)

inline static constexpr unsigned int Class_2_0EAA927E1CF0AACB_TypeDefinitionIndex = 53656;

class Class_2_0EAA927E1CF0AACB : public ::RPG::GameCore::GameComponentBase
{
public:
	::UnityEngine::AnimatorOverrideController* Field_2_0; // 0x18
	::RPG::GameCore::EntityLodLoadingData* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30
	::RPG::Client::NpcMonoLod* Field_2_4; // 0x38
	::System::String* Field_2_5; // 0x40
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_6; // 0x48
	::RPG::Client::CharacterShaderPropertyTransition* Field_2_7; // 0x50
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_8; // 0x58
	::System::String* Field_2_9; // 0x60
	::UnityEngine::Animator* Field_2_10; // 0x68
	::UnityEngine::Collider* Field_2_11; // 0x70
	::RPG::GameCore::LevelNPCStillConfigData* Field_2_12; // 0x78
	::UnityEngine::RuntimeAnimatorController* Field_2_13; // 0x80
	::System::String* Field_2_14; // 0x88
	::Class_1_2DE6E652B33A5FF1* Field_2_15; // 0x90
	::RPG::Client::MockAnimator* Field_2_16; // 0x98
	::Class_1_E05E7A6D9DE9138B* Field_2_17; // 0xA0
	::System::Action_1<::UnityEngine::GameObject*>* Field_2_18; // 0xA8
	::System::String* Field_2_19; // 0xB0
	::System::String* Field_2_20; // 0xB8
	::Class_1_EFCBA1FD97ED5FE9* Field_2_21; // 0xC0
	::System::Boolean Field_2_22; // 0xC8
	::System::Boolean Field_2_23; // 0xC9
	::System::Boolean Field_2_24; // 0xCA
	::System::Boolean Field_2_25; // 0xCB
	::RPG::GameCore::EntityLoadState Field_2_26; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0D1FE04D54BD7FF2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_0D1FE04D54BD7FF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_E274BF1089E49903(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_E274BF1089E49903_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F07804D8892197E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_3F07804D8892197E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D88F12B2FEA01D49()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_D88F12B2FEA01D49_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::RPG::GameCore::EntityLodTemplateName Method_2_7CB9C71E2C2A0739()
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_7CB9C71E2C2A0739_OFFSET))(this);
	}

	::System::Void Method_2_949F94BF6D875FC3(::System::String* a1, ::RPG::GameCore::LevelNPCStillConfigData* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::LevelNPCStillConfigData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_949F94BF6D875FC3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_773313A27DB2F491(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_773313A27DB2F491_OFFSET))(this, a1);
	}

	::System::Void Method_2_43A20E51EFDACFFD(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_43A20E51EFDACFFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_43A20E51EFDACFFD_1(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_43A20E51EFDACFFD_1_OFFSET))(this, a1);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_BCBA2F161B837B0C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_BCBA2F161B837B0C_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AAA6FC0F0F914CF(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_7AAA6FC0F0F914CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_2741B399F496A828(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_2741B399F496A828_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B15790C5B608EDF(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_8B15790C5B608EDF_OFFSET))(this, a1);
	}

	::System::Void Method_2_0F3D3A5ABDA9779E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_0F3D3A5ABDA9779E_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_A15EF7939F75CCED(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_A15EF7939F75CCED_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_2_47EDBC4CA1AB8BEE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_47EDBC4CA1AB8BEE_1_OFFSET))(this);
	}

	::System::Void Method_2_47EDBC4CA1AB8BEE_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_47EDBC4CA1AB8BEE_2_OFFSET))(this);
	}

	::System::Void Method_2_47EDBC4CA1AB8BEE_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_47EDBC4CA1AB8BEE_3_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_2_2EC08A3DF3EE073C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_2EC08A3DF3EE073C_OFFSET))(this, a1);
	}

	::System::Void Method_2_311DDAC730F6D367(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_311DDAC730F6D367_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelGO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_GETMODELGO_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelArt()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_GETMODELART_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* get_MockAnimator()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_GET_MOCKANIMATOR_OFFSET))(this);
	}

	::Class_1_B68CA618BEA3A2C8* get_MaterialGroupContainerInstance()
	{
		return ((::Class_1_B68CA618BEA3A2C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_GET_MATERIALGROUPCONTAINERINSTANCE_OFFSET))(this);
	}

	::UnityEngine::Transform* GetAttachPoint(::System::String* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_GETATTACHPOINT_OFFSET))(this, a1, a2);
	}

	::System::Void SetSceneObjVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_SETSCENEOBJVISIBLE_OFFSET))(this, a1);
	}

	::System::Void TryHideActor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_TRYHIDEACTOR_OFFSET))(this, a1);
	}

	::System::Void RefreshAddCollidersEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_REFRESHADDCOLLIDERSENABLE_OFFSET))(this);
	}

	::System::Boolean get_IsPolymer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_GET_ISPOLYMER_OFFSET))(this);
	}

	::Class_2_7CF36DB1DCE43BAF* get_SceneObjHandler()
	{
		return ((::Class_2_7CF36DB1DCE43BAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_GET_SCENEOBJHANDLER_OFFSET))(this);
	}

	::RPG::GameCore::EntityLoadState get_LoadState()
	{
		return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_GET_LOADSTATE_OFFSET))(this);
	}

	::System::Void Method_2_E0A096FC69F007A0(::RPG::GameCore::EntityLoadState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLoadState))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_METHOD_2_E0A096FC69F007A0_OFFSET))(this, a1);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAA927E1CF0AACB_RESETTODEFAULT_OFFSET))(this);
	}
};

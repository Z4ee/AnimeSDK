#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/Struct_2_1ADED1EDA7578A33.h"
#include "unitysdk/Struct_2_4D81EAED28A3D2BE.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_30B5FE4AA7ABAB8C_1;
class Class_1_4A90D78D94DB1347;
class Class_2_00007E9796694121;
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class PropOverrideAnimLayerConfig; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define CLASS_2_01F4079471966D8C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3DE850)
#define CLASS_2_01F4079471966D8C_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xC3E16F0)
#define CLASS_2_01F4079471966D8C_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xC3E1710)
#define CLASS_2_01F4079471966D8C_GET_HASANIMATORPROPSTATE_OFFSET UNITYSDK_OFFSET(0xC3E1730)
#define CLASS_2_01F4079471966D8C_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xC3DEA10)
#define CLASS_2_01F4079471966D8C_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xC3DCE20)
#define CLASS_2_01F4079471966D8C_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC3DEE60)
#define CLASS_2_01F4079471966D8C_METHOD_2_3BFA18CAF46CB33D_OFFSET UNITYSDK_OFFSET(0xC3E1EC0)
#define CLASS_2_01F4079471966D8C_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xC3E1420)
#define CLASS_2_01F4079471966D8C_METHOD_2_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0xC3DFE60)
#define CLASS_2_01F4079471966D8C_METHOD_2_47D35B205CCFCFC1_OFFSET UNITYSDK_OFFSET(0xC3DE570)
#define CLASS_2_01F4079471966D8C_METHOD_2_488FEC46ACE06DA9_OFFSET UNITYSDK_OFFSET(0xC3DDAA0)
#define CLASS_2_01F4079471966D8C_METHOD_2_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xC3DDDD0)
#define CLASS_2_01F4079471966D8C_METHOD_2_4EA76F52545CE208_OFFSET UNITYSDK_OFFSET(0xC3E10C0)
#define CLASS_2_01F4079471966D8C_METHOD_2_51597D076FE85575_OFFSET UNITYSDK_OFFSET(0xC3DD580)
#define CLASS_2_01F4079471966D8C_METHOD_2_5A1258E62A10B9F8_OFFSET UNITYSDK_OFFSET(0xC3E0FF0)
#define CLASS_2_01F4079471966D8C_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xC3DF1B0)
#define CLASS_2_01F4079471966D8C_METHOD_2_6D42028F3372FF6C_OFFSET UNITYSDK_OFFSET(0xC3E1470)
#define CLASS_2_01F4079471966D8C_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xC3E1750)
#define CLASS_2_01F4079471966D8C_METHOD_2_8C4F5769C49BF3B7_OFFSET UNITYSDK_OFFSET(0xC3E1660)
#define CLASS_2_01F4079471966D8C_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xC3E0360)
#define CLASS_2_01F4079471966D8C_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xC3DF5D0)
#define CLASS_2_01F4079471966D8C_METHOD_2_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0xC3DF4C0)
#define CLASS_2_01F4079471966D8C_METHOD_2_9BBA6DD1E9B6B016_OFFSET UNITYSDK_OFFSET(0xC3E0850)
#define CLASS_2_01F4079471966D8C_METHOD_2_9CF70182061CD844_OFFSET UNITYSDK_OFFSET(0xC3DCE70)
#define CLASS_2_01F4079471966D8C_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xC3E07E0)
#define CLASS_2_01F4079471966D8C_METHOD_2_A07E988B2139327C_1_OFFSET UNITYSDK_OFFSET(0xC3E1B60)
#define CLASS_2_01F4079471966D8C_METHOD_2_A07E988B2139327C_OFFSET UNITYSDK_OFFSET(0xC3E17D0)
#define CLASS_2_01F4079471966D8C_METHOD_2_A1885DA6FFBC6897_OFFSET UNITYSDK_OFFSET(0xC3E0420)
#define CLASS_2_01F4079471966D8C_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xC3E1620)
#define CLASS_2_01F4079471966D8C_METHOD_2_A37F95FE754B38A0_OFFSET UNITYSDK_OFFSET(0xC3DEEC0)
#define CLASS_2_01F4079471966D8C_METHOD_2_A9AFC7D33D1B85BA_OFFSET UNITYSDK_OFFSET(0xC3DD820)
#define CLASS_2_01F4079471966D8C_METHOD_2_BABDEA0F0B4BFB12_OFFSET UNITYSDK_OFFSET(0xC3DCED0)
#define CLASS_2_01F4079471966D8C_METHOD_2_BF16ED2CF948B266_OFFSET UNITYSDK_OFFSET(0xC3E0B60)
#define CLASS_2_01F4079471966D8C_METHOD_2_C038048AB4FA1AA1_OFFSET UNITYSDK_OFFSET(0xC3DEC50)
#define CLASS_2_01F4079471966D8C_METHOD_2_CBE6200F5708FACD_OFFSET UNITYSDK_OFFSET(0xC3DF9F0)
#define CLASS_2_01F4079471966D8C_METHOD_2_CF11FE5AC51B3A61_OFFSET UNITYSDK_OFFSET(0xC3E0C30)
#define CLASS_2_01F4079471966D8C_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xC3DCF60)
#define CLASS_2_01F4079471966D8C_METHOD_2_DD0924136A748204_OFFSET UNITYSDK_OFFSET(0xC3E13C0)
#define CLASS_2_01F4079471966D8C_METHOD_2_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0xC3DE030)
#define CLASS_2_01F4079471966D8C_METHOD_2_E8E7C5C6DFAAC2BB_OFFSET UNITYSDK_OFFSET(0xC3E16B0)
#define CLASS_2_01F4079471966D8C_METHOD_2_F4E9796AF6D77D45_OFFSET UNITYSDK_OFFSET(0xC3E1E60)
#define CLASS_2_01F4079471966D8C_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xC3DE660)
#define CLASS_2_01F4079471966D8C_METHOD_2_FF3C6D7263F5B9E0_OFFSET UNITYSDK_OFFSET(0xC3E0490)
#define CLASS_2_01F4079471966D8C_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xC3E03C0)
#define CLASS_2_01F4079471966D8C_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xC3DEBE0)
#define CLASS_2_01F4079471966D8C_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xC3DF030)
#define CLASS_2_01F4079471966D8C_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xC3E2160)
#define CLASS_2_01F4079471966D8C_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xC3E1700)
#define CLASS_2_01F4079471966D8C_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xC3E1720)
#define CLASS_2_01F4079471966D8C_SET_HASANIMATORPROPSTATE_OFFSET UNITYSDK_OFFSET(0xC3E1740)
#define CLASS_2_01F4079471966D8C_TICK_OFFSET UNITYSDK_OFFSET(0xC3DF790)
#define CLASS_2_01F4079471966D8C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3E2410)
#define CLASS_2_01F4079471966D8C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E2320)

inline static constexpr unsigned int Class_2_01F4079471966D8C_TypeDefinitionIndex = 57523;

class Class_2_01F4079471966D8C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Boolean* StaticGet_NGOAHOFHOBK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_01F4079471966D8C_TypeDefinitionIndex)->GetStaticField(0x11DB0);
	}
	static ::System::Int32* StaticGet_DICDNNGPAAC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_01F4079471966D8C_TypeDefinitionIndex)->GetStaticField(0x11DB4);
	}
	::RPG::Client::EntityGameObjectConnection* AEJAGMPGJAH; // 0x18
	::UnityEngine::AnimatorOverrideController* KENAPFGJKOM; // 0x20
	::System::String* _CurrentState_k__BackingField; // 0x28
	::RPG::GameCore::PropRow* ADHMIJDMNOJ; // 0x30
	::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x38
	::Il2CppArray<::RPG::GameCore::PropOverrideAnimLayerConfig*>* NGBHLHLDPIK; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_4D81EAED28A3D2BE>* JPNDJDLGHLN; // 0x48
	::UnityEngine::RuntimeAnimatorController* NBECDBIDDOP; // 0x50
	::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x58
	::Class_1_30B5FE4AA7ABAB8C_1* KLHIJKCIBAC; // 0x60
	::System::Collections::Generic::List_1<::Struct_2_4D81EAED28A3D2BE>* OCOIAFDGFGL; // 0x68
	::Class_2_00007E9796694121* BLCANICCCLP; // 0x70
	::Class_1_4A90D78D94DB1347* HJEEJGEBOML; // 0x78
	::RPG::Client::RootMotionHandler* FKNONDAILIM; // 0x80
	::RPG::Client::MockAnimator* JPMHLGJAICN; // 0x88
	::System::Boolean OBIBGNCDJDL; // 0x90
	::System::Boolean FBPPBMOAHFN; // 0x91
	::System::Boolean FFKOGPPNMCD; // 0x92
	::System::Boolean HLDOOLPECKK; // 0x93
	::System::Boolean PNIDDLIEJFB; // 0x94
	::System::Boolean LNMEIIOJKDM; // 0x95
	::System::Boolean OOIKEBNGPED; // 0x96
	::System::Boolean _HasAnimatorPropState_k__BackingField; // 0x97
	::System::Nullable_1<::UnityEngine::AnimatorStateInfo> EMMBDEMJDJA; // 0x98
	::System::Nullable_1<::UnityEngine::AnimatorStateInfo> EBONANJKPME; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C__CCTOR_OFFSET))();
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_9CF70182061CD844(::RPG::GameCore::PropRow* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_9CF70182061CD844_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BABDEA0F0B4BFB12(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_BABDEA0F0B4BFB12_OFFSET))(this, a1);
	}

	::System::Void Method_2_51597D076FE85575(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_51597D076FE85575_OFFSET))(this, a1);
	}

	::System::Void Method_2_47D35B205CCFCFC1(::Il2CppArray<::RPG::GameCore::PropOverrideAnimLayerConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PropOverrideAnimLayerConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_47D35B205CCFCFC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_488FEC46ACE06DA9(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_488FEC46ACE06DA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9AFC7D33D1B85BA(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_A9AFC7D33D1B85BA_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void Method_2_C038048AB4FA1AA1(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_C038048AB4FA1AA1_OFFSET))(this, a1);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_97B44ED90A2DE2AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_97B44ED90A2DE2AB_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_2_CBE6200F5708FACD(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_CBE6200F5708FACD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_A1885DA6FFBC6897(::RPG::GameCore::PropState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_A1885DA6FFBC6897_OFFSET))(this, a1);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_9BBA6DD1E9B6B016(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_9BBA6DD1E9B6B016_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF16ED2CF948B266(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_BF16ED2CF948B266_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FF3C6D7263F5B9E0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_FF3C6D7263F5B9E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CF11FE5AC51B3A61(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_CF11FE5AC51B3A61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5A1258E62A10B9F8(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_5A1258E62A10B9F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4EA76F52545CE208(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_4EA76F52545CE208_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_DD0924136A748204(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_DD0924136A748204_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_6D42028F3372FF6C(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_6D42028F3372FF6C_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_2_8C4F5769C49BF3B7(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_8C4F5769C49BF3B7_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* Method_2_E8E7C5C6DFAAC2BB()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_E8E7C5C6DFAAC2BB_OFFSET))(this);
	}

	::UnityEngine::Animator* get_AnimatorRef()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_GET_ANIMATORREF_OFFSET))(this);
	}

	::System::Void set_AnimatorRef(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_SET_ANIMATORREF_OFFSET))(this, a1);
	}

	::System::String* get_CurrentState()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_SET_CURRENTSTATE_OFFSET))(this, a1);
	}

	::System::Boolean get_HasAnimatorPropState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_GET_HASANIMATORPROPSTATE_OFFSET))(this);
	}

	::System::Void set_HasAnimatorPropState(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_SET_HASANIMATORPROPSTATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::Struct_2_1ADED1EDA7578A33 Method_2_A07E988B2139327C()
	{
		return ((::Struct_2_1ADED1EDA7578A33(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_A07E988B2139327C_OFFSET))(this);
	}

	::Struct_2_1ADED1EDA7578A33 Method_2_A07E988B2139327C_1()
	{
		return ((::Struct_2_1ADED1EDA7578A33(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_A07E988B2139327C_1_OFFSET))(this);
	}

	::System::Void Method_2_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_A37F95FE754B38A0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_A37F95FE754B38A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_2_F4E9796AF6D77D45(::RPG::Client::EntityGameObjectConnection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityGameObjectConnection*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_F4E9796AF6D77D45_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BFA18CAF46CB33D(::RPG::Client::EntityGameObjectConnection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityGameObjectConnection*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_3BFA18CAF46CB33D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_RESETTODEFAULT_OFFSET))(this);
	}
};

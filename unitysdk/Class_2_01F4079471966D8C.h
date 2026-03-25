#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/Struct_2_1ADED1EDA7578A33.h"
#include "unitysdk/Struct_2_4D81EAED28A3D2BE.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_30B5FE4AA7ABAB8C_1;
class Class_1_E05E7A6D9DE9138B;
class Class_2_751108DFDC405F93;
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

#define CLASS_2_01F4079471966D8C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x877F170)
#define CLASS_2_01F4079471966D8C_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x8781DF0)
#define CLASS_2_01F4079471966D8C_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x8781E10)
#define CLASS_2_01F4079471966D8C_GET_HASANIMATORPROPSTATE_OFFSET UNITYSDK_OFFSET(0x8781E30)
#define CLASS_2_01F4079471966D8C_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x877D780)
#define CLASS_2_01F4079471966D8C_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x877F090)
#define CLASS_2_01F4079471966D8C_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x877F6A0)
#define CLASS_2_01F4079471966D8C_METHOD_2_373D997A9FCE80A3_OFFSET UNITYSDK_OFFSET(0x8781B20)
#define CLASS_2_01F4079471966D8C_METHOD_2_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0x8780630)
#define CLASS_2_01F4079471966D8C_METHOD_2_3BFA18CAF46CB33D_OFFSET UNITYSDK_OFFSET(0x87825C0)
#define CLASS_2_01F4079471966D8C_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8781AD0)
#define CLASS_2_01F4079471966D8C_METHOD_2_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0x877E850)
#define CLASS_2_01F4079471966D8C_METHOD_2_47D35B205CCFCFC1_OFFSET UNITYSDK_OFFSET(0x877EF90)
#define CLASS_2_01F4079471966D8C_METHOD_2_488FEC46ACE06DA9_OFFSET UNITYSDK_OFFSET(0x877E500)
#define CLASS_2_01F4079471966D8C_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x877F2B0)
#define CLASS_2_01F4079471966D8C_METHOD_2_4EA76F52545CE208_OFFSET UNITYSDK_OFFSET(0x87817D0)
#define CLASS_2_01F4079471966D8C_METHOD_2_51597D076FE85575_OFFSET UNITYSDK_OFFSET(0x877DF60)
#define CLASS_2_01F4079471966D8C_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x877D8C0)
#define CLASS_2_01F4079471966D8C_METHOD_2_5A1258E62A10B9F8_OFFSET UNITYSDK_OFFSET(0x8781700)
#define CLASS_2_01F4079471966D8C_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x877F9F0)
#define CLASS_2_01F4079471966D8C_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x8781E50)
#define CLASS_2_01F4079471966D8C_METHOD_2_8C4F5769C49BF3B7_OFFSET UNITYSDK_OFFSET(0x8781D60)
#define CLASS_2_01F4079471966D8C_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8780B80)
#define CLASS_2_01F4079471966D8C_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x877FE10)
#define CLASS_2_01F4079471966D8C_METHOD_2_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0x877FD00)
#define CLASS_2_01F4079471966D8C_METHOD_2_9BBA6DD1E9B6B016_OFFSET UNITYSDK_OFFSET(0x8781010)
#define CLASS_2_01F4079471966D8C_METHOD_2_9CF70182061CD844_OFFSET UNITYSDK_OFFSET(0x877D7D0)
#define CLASS_2_01F4079471966D8C_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x8780FA0)
#define CLASS_2_01F4079471966D8C_METHOD_2_A07E988B2139327C_1_OFFSET UNITYSDK_OFFSET(0x8782260)
#define CLASS_2_01F4079471966D8C_METHOD_2_A07E988B2139327C_OFFSET UNITYSDK_OFFSET(0x8781ED0)
#define CLASS_2_01F4079471966D8C_METHOD_2_A1885DA6FFBC6897_OFFSET UNITYSDK_OFFSET(0x8780C40)
#define CLASS_2_01F4079471966D8C_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8781D20)
#define CLASS_2_01F4079471966D8C_METHOD_2_A37F95FE754B38A0_OFFSET UNITYSDK_OFFSET(0x877F700)
#define CLASS_2_01F4079471966D8C_METHOD_2_BABDEA0F0B4BFB12_OFFSET UNITYSDK_OFFSET(0x877D830)
#define CLASS_2_01F4079471966D8C_METHOD_2_BF16ED2CF948B266_OFFSET UNITYSDK_OFFSET(0x87812D0)
#define CLASS_2_01F4079471966D8C_METHOD_2_C7A784F4BC126C17_OFFSET UNITYSDK_OFFSET(0x877E200)
#define CLASS_2_01F4079471966D8C_METHOD_2_CBE6200F5708FACD_OFFSET UNITYSDK_OFFSET(0x87801C0)
#define CLASS_2_01F4079471966D8C_METHOD_2_CF11FE5AC51B3A61_OFFSET UNITYSDK_OFFSET(0x87813A0)
#define CLASS_2_01F4079471966D8C_METHOD_2_DD0924136A748204_OFFSET UNITYSDK_OFFSET(0x8781A70)
#define CLASS_2_01F4079471966D8C_METHOD_2_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x877EA90)
#define CLASS_2_01F4079471966D8C_METHOD_2_E8E7C5C6DFAAC2BB_OFFSET UNITYSDK_OFFSET(0x8781DB0)
#define CLASS_2_01F4079471966D8C_METHOD_2_F4E9796AF6D77D45_OFFSET UNITYSDK_OFFSET(0x8782560)
#define CLASS_2_01F4079471966D8C_METHOD_2_FF3C6D7263F5B9E0_OFFSET UNITYSDK_OFFSET(0x8780CB0)
#define CLASS_2_01F4079471966D8C_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x8780BE0)
#define CLASS_2_01F4079471966D8C_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x877F450)
#define CLASS_2_01F4079471966D8C_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x877F870)
#define CLASS_2_01F4079471966D8C_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x8781E00)
#define CLASS_2_01F4079471966D8C_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x8781E20)
#define CLASS_2_01F4079471966D8C_SET_HASANIMATORPROPSTATE_OFFSET UNITYSDK_OFFSET(0x8781E40)
#define CLASS_2_01F4079471966D8C_TICK_OFFSET UNITYSDK_OFFSET(0x877FFD0)
#define CLASS_2_01F4079471966D8C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8782920)
#define CLASS_2_01F4079471966D8C__CTOR_OFFSET UNITYSDK_OFFSET(0x8782860)
#define CLASS_2_01F4079471966D8C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x87829B0)

inline static constexpr unsigned int Class_2_01F4079471966D8C_TypeDefinitionIndex = 46208;

class Class_2_01F4079471966D8C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Int32* StaticGet_Field_2_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_01F4079471966D8C_TypeDefinitionIndex)->GetStaticField(0x8450);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_01F4079471966D8C_TypeDefinitionIndex)->GetStaticField(0x8454);
	}
	::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x18
	::UnityEngine::AnimatorOverrideController* Field_2_6; // 0x20
	::Class_2_751108DFDC405F93* Field_2_10; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_4D81EAED28A3D2BE>* Field_2_18; // 0x30
	::RPG::Client::EntityGameObjectConnection* Field_2_20; // 0x38
	::Class_1_E05E7A6D9DE9138B* Field_2_7; // 0x40
	::RPG::GameCore::CharacterModelComponent* Field_2_11; // 0x48
	::RPG::Client::RootMotionHandler* Field_2_22; // 0x50
	::Il2CppArray<::RPG::GameCore::PropOverrideAnimLayerConfig*>* Field_2_5; // 0x58
	::RPG::Client::MockAnimator* Field_2_12; // 0x60
	::RPG::GameCore::PropRow* Field_2_9; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_4D81EAED28A3D2BE>* Field_2_19; // 0x70
	::System::String* _CurrentState_k__BackingField; // 0x78
	::Class_1_30B5FE4AA7ABAB8C_1* Field_2_13; // 0x80
	::System::Nullable_1<::UnityEngine::AnimatorStateInfo> Field_2_17; // 0x88
	::System::Nullable_1<::UnityEngine::AnimatorStateInfo> Field_2_16; // 0xB0
	::System::Boolean Field_2_24; // 0xD8
	::System::Boolean Field_2_21; // 0xD9
	::System::Boolean _HasAnimatorPropState_k__BackingField; // 0xDA
	::System::Boolean Field_2_15; // 0xDB
	::System::Boolean Field_2_23; // 0xDC
	::System::Boolean Field_2_4; // 0xDD
	::System::Boolean Field_2_14; // 0xDE
	::System::Boolean Field_2_25; // 0xDF

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

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_488FEC46ACE06DA9(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_488FEC46ACE06DA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7A784F4BC126C17(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_C7A784F4BC126C17_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_ONMODELARTLOADED_OFFSET))(this);
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

	static ::System::Void Method_2_373D997A9FCE80A3(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_373D997A9FCE80A3_OFFSET))(a1, a2);
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

	::System::Void set_AnimatorRef(::UnityEngine::Animator* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_SET_ANIMATORREF_OFFSET))(this, value);
	}

	::System::String* get_CurrentState()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_SET_CURRENTSTATE_OFFSET))(this, value);
	}

	::System::Boolean get_HasAnimatorPropState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_GET_HASANIMATORPROPSTATE_OFFSET))(this);
	}

	::System::Void set_HasAnimatorPropState(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_SET_HASANIMATORPROPSTATE_OFFSET))(this, value);
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

	::System::Void Method_2_41F5D9C0F0A306F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_41F5D9C0F0A306F5_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_A37F95FE754B38A0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_A37F95FE754B38A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_37D3D9A3F3244B90()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C_METHOD_2_37D3D9A3F3244B90_OFFSET))(this);
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

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_01F4079471966D8C___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

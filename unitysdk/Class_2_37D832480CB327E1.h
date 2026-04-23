#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_37D832480CB327E1_PropMovementPauseReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/Struct_2_BF35D09998D831A7.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_27E38B1A892A490A;
class Class_1_9BA88018AC303C05;
class Class_1_F1C57540A2293C7F;
class Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11;
class Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB;
class Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6;
class Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42;
class Class_3_CD04D3296DF4C842_8;
class Class_3_CD04D3296DF4C842_9;
namespace RPG::Client { class MonoAnimatorPlatform; }
namespace RPG::Client { class MonoMovementPropHandle; }
namespace RPG::Client { class NodeRotationController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define CLASS_2_37D832480CB327E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118C6110)
#define CLASS_2_37D832480CB327E1_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x118C60F0)
#define CLASS_2_37D832480CB327E1_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x118C6100)
#define CLASS_2_37D832480CB327E1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x118C7330)
#define CLASS_2_37D832480CB327E1_METHOD_2_01B434DABFBB11F2_OFFSET UNITYSDK_OFFSET(0x118CD230)
#define CLASS_2_37D832480CB327E1_METHOD_2_03ADD72B19AFD290_OFFSET UNITYSDK_OFFSET(0x118CCB50)
#define CLASS_2_37D832480CB327E1_METHOD_2_04A7679F84B6B9B2_OFFSET UNITYSDK_OFFSET(0x118CD150)
#define CLASS_2_37D832480CB327E1_METHOD_2_098AF5FA419E1B31_OFFSET UNITYSDK_OFFSET(0x118C9FE0)
#define CLASS_2_37D832480CB327E1_METHOD_2_1080519617EA595B_OFFSET UNITYSDK_OFFSET(0x118C9230)
#define CLASS_2_37D832480CB327E1_METHOD_2_19722328C5FBCB75_OFFSET UNITYSDK_OFFSET(0x118C5ED0)
#define CLASS_2_37D832480CB327E1_METHOD_2_1C2BA2F1127BD0D2_OFFSET UNITYSDK_OFFSET(0x118C9C90)
#define CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x118CD750)
#define CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x118C55C0)
#define CLASS_2_37D832480CB327E1_METHOD_2_2138EBA0F1C04A69_OFFSET UNITYSDK_OFFSET(0x118C6B20)
#define CLASS_2_37D832480CB327E1_METHOD_2_233389A0AA4108E5_OFFSET UNITYSDK_OFFSET(0x118CAFA0)
#define CLASS_2_37D832480CB327E1_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x118C5690)
#define CLASS_2_37D832480CB327E1_METHOD_2_2C1AC969FF2926A2_OFFSET UNITYSDK_OFFSET(0x118CA8E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x118C7990)
#define CLASS_2_37D832480CB327E1_METHOD_2_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x118CBA30)
#define CLASS_2_37D832480CB327E1_METHOD_2_3AB92A310C458D7A_OFFSET UNITYSDK_OFFSET(0x118CA5B0)
#define CLASS_2_37D832480CB327E1_METHOD_2_50AF78C78C229325_OFFSET UNITYSDK_OFFSET(0x118C6000)
#define CLASS_2_37D832480CB327E1_METHOD_2_57D21531A2DC98EE_1_OFFSET UNITYSDK_OFFSET(0x118C5D20)
#define CLASS_2_37D832480CB327E1_METHOD_2_57D21531A2DC98EE_OFFSET UNITYSDK_OFFSET(0x118C5B70)
#define CLASS_2_37D832480CB327E1_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x118CC210)
#define CLASS_2_37D832480CB327E1_METHOD_2_6D006271A1FDA1A1_OFFSET UNITYSDK_OFFSET(0x118C7EC0)
#define CLASS_2_37D832480CB327E1_METHOD_2_7248DB1A337B706C_OFFSET UNITYSDK_OFFSET(0x118C6C80)
#define CLASS_2_37D832480CB327E1_METHOD_2_75BB1BD254B02C99_OFFSET UNITYSDK_OFFSET(0x118CAA80)
#define CLASS_2_37D832480CB327E1_METHOD_2_770B88978754F8F6_OFFSET UNITYSDK_OFFSET(0x118C9A00)
#define CLASS_2_37D832480CB327E1_METHOD_2_801CA383A9EE0F50_OFFSET UNITYSDK_OFFSET(0x118CAB80)
#define CLASS_2_37D832480CB327E1_METHOD_2_92C0333F62EE2D34_OFFSET UNITYSDK_OFFSET(0x118C7540)
#define CLASS_2_37D832480CB327E1_METHOD_2_95F73446B6EBD161_OFFSET UNITYSDK_OFFSET(0x118C5CA0)
#define CLASS_2_37D832480CB327E1_METHOD_2_961BEB91EB07EDE0_OFFSET UNITYSDK_OFFSET(0x118CAC10)
#define CLASS_2_37D832480CB327E1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x118C6600)
#define CLASS_2_37D832480CB327E1_METHOD_2_98FC23D084F20320_OFFSET UNITYSDK_OFFSET(0x118CC8D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_A0C2164E6BC7E6E6_OFFSET UNITYSDK_OFFSET(0x118CB530)
#define CLASS_2_37D832480CB327E1_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x118C74E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_A9AB4A2A65064029_OFFSET UNITYSDK_OFFSET(0x118C7CE0)
#define CLASS_2_37D832480CB327E1_METHOD_2_AD932973F4280F8F_OFFSET UNITYSDK_OFFSET(0x118CD300)
#define CLASS_2_37D832480CB327E1_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x118C78D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x118CB880)
#define CLASS_2_37D832480CB327E1_METHOD_2_B9C0E554D028157B_OFFSET UNITYSDK_OFFSET(0x118C79E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_BAE790E0F1699E68_OFFSET UNITYSDK_OFFSET(0x118C73E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_BC7C20C6115ED23A_OFFSET UNITYSDK_OFFSET(0x118CA1F0)
#define CLASS_2_37D832480CB327E1_METHOD_2_C31F8C785F17C5AF_OFFSET UNITYSDK_OFFSET(0x118C5620)
#define CLASS_2_37D832480CB327E1_METHOD_2_C39491964CC3D68A_OFFSET UNITYSDK_OFFSET(0x118C8EE0)
#define CLASS_2_37D832480CB327E1_METHOD_2_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0x118CB7E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x118C58D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_EA459874B1F3C9B8_OFFSET UNITYSDK_OFFSET(0x118C7470)
#define CLASS_2_37D832480CB327E1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x118C6C70)
#define CLASS_2_37D832480CB327E1_METHOD_2_F53CF70E9C1A8E38_OFFSET UNITYSDK_OFFSET(0x118CB340)
#define CLASS_2_37D832480CB327E1_METHOD_2_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x118C5E50)
#define CLASS_2_37D832480CB327E1_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x118C6670)
#define CLASS_2_37D832480CB327E1_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x118C6790)
#define CLASS_2_37D832480CB327E1_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x118C69A0)
#define CLASS_2_37D832480CB327E1_TICK_OFFSET UNITYSDK_OFFSET(0x118C6BE0)
#define CLASS_2_37D832480CB327E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x118CD870)
#define CLASS_2_37D832480CB327E1__CTOR_OFFSET UNITYSDK_OFFSET(0x118CD7B0)
#define CLASS_2_37D832480CB327E1___FINISHMOVEINSTANCE_B__61_0_OFFSET UNITYSDK_OFFSET(0x118CD8B0)
#define CLASS_2_37D832480CB327E1___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x118CD930)
#define CLASS_2_37D832480CB327E1___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x118CD920)

inline static constexpr unsigned int Class_2_37D832480CB327E1_TypeDefinitionIndex = 52911;

class Class_2_37D832480CB327E1 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_2_25()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37D832480CB327E1_TypeDefinitionIndex)->GetStaticField(0x1DAF0);
	}
	::Class_1_9BA88018AC303C05* Field_2_26; // 0x18
	::UnityEngine::Coroutine* Field_2_23; // 0x20
	::RPG::Client::NodeRotationController* Field_2_21; // 0x28
	::System::Collections::Generic::List_1<::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6*>* Field_2_15; // 0x30
	::Struct_2_2B16FFFF87B43037 Field_2_20; // 0x38
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x48
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x50
	::System::Collections::Generic::List_1<::Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB*>* Field_2_16; // 0x58
	::Struct_2_BF35D09998D831A7 Field_2_10; // 0x60
	::System::Collections::Generic::List_1<::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11*>* Field_2_17; // 0x70
	::System::Collections::Generic::List_1<::RPG::Client::MonoMovementPropHandle*>* Field_2_18; // 0x78
	::RPG::GameCore::GameEntity* Field_2_4; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>* Field_2_24; // 0x88
	::Struct_2_BF35D09998D831A7 Field_2_8; // 0x90
	::RPG::GameCore::GameEntity* Field_2_3; // 0xA0
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0xA8
	::Struct_2_BF35D09998D831A7 Field_2_9; // 0xB0
	::System::Collections::Generic::List_1<::RPG::Client::MonoAnimatorPlatform*>* Field_2_19; // 0xC0
	::System::Int32 Field_2_13; // 0xC8
	::System::Int32 Field_2_27; // 0xCC
	::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0xD0
	::System::Int32 Field_2_14; // 0xD4
	::System::Boolean Field_2_22; // 0xD8
	::System::Boolean Field_2_5; // 0xD9
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0xDA
	::UnityEngine::Vector3 Field_2_12; // 0xDC
	::UnityEngine::Vector3 Field_2_11; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_C31F8C785F17C5AF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_C31F8C785F17C5AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_57D21531A2DC98EE(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_57D21531A2DC98EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D21531A2DC98EE_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_57D21531A2DC98EE_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_95F73446B6EBD161(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_95F73446B6EBD161_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FAA945ED465745BC(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_19722328C5FBCB75(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_19722328C5FBCB75_OFFSET))(this, a1);
	}

	::System::Void Method_2_50AF78C78C229325(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_50AF78C78C229325_OFFSET))(this, a1);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_2138EBA0F1C04A69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_2138EBA0F1C04A69_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA459874B1F3C9B8(::System::Boolean a1, ::Class_2_37D832480CB327E1_PropMovementPauseReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_37D832480CB327E1_PropMovementPauseReason))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_EA459874B1F3C9B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::Class_1_F1C57540A2293C7F* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_F1C57540A2293C7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_B9C0E554D028157B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_B9C0E554D028157B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_C39491964CC3D68A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_C39491964CC3D68A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1080519617EA595B(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6, ::System::Boolean a7, ::Class_3_CD04D3296DF4C842_9* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1080519617EA595B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_1C2BA2F1127BD0D2(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1C2BA2F1127BD0D2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_098AF5FA419E1B31(::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_098AF5FA419E1B31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3AB92A310C458D7A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_3AB92A310C458D7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC7C20C6115ED23A(::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_BC7C20C6115ED23A_OFFSET))(this, a1);
	}

	::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11* Method_2_2C1AC969FF2926A2(::System::String* a1)
	{
		return ((::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_2C1AC969FF2926A2_OFFSET))(this, a1);
	}

	::Class_1_27E38B1A892A490A* Method_2_75BB1BD254B02C99(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_27E38B1A892A490A*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_75BB1BD254B02C99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_801CA383A9EE0F50(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_801CA383A9EE0F50_OFFSET))(this, a1);
	}

	::System::Void Method_2_7248DB1A337B706C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_7248DB1A337B706C_OFFSET))(this, a1);
	}

	::System::Void Method_2_BAE790E0F1699E68(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_BAE790E0F1699E68_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A0C2164E6BC7E6E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_A0C2164E6BC7E6E6_OFFSET))(this);
	}

	::System::Void Method_2_F53CF70E9C1A8E38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_F53CF70E9C1A8E38_OFFSET))(this);
	}

	::System::Void Method_2_6D006271A1FDA1A1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_6D006271A1FDA1A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_E7EF6BC52B28648C_1_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_98FC23D084F20320(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::Class_3_CD04D3296DF4C842_8* a4, ::System::Boolean a5, ::Class_3_CD04D3296DF4C842_9* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_98FC23D084F20320_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6* Method_2_04A7679F84B6B9B2()
	{
		return ((::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_04A7679F84B6B9B2_OFFSET))(this);
	}

	::System::Void Method_2_92C0333F62EE2D34(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_92C0333F62EE2D34_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB* Method_2_A9AB4A2A65064029(::System::String* a1)
	{
		return ((::Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_A9AB4A2A65064029_OFFSET))(this, a1);
	}

	::System::Void Method_2_770B88978754F8F6(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Boolean a5, ::Class_3_CD04D3296DF4C842_8* a6, ::System::Boolean a7, ::Class_3_CD04D3296DF4C842_9* a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_770B88978754F8F6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_233389A0AA4108E5(::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_233389A0AA4108E5_OFFSET))(this, a1, a2);
	}

	::Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42* Method_2_01B434DABFBB11F2()
	{
		return ((::Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_01B434DABFBB11F2_OFFSET))(this);
	}

	::System::Boolean Method_2_03ADD72B19AFD290(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6, ::Class_3_CD04D3296DF4C842_9* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_03ADD72B19AFD290_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_961BEB91EB07EDE0(::Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_961BEB91EB07EDE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD932973F4280F8F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_AD932973F4280F8F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __FinishMoveInstance_b__61_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1___FINISHMOVEINSTANCE_B__61_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};

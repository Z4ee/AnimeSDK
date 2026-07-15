#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_CustomGameData.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_EPuzzlePhase.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_Struct_2_C231CD2E6FE177A7.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605.h"
#include "unitysdk/Struct_2_C40BD9CA381B92A3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_0_16E4307DCC419505_425;
class Class_1_20D743894CDF214D_1;
class Class_1_21DCD4640D389503_42;
class Class_1_EA5A5E4D07C4CF2B_1;
namespace RPG::Client { class RspHandler; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ACTIVATEBULLET_OFFSET UNITYSDK_OFFSET(0x1612B240)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ARCHIVE_OFFSET UNITYSDK_OFFSET(0x1612CD70)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BOOMPROPHITTARGETS_OFFSET UNITYSDK_OFFSET(0x1612BCB0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1612BF30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ENABLETELEPORTTIMING_OFFSET UNITYSDK_OFFSET(0x1612DC20)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_CACHEDCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0x161317C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16132FB0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISBULLETACTIVATED_OFFSET UNITYSDK_OFFSET(0x16131770)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x16131750)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISMINISTATE_OFFSET UNITYSDK_OFFSET(0x16131760)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HITTARGETS_OFFSET UNITYSDK_OFFSET(0x1612B970)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1612A130)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INTERRUPTEDPLAYERPROJECTILES_OFFSET UNITYSDK_OFFSET(0x1612DAC0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x1612C470)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x16130D00)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_119DF0CE89C21899_OFFSET UNITYSDK_OFFSET(0x1612C550)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_1754A6BBAA1C72DD_OFFSET UNITYSDK_OFFSET(0x1612EC80)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1612FB20)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_28BB8707B4CC88A2_OFFSET UNITYSDK_OFFSET(0x16132CC0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_39845204DD04FC33_OFFSET UNITYSDK_OFFSET(0x1612E1C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x16130B10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1612AD40)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x1612D020)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_5F1A93F1BF7BAC2B_OFFSET UNITYSDK_OFFSET(0x1612B2A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x1612FC40)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_70595BBE3E0E4F2A_OFFSET UNITYSDK_OFFSET(0x16130DF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x1612FF70)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_7243ADD7DCCD2F93_OFFSET UNITYSDK_OFFSET(0x1612DDE0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_741FA71FA66D57DE_OFFSET UNITYSDK_OFFSET(0x16131930)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x1612AF30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_7E7F03005FFBCB2E_OFFSET UNITYSDK_OFFSET(0x1612C660)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_854CB545243705CE_OFFSET UNITYSDK_OFFSET(0x1612E720)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_881A1C0293E74A8A_OFFSET UNITYSDK_OFFSET(0x1612BA10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_1_OFFSET UNITYSDK_OFFSET(0x1612AC70)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_2_OFFSET UNITYSDK_OFFSET(0x1612D9F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_3_OFFSET UNITYSDK_OFFSET(0x1612B3F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1612EA30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_926A87EF7B2C87F9_1_OFFSET UNITYSDK_OFFSET(0x16131520)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_926A87EF7B2C87F9_OFFSET UNITYSDK_OFFSET(0x16131180)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9AD47D8DC12F1689_OFFSET UNITYSDK_OFFSET(0x1612CDD0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9EBD28FD8FFC1A2A_OFFSET UNITYSDK_OFFSET(0x161316B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x1612FA90)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_AE4D94368D34D119_OFFSET UNITYSDK_OFFSET(0x1612BD30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B014C83A11FE985E_OFFSET UNITYSDK_OFFSET(0x1612E470)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B5C3166189D9374C_OFFSET UNITYSDK_OFFSET(0x1612B840)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B8817F4F77EFC234_OFFSET UNITYSDK_OFFSET(0x161317E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x1612FA40)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_CC95B1519A868AD0_OFFSET UNITYSDK_OFFSET(0x1612C330)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_CF44BB80676FF7A6_OFFSET UNITYSDK_OFFSET(0x1612C7B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D02F0567C550BE1C_OFFSET UNITYSDK_OFFSET(0x1612ABA0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D7B51E636B36E189_OFFSET UNITYSDK_OFFSET(0x1612F900)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D824A072379CF8DA_OFFSET UNITYSDK_OFFSET(0x161308D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D85A69A177ED1ECC_OFFSET UNITYSDK_OFFSET(0x16130C60)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DC029EEDE931ACB9_OFFSET UNITYSDK_OFFSET(0x1612EB00)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_1_OFFSET UNITYSDK_OFFSET(0x1612F3A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_2_OFFSET UNITYSDK_OFFSET(0x1612F410)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x1612F220)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_E08B4BAE62D9AAD5_OFFSET UNITYSDK_OFFSET(0x16130600)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EBAC71FBE1837205_1_OFFSET UNITYSDK_OFFSET(0x1612C2E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0x1612E540)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x1612A920)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16131290)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_PICKUPBULLET_OFFSET UNITYSDK_OFFSET(0x1612B550)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERALERT_OFFSET UNITYSDK_OFFSET(0x16131320)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERCHASE_OFFSET UNITYSDK_OFFSET(0x16130F80)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIDE_OFFSET UNITYSDK_OFFSET(0x16132820)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIT_OFFSET UNITYSDK_OFFSET(0x16132690)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHLOOK_OFFSET UNITYSDK_OFFSET(0x16132500)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROPHIT_OFFSET UNITYSDK_OFFSET(0x1612E590)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROP_OFFSET UNITYSDK_OFFSET(0x16132280)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHTV_OFFSET UNITYSDK_OFFSET(0x161329B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETACHIEVEMENTCHASE_OFFSET UNITYSDK_OFFSET(0x1612D990)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x1612AFB0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0x1612CF70)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_CACHEDCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0x161317D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16133010)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SHUTDOWNPUZZLE_OFFSET UNITYSDK_OFFSET(0x1612B0C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x1612A590)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x1612C4C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITRESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0x1612CD10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITSTARTUP_OFFSET UNITYSDK_OFFSET(0x1612CC20)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_USEBULLET_OFFSET UNITYSDK_OFFSET(0x1612B390)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITRESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0x1612CC80)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITSTARTUP_OFFSET UNITYSDK_OFFSET(0x1612CB30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16133380)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x16133070)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WolfBroPuzzleBoard_TypeDefinitionIndex = 74732;

	class WolfBroPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xE400);
		}
		static ::RPG::Client::Prop::WolfBroPuzzleBoard** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::Prop::WolfBroPuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xE408);
		}
		static ::System::String** StaticGet_Field_6_2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xE410);
		}
		static ::System::String** StaticGet_Field_6_3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xE418);
		}
		static ::System::String** StaticGet_Field_6_4()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xE420);
		}
		static ::System::String** StaticGet_Field_6_5()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xE428);
		}
		static ::System::String** StaticGet_Field_6_6()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xE430);
		}
		static ::System::String** StaticGet_Field_6_7()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xE438);
		}
		static ::System::UInt32* StaticGet_Field_6_8()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4E90);
		}
		// static const ::System::Int32 MiniState = 0x2; // 0x0
		// static const ::System::UInt32 BulletPropID = 0x1929D; // 0x0
		// static const ::System::UInt32 ChaseQuestID = 0x3DB10C; // 0x0
		// static const ::System::UInt32 TeleportQuestID = 0x3DB10B; // 0x0
		::System::UInt32 id; // 0x48
		::System::Boolean showBulletButton; // 0x4C
		::UnityEngine::Transform* initAnchor; // 0x50
		::UnityEngine::Vector2 _CachedCameraAxis_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_6_17; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_6_18; // 0x68
		::RPG::Client::RuntimeGroupManager* Field_6_19; // 0x70
		::RPG::GameCore::PropComponent* Field_6_20; // 0x78
		::System::UInt32 Field_6_21; // 0x80
		::System::UInt32 Field_6_22; // 0x84
		::System::Boolean Field_6_23; // 0x88
		::System::Boolean Field_6_24; // 0x89
		::RPG::Client::Prop::WolfBroPuzzleBoard_EPuzzlePhase Field_6_25; // 0x8C
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::RPG::Client::RspHandler*>* Field_6_26; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C231CD2E6FE177A7>* Field_6_27; // 0x98
		::System::Boolean Field_6_28; // 0xA0
		::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData Field_6_29; // 0xA8
		::System::Nullable_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605> Field_6_30; // 0xC0
		::System::Nullable_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605> Field_6_31; // 0xD8
		::System::Boolean Field_6_32; // 0xF0
		::System::Collections::Generic::List_1<::System::UInt32>* Field_6_33; // 0xF8
		::System::Single Field_6_34; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Method_6_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_7646FFE662147970_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void ShutdownPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SHUTDOWNPUZZLE_OFFSET))(this);
		}

		::System::Void ActivateBullet(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ACTIVATEBULLET_OFFSET))(this, a1, a2);
		}

		::System::Void UseBullet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_USEBULLET_OFFSET))(this);
		}

		::System::Void PickupBullet(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_PICKUPBULLET_OFFSET))(this, a1);
		}

		::System::Void HitTargets(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HITTARGETS_OFFSET))(this, a1, a2);
		}

		::System::Void BoomPropHitTargets(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BOOMPROPHITTARGETS_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Method_6_F206290BA342BA13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F206290BA342BA13_OFFSET))(this);
		}

		::System::Void Method_6_119DF0CE89C21899(::System::Nullable_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605>& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605>&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_119DF0CE89C21899_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_CF44BB80676FF7A6(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_CF44BB80676FF7A6_OFFSET))(this, a1);
		}

		::System::Void WaitStartup(::System::Single a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITSTARTUP_OFFSET))(this, a1, a2);
		}

		::System::Void UnWaitStartup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITSTARTUP_OFFSET))(this);
		}

		::System::Void WaitRestoreArchive(::System::Single a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITRESTOREARCHIVE_OFFSET))(this, a1, a2);
		}

		::System::Void UnWaitRestoreArchive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITRESTOREARCHIVE_OFFSET))(this);
		}

		::System::Void Archive(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ARCHIVE_OFFSET))(this, a1);
		}

		::System::Void RestoreArchive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESTOREARCHIVE_OFFSET))(this);
		}

		::System::Void ResetAchievementChase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETACHIEVEMENTCHASE_OFFSET))(this);
		}

		::System::Void InterruptedPlayerProjectiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INTERRUPTEDPLAYERPROJECTILES_OFFSET))(this);
		}

		::System::Void EnableTeleportTiming(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ENABLETELEPORTTIMING_OFFSET))(this, a1);
		}

		::System::Void Method_6_45AA2F5085C2C40D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_45AA2F5085C2C40D_OFFSET))(this);
		}

		::System::Void Method_6_7243ADD7DCCD2F93(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_7243ADD7DCCD2F93_OFFSET))(this, a1);
		}

		::System::Void Method_6_39845204DD04FC33(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_39845204DD04FC33_OFFSET))(this, a1);
		}

		::System::Void Method_6_B014C83A11FE985E(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B014C83A11FE985E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_D02F0567C550BE1C(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D02F0567C550BE1C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_B5C3166189D9374C(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B5C3166189D9374C_OFFSET))(this, a1);
		}

		::System::Void Method_6_881A1C0293E74A8A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_881A1C0293E74A8A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_AE4D94368D34D119(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_AE4D94368D34D119_OFFSET))(this, a1);
		}

		::System::Void Method_6_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_6_8D61BE16C9463302()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_OFFSET))(this);
		}

		::System::Void Method_6_8D61BE16C9463302_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_1_OFFSET))(this);
		}

		::System::Void Method_6_9AD47D8DC12F1689(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9AD47D8DC12F1689_OFFSET))(this, a1);
		}

		::System::Void Method_6_8D61BE16C9463302_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_2_OFFSET))(this);
		}

		::System::Void Method_6_5F1A93F1BF7BAC2B(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_5F1A93F1BF7BAC2B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_CC95B1519A868AD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_CC95B1519A868AD0_OFFSET))(this);
		}

		::System::Void Method_6_DC029EEDE931ACB9(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DC029EEDE931ACB9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_DE1C1F4DF5D06882_1(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_DE1C1F4DF5D06882_2(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_EBAC71FBE1837205()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EBAC71FBE1837205_OFFSET))(this);
		}

		::System::Void Method_6_EBAC71FBE1837205_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EBAC71FBE1837205_1_OFFSET))(this);
		}

		::System::Void Method_6_1754A6BBAA1C72DD(::Class_1_21DCD4640D389503_42* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_1754A6BBAA1C72DD_OFFSET))(this, a1);
		}

		::System::Void Method_6_7E7F03005FFBCB2E(::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_7E7F03005FFBCB2E_OFFSET))(this, a1);
		}

		::System::Void Method_6_8D61BE16C9463302_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_3_OFFSET))(this);
		}

		::System::Void Method_6_7223CD34BEFCBF48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_7223CD34BEFCBF48_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_6_E08B4BAE62D9AAD5(::UnityEngine::Vector3Int& a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::Vector3Int&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_E08B4BAE62D9AAD5_OFFSET))(this, a1);
		}

		::System::Void Method_6_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3C111959D3BB5616_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_D824A072379CF8DA(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D824A072379CF8DA_OFFSET))(this, a1);
		}

		::System::Void Method_6_0D64F99BAAA7B5C4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_0D64F99BAAA7B5C4_OFFSET))(this, a1);
		}

		::System::Void Method_6_70595BBE3E0E4F2A(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_70595BBE3E0E4F2A_OFFSET))(this, a1);
		}

		::System::Void Method_6_926A87EF7B2C87F9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_926A87EF7B2C87F9_OFFSET))(this, a1);
		}

		::System::Void Method_6_F37CDBD6D46274D2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F37CDBD6D46274D2_OFFSET))(this, a1);
		}

		::System::Void Method_6_926A87EF7B2C87F9_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_926A87EF7B2C87F9_1_OFFSET))(this, a1);
		}

		static ::Class_1_20D743894CDF214D_1* Method_6_854CB545243705CE(::Struct_2_C40BD9CA381B92A3& a1)
		{
			return ((::Class_1_20D743894CDF214D_1*(*)(::Struct_2_C40BD9CA381B92A3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_854CB545243705CE_OFFSET))(a1);
		}

		static ::Class_1_EA5A5E4D07C4CF2B_1* Method_6_9EBD28FD8FFC1A2A(::UnityEngine::Vector3 a1)
		{
			return ((::Class_1_EA5A5E4D07C4CF2B_1*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9EBD28FD8FFC1A2A_OFFSET))(a1);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> Method_6_D7B51E636B36E189(::Class_1_20D743894CDF214D_1* a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::Class_1_20D743894CDF214D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D7B51E636B36E189_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 Method_6_D85A69A177ED1ECC(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D85A69A177ED1ECC_OFFSET))(a1);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void Method_6_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_19CCC07C980409E4_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMiniState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISMINISTATE_OFFSET))(this);
		}

		::System::Void Method_6_6423291ED13007B8(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_6423291ED13007B8_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBulletActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISBULLETACTIVATED_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CachedCameraAxis()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_CACHEDCAMERAAXIS_OFFSET))(this);
		}

		::System::Void set_CachedCameraAxis(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_CACHEDCAMERAAXIS_OFFSET))(this, a1);
		}

		::System::Void ReportMonsterAlert(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERALERT_OFFSET))(this, a1);
		}

		::System::Void ReportMonsterChase(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERCHASE_OFFSET))(this, a1);
		}

		::System::Void ReportPushProp(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROP_OFFSET))(this, a1, a2);
		}

		::System::Void ReportPushLook(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHLOOK_OFFSET))(this, a1);
		}

		::System::Void ReportPushHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIT_OFFSET))(this, a1);
		}

		::System::Void ReportPushHide(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIDE_OFFSET))(this, a1);
		}

		::System::Void ReportPushTV(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHTV_OFFSET))(this, a1);
		}

		::System::Void ReportPushPropHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROPHIT_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_B8817F4F77EFC234()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B8817F4F77EFC234_OFFSET))(this);
		}

		::System::String* Method_6_741FA71FA66D57DE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_741FA71FA66D57DE_OFFSET))(this, a1);
		}

		::System::String* Method_6_28BB8707B4CC88A2(::UnityEngine::Vector3 a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_28BB8707B4CC88A2_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::WolfBroPuzzleBoard* get_Instance()
		{
			return ((::RPG::Client::Prop::WolfBroPuzzleBoard*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::Prop::WolfBroPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::WolfBroPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_INSTANCE_OFFSET))(a1);
		}
	};
}

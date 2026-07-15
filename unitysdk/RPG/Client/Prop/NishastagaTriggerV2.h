#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/NishastagaTriggerV2_GameState.h"
#include "unitysdk/RPG/Client/Prop/NishastagaTriggerV2_Struct_2_92C12A5A5A66B2B9_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x148526F0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14852740)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_GET_OWNENTITY_OFFSET UNITYSDK_OFFSET(0x14853340)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x148529A0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x148554F0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x148548D0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14854CF0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_56E076CBC69B0772_OFFSET UNITYSDK_OFFSET(0x14853AF0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_58FD8BDD015C3AAA_OFFSET UNITYSDK_OFFSET(0x14855320)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0x14855170)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_D12268C88ECA46C9_OFFSET UNITYSDK_OFFSET(0x14854930)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_E56F8427A428D42C_OFFSET UNITYSDK_OFFSET(0x14853520)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x148549E0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_F8B57AB93A05117D_OFFSET UNITYSDK_OFFSET(0x14853F10)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x14854DD0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14854D40)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_RESETITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x14855120)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_RESET_OFFSET UNITYSDK_OFFSET(0x14852570)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_SETITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x14855030)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_SPAWNED_OFFSET UNITYSDK_OFFSET(0x14852520)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2__CCTOR_OFFSET UNITYSDK_OFFSET(0x148557C0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2__CTOR_OFFSET UNITYSDK_OFFSET(0x14855730)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int NishastagaTriggerV2_TypeDefinitionIndex = 75004;

	class NishastagaTriggerV2 : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NishastagaTriggerV2_TypeDefinitionIndex)->GetStaticField(0x5620);
		}
		static ::System::String** StaticGet_Field_5_1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NishastagaTriggerV2_TypeDefinitionIndex)->GetStaticField(0x5628);
		}
		static ::System::String** StaticGet_Field_5_2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NishastagaTriggerV2_TypeDefinitionIndex)->GetStaticField(0x5630);
		}
		static ::System::String** StaticGet_Field_5_3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NishastagaTriggerV2_TypeDefinitionIndex)->GetStaticField(0x5638);
		}
		static ::System::String** StaticGet_Field_5_4()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NishastagaTriggerV2_TypeDefinitionIndex)->GetStaticField(0x5640);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NishastagaTriggerV2_TypeDefinitionIndex)->GetStaticField(0x31A0);
		}
		::System::Single CamDistanceRangeX; // 0x18
		::System::Single CamDistanceRangeY; // 0x1C
		::System::Single CamDistanceRangeZ; // 0x20
		::System::Single TriggerThresold; // 0x24
		::System::Single TriggerItemAlignAngleThresold; // 0x28
		::System::Boolean IsInMatched; // 0x2C
		::System::Boolean IsGameFinished; // 0x2D
		::System::Collections::Generic::List_1<::System::String*>* PuzzleGameItemPaths; // 0x30
		::System::String* PuzzleGameModelArtNodePath; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* PuzzleGameItems; // 0x40
		::Il2CppArray<::RPG::Client::Prop::NishastagaTriggerV2_Struct_2_92C12A5A5A66B2B9_1>* PuzzleGameItemAttachPoints; // 0x48
		::UnityEngine::Transform* CameraTarget; // 0x50
		::UnityEngine::Transform* TargetCamTrans; // 0x58
		::System::Single MainColorScaleMin; // 0x60
		::System::Single MainColorScaleMax; // 0x64
		::System::Boolean IsAutoAdsorbOn; // 0x68
		::System::Boolean ShowDebug; // 0x69
		::System::Single ScreenDiffDistanceX; // 0x6C
		::System::Single ScreenDiffDistanceY; // 0x70
		::System::Single Field_5_25; // 0x74
		::RPG::Client::Prop::NishastagaTriggerV2_GameState Field_5_26; // 0x78
		::System::Single Field_5_27; // 0x7C
		::System::Single Field_5_28; // 0x80
		::System::Single Field_5_29; // 0x84
		::System::Single Field_5_30; // 0x88
		::System::Single _Intensity; // 0x8C
		::RPG::GameCore::EventManager* Field_5_32; // 0x90
		::RPG::Client::PipelineCameraEngine* Field_5_33; // 0x98
		::UnityEngine::Animator* Field_5_34; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_5_35; // 0xA8
		::RPG::GameCore::GameEntity* Field_5_36; // 0xB0
		::RPG::GameCore::GameEntity* Field_5_37; // 0xB8
		::RPG::GameCore::PropComponent* Field_5_38; // 0xC0
		::System::UInt32 Field_5_39; // 0xC8
		::System::UInt32 Field_5_40; // 0xCC
		::System::UInt32 Field_5_41; // 0xD0
		::System::Boolean Field_5_42; // 0xD4
		::System::Boolean Field_5_43; // 0xD5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2__CCTOR_OFFSET))();
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_DESPAWNED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_DISPOSE_OFFSET))(this);
		}

		::System::Void SetItemAttachPoint(::System::Int32 a1, ::RPG::GameCore::PropComponent* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PropComponent*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_SETITEMATTACHPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetItemAttachPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_RESETITEMATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Single Method_5_F8B57AB93A05117D()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_F8B57AB93A05117D_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_5_56E076CBC69B0772()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_56E076CBC69B0772_OFFSET))(this);
		}

		::System::Void Method_5_C436A2848092EB88()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_C436A2848092EB88_OFFSET))(this);
		}

		::System::Boolean Method_5_E56F8427A428D42C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_E56F8427A428D42C_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_D12268C88ECA46C9(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_D12268C88ECA46C9_OFFSET))(this, a1);
		}

		::System::Void Method_5_58FD8BDD015C3AAA(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_58FD8BDD015C3AAA_OFFSET))(this, a1);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_E69AA2E64A20143D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_E69AA2E64A20143D_OFFSET))(this);
		}

		::System::Void Method_5_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_METHOD_5_F978A1D172468895_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_GET_OWNENTITY_OFFSET))(this);
		}
	};
}

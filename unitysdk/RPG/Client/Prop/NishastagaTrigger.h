#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/NishastagaTrigger_Struct_2_92C12A5A5A66B2B9.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xAE56010)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE56060)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_GET_OWNENTITY_OFFSET UNITYSDK_OFFSET(0xAE56D00)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAE562A0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_08F9FF6C133CB787_OFFSET UNITYSDK_OFFSET(0xAE57700)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xAE58C10)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAE58080)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAE583F0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0xAE58890)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_6B1192ED4B83CD8F_OFFSET UNITYSDK_OFFSET(0xAE57310)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_87B9DBEA11CD8D35_OFFSET UNITYSDK_OFFSET(0xAE56DB0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0xAE58A60)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xAE580E0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xAE584E0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAE58440)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_RESETITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xAE58840)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_RESET_OFFSET UNITYSDK_OFFSET(0xAE55E90)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_SETITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xAE58740)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xAE55E40)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE58F20)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAE58E50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int NishastagaTrigger_TypeDefinitionIndex = 72455;

	class NishastagaTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_39()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NishastagaTrigger_TypeDefinitionIndex)->GetStaticField(0xC230);
		}
		static ::System::Int32* StaticGet_Field_5_40()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NishastagaTrigger_TypeDefinitionIndex)->GetStaticField(0x48F0);
		}
		// static const ::System::String* Field_5_41; // 0x0
		// static const ::System::String* Field_5_42; // 0x0
		::System::Single CamDistanceRangeX; // 0x18
		::System::Single CamDistanceRangeY; // 0x1C
		::System::Single CamDistanceRangeZ; // 0x20
		::System::Single TriggerThresold; // 0x24
		::System::Single TriggerItemAlignAngleThresold; // 0x28
		::System::Boolean IsInMatched; // 0x2C
		::System::String* SuccessTriggerCustomString; // 0x30
		::System::String* MatchedTriggerCustomString; // 0x38
		::System::String* UnMatchedTriggerCustomString; // 0x40
		::System::Boolean IsGameFinished; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* PuzzleGameItemPaths; // 0x50
		::System::String* PuzzleGameModelArtNodePath; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* PuzzleGameItems; // 0x60
		::Il2CppArray<::RPG::Client::Prop::NishastagaTrigger_Struct_2_92C12A5A5A66B2B9>* PuzzleGameItemAttachPoints; // 0x68
		::UnityEngine::Transform* CameraTarget; // 0x70
		::UnityEngine::Transform* TargetCamTrans; // 0x78
		::System::Single MainColorScaleMin; // 0x80
		::System::Single MainColorScaleMax; // 0x84
		::System::Boolean IsAutoAdsorbOn; // 0x88
		::System::Boolean ShowDebug; // 0x89
		::System::Single ScreenDiffDistanceX; // 0x8C
		::System::Single ScreenDiffDistanceY; // 0x90
		::System::Single Field_5_22; // 0x94
		::System::Single Field_5_23; // 0x98
		::System::Single Field_5_24; // 0x9C
		::System::Single Field_5_25; // 0xA0
		::System::Single Field_5_26; // 0xA4
		::System::Boolean Field_5_27; // 0xA8
		::System::Single _Intensity; // 0xAC
		::System::Boolean _IsGameStart; // 0xB0
		::RPG::Client::PipelineCameraEngine* Field_5_30; // 0xB8
		::UnityEngine::Animator* Field_5_31; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_5_32; // 0xC8
		::RPG::GameCore::GameEntity* Field_5_33; // 0xD0
		::RPG::GameCore::PropComponent* Field_5_34; // 0xD8
		::System::UInt32 Field_5_35; // 0xE0
		::System::UInt32 Field_5_36; // 0xE4
		::System::Boolean Field_5_37; // 0xE8
		::System::Boolean Field_5_38; // 0xE9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER__CCTOR_OFFSET))();
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_DESPAWNED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetItemAttachPoint(::System::Int32 a1, ::RPG::GameCore::PropComponent* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PropComponent*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_SETITEMATTACHPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetItemAttachPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_RESETITEMATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Single Method_5_08F9FF6C133CB787()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_08F9FF6C133CB787_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_5_6B1192ED4B83CD8F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_6B1192ED4B83CD8F_OFFSET))(this);
		}

		::System::Void Method_5_5587AE4B03E68C58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_5587AE4B03E68C58_OFFSET))(this);
		}

		::System::Boolean Method_5_87B9DBEA11CD8D35()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_87B9DBEA11CD8D35_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_E52C357E96F7A058(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_E52C357E96F7A058_OFFSET))(this, a1);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_E69AA2E64A20143D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_E69AA2E64A20143D_OFFSET))(this);
		}

		::System::Void Method_5_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_METHOD_5_F978A1D172468895_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_GET_OWNENTITY_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceGroupInstance_Area.h"
#include "unitysdk/RPG/Client/AudienceGroupInstance_Struct_2_A82CA6E3A9569B51.h"
#include "unitysdk/RPG/Client/AudienceLayoutConfig_DensityLevel.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_CellConfig.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_EPositionPoseType.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DD9E5E2B969CDC;
class Class_1_9EC4E7AA0D2CB231;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class AudienceLayoutConfig; }
namespace RPG::Client { class AudiencePrefabConfig; }
namespace RPG::Client { class AudienceStanceConfig; }
namespace RPG::GameCore { class LevelAudienceMemberCurveInfo; }
namespace RPG::GameCore { class LevelAudienceMemberInfo; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GETAUDIENCEMOODMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1B33FC50)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B343370)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x1B343360)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_LAYOUTPATH_OFFSET UNITYSDK_OFFSET(0x1B33D160)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1B343390)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_RENDERERENABLE_OFFSET UNITYSDK_OFFSET(0x1B3433D0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_STANCEPATH_OFFSET UNITYSDK_OFFSET(0x1B33D180)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1B3433B0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_LOADSAVEDSTATE_OFFSET UNITYSDK_OFFSET(0x1B343130)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_1A50841E1CAE02B1_OFFSET UNITYSDK_OFFSET(0x1B33F100)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_3E17618FA0E6F9B0_OFFSET UNITYSDK_OFFSET(0x1B33F030)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_3EC6749BD0DFCDFF_OFFSET UNITYSDK_OFFSET(0x1B33D1F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_3F20CF295C4129C4_OFFSET UNITYSDK_OFFSET(0x1B342210)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_422C87C2B59A6581_OFFSET UNITYSDK_OFFSET(0x1B33D390)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_583F22C05CEA8706_OFFSET UNITYSDK_OFFSET(0x1B33F890)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_66DFBEC278B2197F_OFFSET UNITYSDK_OFFSET(0x1B33F380)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_6C17AD4DF6713163_OFFSET UNITYSDK_OFFSET(0x1B33FD90)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_7C6115732D5E6CAB_OFFSET UNITYSDK_OFFSET(0x1B33F170)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_7F72D3046872B8AC_OFFSET UNITYSDK_OFFSET(0x1B3423F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_81BFB84A5077EF23_OFFSET UNITYSDK_OFFSET(0x1B33FB10)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_9B97A1AD8285B007_OFFSET UNITYSDK_OFFSET(0x1B342660)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_C73CBB2E1F3BBA7B_OFFSET UNITYSDK_OFFSET(0x1B3432E0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_E5557A57B589524B_OFFSET UNITYSDK_OFFSET(0x1B33F6F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_FB8BD2D3A3A27E57_OFFSET UNITYSDK_OFFSET(0x1B33F640)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_NOTIFYANIMGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1B342EE0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B33CF40)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONLAYOUTLOADED_OFFSET UNITYSDK_OFFSET(0x1B33D1A0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONSTANCELOADED_OFFSET UNITYSDK_OFFSET(0x1B33D340)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_RESTART_OFFSET UNITYSDK_OFFSET(0x1B342940)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SAVESTATE_OFFSET UNITYSDK_OFFSET(0x1B3430E0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SETRENDERERENABLE_OFFSET UNITYSDK_OFFSET(0x1B342D40)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B343380)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1B3433A0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1B3433C0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_STARTUP_OFFSET UNITYSDK_OFFSET(0x1B3427F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0x1B342BB0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3433F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3433E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceGroupInstance_TypeDefinitionIndex = 69105;

	class AudienceGroupInstance : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_CrowdQualityStrs()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AudienceGroupInstance_TypeDefinitionIndex)->GetStaticField(0x5A5D0);
		}
		::RPG::Client::AudienceLayoutConfig* KGDIKFPFFMN; // 0x18
		::RPG::Client::AudienceStanceConfig* JKBAKAOKELK; // 0x20
		::RPG::GameCore::LevelCurveInstance* PNOHBBMHGLB; // 0x28
		::System::Boolean HKOPHLNFBIO; // 0x30
		::Class_1_9EC4E7AA0D2CB231* MHAEBFAEFCG; // 0x38
		::System::Collections::Generic::List_1<::Class_1_52DD9E5E2B969CDC*>* CHGEEINKDII; // 0x40
		::RPG::Client::AudienceGroupInstance_Struct_2_A82CA6E3A9569B51 PHJGDGGICLI; // 0x48
		::System::Boolean BLPDPHFBBIJ; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::System::Int32>* IBNFLLDOHMI; // 0x60
		::System::String* clipGroupName; // 0x68
		::Il2CppArray<::RPG::Client::AudienceGroupInstance_Area>* areas; // 0x70
		::System::UInt32 _ID_k__BackingField; // 0x78
		::RPG::GameCore::LevelAudienceMemberInfo* _MemberInfo_k__BackingField; // 0x80
		::System::Boolean _Visible_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE__CCTOR_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONDESTROY_OFFSET))(this);
		}

		::System::String* get_LayoutPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_LAYOUTPATH_OFFSET))(this);
		}

		::System::String* get_StancePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_STANCEPATH_OFFSET))(this);
		}

		::System::Void OnLayoutLoaded(::RPG::Client::AudienceLayoutConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONLAYOUTLOADED_OFFSET))(this, a1);
		}

		::System::Void OnStanceLoaded(::RPG::Client::AudienceStanceConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceStanceConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONSTANCELOADED_OFFSET))(this, a1);
		}

		::System::Void Method_5_422C87C2B59A6581(::RPG::Client::AudienceLayoutConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_422C87C2B59A6581_OFFSET))(this, a1);
		}

		::System::Void Method_5_6C17AD4DF6713163(::RPG::Client::AudienceLayoutConfig* a1, ::RPG::GameCore::LevelCurveInstance* a2, ::Il2CppArray<::RPG::GameCore::LevelAudienceMemberCurveInfo*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::RPG::GameCore::LevelCurveInstance*, ::Il2CppArray<::RPG::GameCore::LevelAudienceMemberCurveInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_6C17AD4DF6713163_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* Method_5_81BFB84A5077EF23(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_81BFB84A5077EF23_OFFSET))(a1);
		}

		::System::Boolean Method_5_3E17618FA0E6F9B0(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_3E17618FA0E6F9B0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_7C6115732D5E6CAB(::Collections::Pooled::PooledList_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::AudienceLayoutConfig_DensityLevel& a4)
		{
			return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::RPG::Client::AudienceLayoutConfig_DensityLevel&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_7C6115732D5E6CAB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_EPositionPoseType>>* Method_5_FB8BD2D3A3A27E57(::UnityEngine::Vector2 a1, ::RPG::Client::AudienceStanceConfig_CellConfig a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_EPositionPoseType>>*(*)(::PVOID, ::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_CellConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_FB8BD2D3A3A27E57_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AudienceStanceConfig_CellConfig Method_5_66DFBEC278B2197F(::System::Int32 a1)
		{
			return ((::RPG::Client::AudienceStanceConfig_CellConfig(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_66DFBEC278B2197F_OFFSET))(this, a1);
		}

		::System::String* Method_5_583F22C05CEA8706(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_583F22C05CEA8706_OFFSET))(this, a1);
		}

		::RPG::Client::AudiencePrefabConfig* Method_5_E5557A57B589524B(::RPG::Client::AudienceLayoutConfig* a1, ::RPG::GameCore::NPCBodySize& a2)
		{
			return ((::RPG::Client::AudiencePrefabConfig*(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::RPG::GameCore::NPCBodySize&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_E5557A57B589524B_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AudienceLayoutConfig_DensityLevel Method_5_1A50841E1CAE02B1(::RPG::Client::AudienceLayoutConfig* a1)
		{
			return ((::RPG::Client::AudienceLayoutConfig_DensityLevel(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_1A50841E1CAE02B1_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_7F72D3046872B8AC(::RPG::Client::AudienceLayoutConfig* a1, ::RPG::GameCore::NPCBodySize& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::RPG::GameCore::NPCBodySize&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_7F72D3046872B8AC_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 Method_5_3F20CF295C4129C4(::RPG::Client::AudienceLayoutConfig_DensityLevel& a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::RPG::Client::AudienceLayoutConfig_DensityLevel&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_3F20CF295C4129C4_OFFSET))(a1, a2);
		}

		static ::System::Single Method_5_9B97A1AD8285B007()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_9B97A1AD8285B007_OFFSET))();
		}

		::System::Void Startup(::Class_1_9EC4E7AA0D2CB231* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9EC4E7AA0D2CB231*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_STARTUP_OFFSET))(this, a1);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_RESTART_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Void SetRendererEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SETRENDERERENABLE_OFFSET))(this, a1);
		}

		::System::Void NotifyAnimGroupChanged(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_NOTIFYANIMGROUPCHANGED_OFFSET))(this, a1);
		}

		::System::Void SaveState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SAVESTATE_OFFSET))(this);
		}

		::System::Void LoadSavedState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_LOADSAVEDSTATE_OFFSET))(this);
		}

		::System::String* GetAudienceMoodMapConfigPath(::RPG::Client::AudiencePrefabConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AudiencePrefabConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GETAUDIENCEMOODMAPCONFIGPATH_OFFSET))(this, a1);
		}

		::System::Void Method_5_3EC6749BD0DFCDFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_3EC6749BD0DFCDFF_OFFSET))(this);
		}

		::System::Void Method_5_C73CBB2E1F3BBA7B(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_METHOD_5_C73CBB2E1F3BBA7B_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_ISSTARTED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelAudienceMemberInfo* get_MemberInfo()
		{
			return ((::RPG::GameCore::LevelAudienceMemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_MEMBERINFO_OFFSET))(this);
		}

		::System::Void set_MemberInfo(::RPG::GameCore::LevelAudienceMemberInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAudienceMemberInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_MEMBERINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_RendererEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_RENDERERENABLE_OFFSET))(this);
		}
	};
}

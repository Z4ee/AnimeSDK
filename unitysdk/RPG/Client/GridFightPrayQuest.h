#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_38.h"
#include "unitysdk/RPG/Client/GridFightPrayQuest_QuestStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPrayType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_873;
class Class_1_419A79D235B9417C_3;
class Class_1_DE6E491FE63D8E69_2;
class Class_2_BF190E5AD854BD93;
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client { class GridFightPrayQuestConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEFATEPRAYSELECTION_OFFSET UNITYSDK_OFFSET(0x1CA599F0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_1_OFFSET UNITYSDK_OFFSET(0x1CA59F30)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_OFFSET UNITYSDK_OFFSET(0x1CA59C90)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_FINISH_OFFSET UNITYSDK_OFFSET(0x1CA5A2D0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0x1CA5AE60)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETPARAM_OFFSET UNITYSDK_OFFSET(0x1CA5AEF0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ACCEPTABLE_OFFSET UNITYSDK_OFFSET(0x1CA5A690)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1CA5A320)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CA5AB10)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FINISHED_OFFSET UNITYSDK_OFFSET(0x1CA5A700)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FIRSTBONUS_OFFSET UNITYSDK_OFFSET(0x1CA5A5E0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FROMTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1CA5AF60)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0x1CA5ADD0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CA5A6B0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1CA5A750)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1CA5A940)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_NOUNDERLINEDESC_OFFSET UNITYSDK_OFFSET(0x1CA5AC70)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1CA5A9C0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1CA5A650)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_QUESTDESC_OFFSET UNITYSDK_OFFSET(0x1CA5A340)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_RAWDESC_OFFSET UNITYSDK_OFFSET(0x1CA5AA90)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1CA5A670)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_ACCEPTABLE_OFFSET UNITYSDK_OFFSET(0x1CA5A6A0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1CA5A330)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1CA5A660)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1CA5A680)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1CA59D40)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_OFFSET UNITYSDK_OFFSET(0x1CA59B60)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA5AFB0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA59AA0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST__SETUPBONUS_OFFSET UNITYSDK_OFFSET(0x1CA5A1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuest_TypeDefinitionIndex = 65146;

	class GridFightPrayQuest : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::Class_2_BF190E5AD854BD93** StaticGet__DescCompiler()
		{
			return (::Class_2_BF190E5AD854BD93**)Il2CppClass::FromTypeDefinitionIndex(GridFightPrayQuest_TypeDefinitionIndex)->GetStaticField(0x3D910);
		}
		::Il2CppArray<::System::UInt32>* _AddSourceParam; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* Bonus; // 0x20
		::RPG::Client::GridFightPrayQuestConfig* _Config_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_873* _Valider; // 0x30
		::Enum_3_0A3761FE34514D6C_38 _AddSource; // 0x38
		::System::Boolean _Acceptable_k__BackingField; // 0x3C
		::RPG::Client::GridFightPrayQuest_QuestStatus _Status_k__BackingField; // 0x40
		::System::UInt32 _Progress_k__BackingField; // 0x44

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightPrayQuest* CreateFatePraySelection(::Class_1_DE6E491FE63D8E69_2* a1)
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::Class_1_DE6E491FE63D8E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEFATEPRAYSELECTION_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPrayQuest* CreatePrayQuest(::Class_1_419A79D235B9417C_3* a1)
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::Class_1_419A79D235B9417C_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPrayQuest* CreatePrayQuest_1(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>* a2)
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_1_OFFSET))(a1, a2);
		}

		::System::Void Sync(::Class_1_DE6E491FE63D8E69_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DE6E491FE63D8E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_419A79D235B9417C_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void _SetupBonus(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST__SETUPBONUS_OFFSET))(this, a1);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_FINISH_OFFSET))(this);
		}

		::RPG::Client::GridFightPrayQuestConfig* get_Config()
		{
			return ((::RPG::Client::GridFightPrayQuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightPrayQuestConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_QuestDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_QUESTDESC_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusDropData* get_FirstBonus()
		{
			return ((::RPG::Client::GridFightBonusDropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FIRSTBONUS_OFFSET))(this);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_PROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPrayQuest_QuestStatus get_Status()
		{
			return ((::RPG::Client::GridFightPrayQuest_QuestStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::GridFightPrayQuest_QuestStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuest_QuestStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_Acceptable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ACCEPTABLE_OFFSET))(this);
		}

		::System::Void set_Acceptable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_ACCEPTABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_InProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_INPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_Finished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISENABLED_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPrayType get_PrayType()
		{
			return ((::RPG::GameCore::GridFightPrayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PRAYTYPE_OFFSET))(this);
		}

		::System::String* get_RawDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_RAWDESC_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_DESC_OFFSET))(this);
		}

		::System::String* get_NoUnderLineDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_NOUNDERLINEDESC_OFFSET))(this);
		}

		::System::Boolean get_HasDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_HASDETAIL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		::System::UInt32 GetParam(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETPARAM_OFFSET))(this, a1);
		}

		::System::Boolean get_FromTraitEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FROMTRAITEFFECT_OFFSET))(this);
		}
	};
}

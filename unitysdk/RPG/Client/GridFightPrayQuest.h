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

#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEFATEPRAYSELECTION_OFFSET UNITYSDK_OFFSET(0xD2EA1D0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_1_OFFSET UNITYSDK_OFFSET(0xD2EA710)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_OFFSET UNITYSDK_OFFSET(0xD2EA470)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_FINISH_OFFSET UNITYSDK_OFFSET(0xD2EAAB0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0xD2EB640)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETPARAM_OFFSET UNITYSDK_OFFSET(0xD2EB6D0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ACCEPTABLE_OFFSET UNITYSDK_OFFSET(0xD2EAE70)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD2EAB00)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD2EB2F0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FINISHED_OFFSET UNITYSDK_OFFSET(0xD2EAEE0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FIRSTBONUS_OFFSET UNITYSDK_OFFSET(0xD2EADC0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FROMTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xD2EB740)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0xD2EB5B0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0xD2EAE90)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xD2EAF30)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xD2EB120)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_NOUNDERLINEDESC_OFFSET UNITYSDK_OFFSET(0xD2EB450)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PRAYTYPE_OFFSET UNITYSDK_OFFSET(0xD2EB1A0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xD2EAE30)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_QUESTDESC_OFFSET UNITYSDK_OFFSET(0xD2EAB20)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_RAWDESC_OFFSET UNITYSDK_OFFSET(0xD2EB270)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xD2EAE50)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_ACCEPTABLE_OFFSET UNITYSDK_OFFSET(0xD2EAE80)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD2EAB10)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xD2EAE40)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xD2EAE60)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_1_OFFSET UNITYSDK_OFFSET(0xD2EA520)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_OFFSET UNITYSDK_OFFSET(0xD2EA340)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0xD2EB790)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xD2EA280)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST__SETUPBONUS_OFFSET UNITYSDK_OFFSET(0xD2EA9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuest_TypeDefinitionIndex = 65146;

	class GridFightPrayQuest : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::Class_2_BF190E5AD854BD93** StaticGet__DescCompiler()
		{
			return (::Class_2_BF190E5AD854BD93**)Il2CppClass::FromTypeDefinitionIndex(GridFightPrayQuest_TypeDefinitionIndex)->GetStaticField(0x43370);
		}
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* Bonus; // 0x18
		::RPG::Client::GridFightPrayQuestConfig* _Config_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _AddSourceParam; // 0x28
		::Class_0_16E4307DCC419505_873* _Valider; // 0x30
		::Enum_3_0A3761FE34514D6C_38 _AddSource; // 0x38
		::RPG::Client::GridFightPrayQuest_QuestStatus _Status_k__BackingField; // 0x3C
		::System::Boolean _Acceptable_k__BackingField; // 0x40
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

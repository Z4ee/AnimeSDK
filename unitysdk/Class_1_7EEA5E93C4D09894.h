#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamTowers/TeamTowersStageDifficultyType.h"
#include "unitysdk/System/Object.h"

class Class_1_115297B50AB60A5D_1;
class Class_1_2AE7FBE19C7FFFCD;
class Class_1_47CFC2D7B3865B39;
class Class_1_97E659ED8D5D259C_20;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client::TeamTowers { class TeamTowersBossData; }
namespace RPG::Client::TeamTowers { class TeamTowersDepartmentData; }
namespace RPG::Client::TeamTowers { class TeamTowersLevelData; }
namespace RPG::Client::TeamTowers { class TeamTowersRobotData; }
namespace RPG::Client::TeamTowers { class TeamTowersStageData; }
namespace RPG::Client::TeamTowers { class TeamTowersStageGroupData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7EEA5E93C4D09894_GET_BOSSSTAGEID_OFFSET UNITYSDK_OFFSET(0x17AD3A20)
#define CLASS_1_7EEA5E93C4D09894_GET_CURDEPARTMENTDATA_OFFSET UNITYSDK_OFFSET(0x17AD3A40)
#define CLASS_1_7EEA5E93C4D09894_GET_CURSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x17AD3A80)
#define CLASS_1_7EEA5E93C4D09894_GET_CURSTAGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x17AD3A60)
#define CLASS_1_7EEA5E93C4D09894_GET_DEPARTMENTDATALIST_OFFSET UNITYSDK_OFFSET(0x17AD39C0)
#define CLASS_1_7EEA5E93C4D09894_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x17AD3AA0)
#define CLASS_1_7EEA5E93C4D09894_GET_PLAYERSKILLINFOLIST_OFFSET UNITYSDK_OFFSET(0x17AD39D0)
#define CLASS_1_7EEA5E93C4D09894_GET_PVPMODEDATA_OFFSET UNITYSDK_OFFSET(0x17AD3AC0)
#define CLASS_1_7EEA5E93C4D09894_GET_RESIDENTREWARDQUESTINFOS_OFFSET UNITYSDK_OFFSET(0x17AD39F0)
#define CLASS_1_7EEA5E93C4D09894_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x17AD3AB0)
#define CLASS_1_7EEA5E93C4D09894_GET_SUBMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x17AD39E0)
#define CLASS_1_7EEA5E93C4D09894_GET_TUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x17AD3A00)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x17AD2200)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x17AD3090)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x17AD2E30)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_2592BD93B135B397_OFFSET UNITYSDK_OFFSET(0x17AD3330)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_2A8751B8D14F2731_OFFSET UNITYSDK_OFFSET(0x17AD1900)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_2D8B82C4D1E1E4E6_OFFSET UNITYSDK_OFFSET(0x17AD15F0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_4B1A80A7EDD337A2_OFFSET UNITYSDK_OFFSET(0x17AD1C60)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_5AE3519CC07A9919_OFFSET UNITYSDK_OFFSET(0x17AD3650)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_65F8314FE9AF8BA8_OFFSET UNITYSDK_OFFSET(0x17AD3B80)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_7A2F869EA6CEC920_OFFSET UNITYSDK_OFFSET(0x17AD14F0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x17AD2B70)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x17AD28F0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_8F6B9A1D894B32B4_OFFSET UNITYSDK_OFFSET(0x17AD17A0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x17AD3570)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x17AD2770)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x17AD1460)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x17AD22D0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_9F51185C21230666_OFFSET UNITYSDK_OFFSET(0x17AD1A80)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x17AD1FF0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_AE286FBAF97C7213_OFFSET UNITYSDK_OFFSET(0x17AD3AE0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_AF22E162120CD5E6_OFFSET UNITYSDK_OFFSET(0x17AD1B60)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_B6E07CD385C1C182_OFFSET UNITYSDK_OFFSET(0x17AD37C0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_B6FE6E81B039A539_OFFSET UNITYSDK_OFFSET(0x17AD1680)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x17AD1DF0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x17AD3910)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_E10A809AE075CF77_OFFSET UNITYSDK_OFFSET(0x17AD19F0)
#define CLASS_1_7EEA5E93C4D09894_METHOD_1_ECAD7084C2C4F600_OFFSET UNITYSDK_OFFSET(0x17AD3150)
#define CLASS_1_7EEA5E93C4D09894_SET_BOSSSTAGEID_OFFSET UNITYSDK_OFFSET(0x17AD3A30)
#define CLASS_1_7EEA5E93C4D09894_SET_CURDEPARTMENTDATA_OFFSET UNITYSDK_OFFSET(0x17AD3A50)
#define CLASS_1_7EEA5E93C4D09894_SET_CURSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x17AD3A90)
#define CLASS_1_7EEA5E93C4D09894_SET_CURSTAGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x17AD3A70)
#define CLASS_1_7EEA5E93C4D09894_SET_PVPMODEDATA_OFFSET UNITYSDK_OFFSET(0x17AD3AD0)
#define CLASS_1_7EEA5E93C4D09894_SET_TUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x17AD3A10)
#define CLASS_1_7EEA5E93C4D09894__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD1140)

inline static constexpr unsigned int Class_1_7EEA5E93C4D09894_TypeDefinitionIndex = 75065;

class Class_1_7EEA5E93C4D09894 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EEA5E93C4D09894_TypeDefinitionIndex)->GetStaticField(0xE8E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersRobotData*>* Field_1_1; // 0x10
	::RPG::Client::TeamTowers::TeamTowersDepartmentData* _CurDepartmentData_k__BackingField; // 0x18
	::Class_1_2AE7FBE19C7FFFCD* _Settings_k__BackingField; // 0x20
	::RPG::Client::TeamTowers::TeamTowersLevelData* _LevelData_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersBossData*>* Field_1_5; // 0x30
	::RPG::Client::TeamTowers::TeamTowersStageData* _CurStageData_k__BackingField; // 0x38
	::System::Collections::Generic::List_1<::Class_1_47CFC2D7B3865B39*>* _PlayerSkillInfoList_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* _SubMissionIDList_k__BackingField; // 0x48
	::Class_1_115297B50AB60A5D_1* _PvpModeData_k__BackingField; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersBossData*>* Field_1_10; // 0x58
	::RPG::Client::TeamTowers::TeamTowersStageGroupData* _CurStageGroupData_k__BackingField; // 0x60
	::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersDepartmentData*>* _DepartmentDataList_k__BackingField; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersStageData*>* Field_1_13; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersStageGroupData*>* Field_1_14; // 0x78
	::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_20*>* _ResidentRewardQuestInfos_k__BackingField; // 0x80
	::System::UInt32 _TutorialStageID_k__BackingField; // 0x88
	::System::UInt32 Field_1_17; // 0x8C
	::System::UInt32 _BossStageID_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7A2F869EA6CEC920(::System::UInt32 a1, ::RPG::Client::TeamTowers::TeamTowersStageData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersStageData*&))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_7A2F869EA6CEC920_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B6FE6E81B039A539(::System::UInt32 a1, ::RPG::Client::TeamTowers::TeamTowersStageGroupData*& a2, ::RPG::Client::TeamTowers::TeamTowersDepartmentData*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TeamTowers::TeamTowersStageGroupData*&, ::RPG::Client::TeamTowers::TeamTowersDepartmentData*&))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_B6FE6E81B039A539_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::TeamTowers::TeamTowersDepartmentData* Method_1_2A8751B8D14F2731(::System::UInt32 a1)
	{
		return ((::RPG::Client::TeamTowers::TeamTowersDepartmentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_2A8751B8D14F2731_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::TeamTowersStageGroupData* Method_1_E10A809AE075CF77(::System::UInt32 a1)
	{
		return ((::RPG::Client::TeamTowers::TeamTowersStageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_E10A809AE075CF77_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::TeamTowersStageGroupData* Method_1_8F6B9A1D894B32B4(::System::UInt32 a1)
	{
		return ((::RPG::Client::TeamTowers::TeamTowersStageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_8F6B9A1D894B32B4_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::TeamTowersStageData* Method_1_2D8B82C4D1E1E4E6(::System::UInt32 a1)
	{
		return ((::RPG::Client::TeamTowers::TeamTowersStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_2D8B82C4D1E1E4E6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::TeamTowers::TeamTowersStageGroupData*>* Method_1_9F51185C21230666()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::TeamTowers::TeamTowersStageGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_9F51185C21230666_OFFSET))(this);
	}

	::RPG::Client::TeamTowers::TeamTowersBossData* Method_1_AF22E162120CD5E6(::System::UInt32 a1)
	{
		return ((::RPG::Client::TeamTowers::TeamTowersBossData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_AF22E162120CD5E6_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::TeamTowersRobotData* Method_1_4B1A80A7EDD337A2(::System::UInt32 a1)
	{
		return ((::RPG::Client::TeamTowers::TeamTowersRobotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_4B1A80A7EDD337A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_0E142E3463F30350_OFFSET))(this);
	}

	::RPG::Client::TeamTowers::TeamTowersDepartmentData* Method_1_ECAD7084C2C4F600(::System::UInt32 a1)
	{
		return ((::RPG::Client::TeamTowers::TeamTowersDepartmentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_ECAD7084C2C4F600_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::TeamTowersStageGroupData* Method_1_5AE3519CC07A9919(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::TeamTowers::TeamTowersStageGroupData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_5AE3519CC07A9919_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TeamTowers::TeamTowersStageData* Method_1_2592BD93B135B397(::System::UInt32 a1, ::System::Boolean a2, ::RPG::Client::TeamTowers::TeamTowersStageDifficultyType a3)
	{
		return ((::RPG::Client::TeamTowers::TeamTowersStageData*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::Client::TeamTowers::TeamTowersStageDifficultyType))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_2592BD93B135B397_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B6E07CD385C1C182()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_B6E07CD385C1C182_OFFSET))(this);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersDepartmentData*>* get_DepartmentDataList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersDepartmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_DEPARTMENTDATALIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_47CFC2D7B3865B39*>* get_PlayerSkillInfoList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_47CFC2D7B3865B39*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_PLAYERSKILLINFOLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_SubMissionIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_SUBMISSIONIDLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_20*>* get_ResidentRewardQuestInfos()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_20*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_RESIDENTREWARDQUESTINFOS_OFFSET))(this);
	}

	::System::UInt32 get_TutorialStageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_TUTORIALSTAGEID_OFFSET))(this);
	}

	::System::Void set_TutorialStageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_SET_TUTORIALSTAGEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BossStageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_BOSSSTAGEID_OFFSET))(this);
	}

	::System::Void set_BossStageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_SET_BOSSSTAGEID_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::TeamTowersDepartmentData* get_CurDepartmentData()
	{
		return ((::RPG::Client::TeamTowers::TeamTowersDepartmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_CURDEPARTMENTDATA_OFFSET))(this);
	}

	::System::Void set_CurDepartmentData(::RPG::Client::TeamTowers::TeamTowersDepartmentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersDepartmentData*))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_SET_CURDEPARTMENTDATA_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::TeamTowersStageGroupData* get_CurStageGroupData()
	{
		return ((::RPG::Client::TeamTowers::TeamTowersStageGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_CURSTAGEGROUPDATA_OFFSET))(this);
	}

	::System::Void set_CurStageGroupData(::RPG::Client::TeamTowers::TeamTowersStageGroupData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersStageGroupData*))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_SET_CURSTAGEGROUPDATA_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::TeamTowersStageData* get_CurStageData()
	{
		return ((::RPG::Client::TeamTowers::TeamTowersStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_CURSTAGEDATA_OFFSET))(this);
	}

	::System::Void set_CurStageData(::RPG::Client::TeamTowers::TeamTowersStageData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersStageData*))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_SET_CURSTAGEDATA_OFFSET))(this, a1);
	}

	::RPG::Client::TeamTowers::TeamTowersLevelData* get_LevelData()
	{
		return ((::RPG::Client::TeamTowers::TeamTowersLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_LEVELDATA_OFFSET))(this);
	}

	::Class_1_2AE7FBE19C7FFFCD* get_Settings()
	{
		return ((::Class_1_2AE7FBE19C7FFFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_SETTINGS_OFFSET))(this);
	}

	::Class_1_115297B50AB60A5D_1* get_PvpModeData()
	{
		return ((::Class_1_115297B50AB60A5D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_GET_PVPMODEDATA_OFFSET))(this);
	}

	::System::Void set_PvpModeData(::Class_1_115297B50AB60A5D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_115297B50AB60A5D_1*))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_SET_PVPMODEDATA_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityData* Method_1_AE286FBAF97C7213()
	{
		return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_AE286FBAF97C7213_OFFSET))(this);
	}

	::RPG::Client::ActivityPanelData* Method_1_65F8314FE9AF8BA8()
	{
		return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894_METHOD_1_65F8314FE9AF8BA8_OFFSET))(this);
	}
};

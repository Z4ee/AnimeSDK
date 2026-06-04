#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1222;
class Class_0_16E4307DCC419505_291;
class Class_1_06E38C65842C3B24;
class Class_1_19DB14C0C5CFE108;
class Class_1_2FDE33CCAE591AA8;
class Class_1_367B452FA4E5EC2C;
class Class_1_37CFE50712AC363B;
class Class_1_37CFE50712AC363B_Class_1_40144881BA5B5725;
class Class_1_74AFEC3818196291;
class Class_1_97E659ED8D5D259C_20;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetsViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_2700AEF5F7F75476_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF37250)
#define CLASS_1_2700AEF5F7F75476_GET_CURRENTSESSIONRECORD_OFFSET UNITYSDK_OFFSET(0xAF36A60)
#define CLASS_1_2700AEF5F7F75476_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xAF36AD0)
#define CLASS_1_2700AEF5F7F75476_GET_SHOWREWARDDETAILCOMMAND_OFFSET UNITYSDK_OFFSET(0xAF36D40)
#define CLASS_1_2700AEF5F7F75476_GET_STAGES_OFFSET UNITYSDK_OFFSET(0xAF36710)
#define CLASS_1_2700AEF5F7F75476_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xAF369C0)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xAF36A70)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_23E3B3870FFE035D_OFFSET UNITYSDK_OFFSET(0xAF36D20)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0xAF366A0)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_3C53DA12DB9FF1F8_OFFSET UNITYSDK_OFFSET(0xAF36650)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_46EC7FA4154496F0_OFFSET UNITYSDK_OFFSET(0xAF36A00)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xAF36630)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xAF36930)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_A4809B95D76424A4_OFFSET UNITYSDK_OFFSET(0xAF36790)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_A9F15F09FA44AF5B_OFFSET UNITYSDK_OFFSET(0xAF36740)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0xAF36BA0)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_B213056103887067_2_OFFSET UNITYSDK_OFFSET(0xAF36C60)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xAF36AE0)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xAF369D0)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xAF36720)
#define CLASS_1_2700AEF5F7F75476_METHOD_1_FACB3FFE6B08F210_OFFSET UNITYSDK_OFFSET(0xAF36680)
#define CLASS_1_2700AEF5F7F75476__CTOR_OFFSET UNITYSDK_OFFSET(0xAF36D50)
#define CLASS_1_2700AEF5F7F75476__GET_CONTINUECOMMAND_B__46_0_OFFSET UNITYSDK_OFFSET(0xAF37620)
#define CLASS_1_2700AEF5F7F75476__GET_CONTINUECOMMAND_B__46_1_OFFSET UNITYSDK_OFFSET(0xAF37840)
#define CLASS_1_2700AEF5F7F75476__GET_EXITCOMMAND_B__40_0_OFFSET UNITYSDK_OFFSET(0xAF375E0)
#define CLASS_1_2700AEF5F7F75476__GET_RESTARTCOMMAND_B__43_0_OFFSET UNITYSDK_OFFSET(0xAF37600)

inline static constexpr unsigned int Class_1_2700AEF5F7F75476_TypeDefinitionIndex = 74262;

class Class_1_2700AEF5F7F75476 : public ::System::Object
{
public:
	::Class_1_19DB14C0C5CFE108* Field_1_0; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_74AFEC3818196291*>* _RewardItems_k__BackingField; // 0x18
	::Class_1_2FDE33CCAE591AA8* Field_1_2; // 0x20
	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* _CurrentSessionRecord_k__BackingField; // 0x28
	::Class_1_367B452FA4E5EC2C* Field_1_4; // 0x30
	::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Targets_k__BackingField; // 0x38
	::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel* Field_1_6; // 0x40
	::Class_1_2FDE33CCAE591AA8* Field_1_7; // 0x48
	::Class_0_16E4307DCC419505_291* _ShowRewardDetailCommand_k__BackingField; // 0x50
	::Class_1_2FDE33CCAE591AA8* Field_1_9; // 0x58
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_37CFE50712AC363B*>* _Stages_k__BackingField; // 0x60
	::RPG::Client::ChallengeData* Field_1_11; // 0x68

	::System::Void _ctor(::Class_1_37CFE50712AC363B_Class_1_40144881BA5B5725* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel_Factory* a2, ::Class_0_16E4307DCC419505_1222* a3, ::Class_1_19DB14C0C5CFE108* a4, ::RPG::Client::ChallengeGroupData* a5, ::Class_1_367B452FA4E5EC2C* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37CFE50712AC363B_Class_1_40144881BA5B5725*, ::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel_Factory*, ::Class_0_16E4307DCC419505_1222*, ::Class_1_19DB14C0C5CFE108*, ::RPG::Client::ChallengeGroupData*, ::Class_1_367B452FA4E5EC2C*))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_06E38C65842C3B24* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_06E38C65842C3B24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_3C53DA12DB9FF1F8()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_3C53DA12DB9FF1F8_OFFSET))(this);
	}

	::RPG::GameCore::ChallengeGroupType Method_1_FACB3FFE6B08F210()
	{
		return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_FACB3FFE6B08F210_OFFSET))(this);
	}

	::Class_1_97E659ED8D5D259C_20* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_97E659ED8D5D259C_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_37CFE50712AC363B*>* get_Stages()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_37CFE50712AC363B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_GET_STAGES_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_A9F15F09FA44AF5B()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_A9F15F09FA44AF5B_OFFSET))(this);
	}

	::System::Boolean Method_1_A4809B95D76424A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_A4809B95D76424A4_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* get_Targets()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_GET_TARGETS_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_46EC7FA4154496F0()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_46EC7FA4154496F0_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* get_CurrentSessionRecord()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_GET_CURRENTSESSIONRECORD_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_74AFEC3818196291*>* get_RewardItems()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_74AFEC3818196291*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_GET_REWARDITEMS_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_291* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_291* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_291* Method_1_B213056103887067_2()
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_B213056103887067_2_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_291* Method_1_23E3B3870FFE035D()
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_METHOD_1_23E3B3870FFE035D_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_291* get_ShowRewardDetailCommand()
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_GET_SHOWREWARDDETAILCOMMAND_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476_DISPOSE_OFFSET))(this);
	}

	::System::Void _get_ExitCommand_b__40_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476__GET_EXITCOMMAND_B__40_0_OFFSET))(this);
	}

	::System::Void _get_RestartCommand_b__43_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476__GET_RESTARTCOMMAND_B__43_0_OFFSET))(this);
	}

	::System::Void _get_ContinueCommand_b__46_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476__GET_CONTINUECOMMAND_B__46_0_OFFSET))(this);
	}

	::System::Void _get_ContinueCommand_b__46_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476__GET_CONTINUECOMMAND_B__46_1_OFFSET))(this, a1);
	}
};

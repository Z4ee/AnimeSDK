#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanExtraScoreCalculatorConfig.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_1CE9F2AFE4D748E3;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E012D14DF64C55A_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x117DBA10)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_17F1016AFFC789DC_OFFSET UNITYSDK_OFFSET(0x117DBA80)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_363976B9E078CC60_OFFSET UNITYSDK_OFFSET(0x117DBA30)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_3DF6558CE04321F2_OFFSET UNITYSDK_OFFSET(0x117DBB30)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_49A2F40D60175E51_OFFSET UNITYSDK_OFFSET(0x117DC260)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_623903450D2F7EBD_OFFSET UNITYSDK_OFFSET(0x117DCDB0)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0x117DC960)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_7102A5C0F5F030D9_OFFSET UNITYSDK_OFFSET(0x117DCAA0)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_905405FD8277357E_OFFSET UNITYSDK_OFFSET(0x117DBDE0)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_92122B76695D5FE1_OFFSET UNITYSDK_OFFSET(0x117DCB00)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_BCB6509DBF286306_OFFSET UNITYSDK_OFFSET(0x117DC030)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_BE5BCC9D6444F736_OFFSET UNITYSDK_OFFSET(0x117DC6E0)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_D7800B0D319374B4_OFFSET UNITYSDK_OFFSET(0x117DC5B0)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_F7A0AD752D053A22_OFFSET UNITYSDK_OFFSET(0x117DC9C0)
#define CLASS_1_0E012D14DF64C55A_METHOD_1_F84A2984471987DF_OFFSET UNITYSDK_OFFSET(0x117DC200)
#define CLASS_1_0E012D14DF64C55A_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x117DBA20)
#define CLASS_1_0E012D14DF64C55A__CTOR_OFFSET UNITYSDK_OFFSET(0x117DBB20)

inline static constexpr unsigned int Class_1_0E012D14DF64C55A_TypeDefinitionIndex = 61183;

class Class_1_0E012D14DF64C55A : public ::System::Object
{
public:
	::Class_1_1CE9F2AFE4D748E3* Field_1_5; // 0x10
	::RPG::GameCore::AvatarRelicRecommendRow* Field_1_1; // 0x18
	::RPG::Client::IAvatarInfoProvider* Field_1_0; // 0x20
	::System::Single Field_1_2; // 0x28
	::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig _Config_k__BackingField; // 0x2C
	::System::Single Field_1_4; // 0x30
	::RPG::GameCore::FixPoint Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A__CTOR_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig get_Config()
	{
		return ((::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Boolean Method_1_363976B9E078CC60(::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_363976B9E078CC60_OFFSET))(this, a1);
	}

	static ::Class_1_0E012D14DF64C55A* Method_1_17F1016AFFC789DC(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a2)
	{
		return ((::Class_1_0E012D14DF64C55A*(*)(::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_17F1016AFFC789DC_OFFSET))(a1, a2);
	}

	::System::Void Method_1_3DF6558CE04321F2(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_3DF6558CE04321F2_OFFSET))(this, a1, a2);
	}

	::Class_1_1CE9F2AFE4D748E3* Method_1_905405FD8277357E(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::Class_1_1CE9F2AFE4D748E3*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_905405FD8277357E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_BCB6509DBF286306(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_BCB6509DBF286306_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Method_1_F84A2984471987DF(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_F84A2984471987DF_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_BE5BCC9D6444F736(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_BE5BCC9D6444F736_OFFSET))(a1, a2);
	}

	::System::Single Method_1_49A2F40D60175E51(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_49A2F40D60175E51_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_D7800B0D319374B4(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_D7800B0D319374B4_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_69607B7E4783C654()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_69607B7E4783C654_OFFSET))(this);
	}

	::System::Single Method_1_F7A0AD752D053A22(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_F7A0AD752D053A22_OFFSET))(this, a1);
	}

	::System::Single Method_1_7102A5C0F5F030D9(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_7102A5C0F5F030D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_92122B76695D5FE1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_92122B76695D5FE1_OFFSET))(this);
	}

	::System::Boolean Method_1_623903450D2F7EBD(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_1_0E012D14DF64C55A_METHOD_1_623903450D2F7EBD_OFFSET))(this, a1);
	}
};

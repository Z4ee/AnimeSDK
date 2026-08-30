#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanExtraScoreCalculatorConfig.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_C8FB4A54717458FA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F9F8375E16328FE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1728B050)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_046F753EA62ABCC8_OFFSET UNITYSDK_OFFSET(0x1728C110)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_0E352A293D2E97C6_OFFSET UNITYSDK_OFFSET(0x1728B610)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_355E095C6703E1E6_OFFSET UNITYSDK_OFFSET(0x1728B860)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_363976B9E078CC60_OFFSET UNITYSDK_OFFSET(0x1728B070)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_5E0955B34F47B03A_OFFSET UNITYSDK_OFFSET(0x1728BDE0)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_623903450D2F7EBD_OFFSET UNITYSDK_OFFSET(0x1728C5E0)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0x1728C0B0)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_8A5AE039A69068EA_OFFSET UNITYSDK_OFFSET(0x1728B0C0)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_8F87396CE8257D5A_OFFSET UNITYSDK_OFFSET(0x1728C240)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_905405FD8277357E_OFFSET UNITYSDK_OFFSET(0x1728B3D0)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_906D8EFA88B137F6_OFFSET UNITYSDK_OFFSET(0x1728C340)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_931FEBD5B507A020_OFFSET UNITYSDK_OFFSET(0x1728B8C0)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_CCC4673A8E51B428_OFFSET UNITYSDK_OFFSET(0x1728BC40)
#define CLASS_1_1F9F8375E16328FE_METHOD_1_F1C7421A1059B724_OFFSET UNITYSDK_OFFSET(0x1728B170)
#define CLASS_1_1F9F8375E16328FE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1728B060)
#define CLASS_1_1F9F8375E16328FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1728B160)

inline static constexpr unsigned int Class_1_1F9F8375E16328FE_TypeDefinitionIndex = 74328;

class Class_1_1F9F8375E16328FE : public ::System::Object
{
public:
	::Class_1_C8FB4A54717458FA* NMEGIHEFBKJ; // 0x10
	::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18
	::RPG::GameCore::AvatarRelicRecommendRow* NKEKOAGBKAJ; // 0x20
	::System::Single GNIKJABNEDI; // 0x28
	::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig _Config_k__BackingField; // 0x2C
	::RPG::GameCore::FixPoint JNDIHPNNLLD; // 0x30
	::System::Single AALHKIBIOEC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE__CTOR_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig get_Config()
	{
		return ((::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_363976B9E078CC60(::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_363976B9E078CC60_OFFSET))(this, a1);
	}

	static ::Class_1_1F9F8375E16328FE* Method_1_8A5AE039A69068EA(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a2)
	{
		return ((::Class_1_1F9F8375E16328FE*(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_8A5AE039A69068EA_OFFSET))(a1, a2);
	}

	::System::Void Method_1_F1C7421A1059B724(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_F1C7421A1059B724_OFFSET))(this, a1, a2);
	}

	::Class_1_C8FB4A54717458FA* Method_1_905405FD8277357E(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::Class_1_C8FB4A54717458FA*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_905405FD8277357E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_0E352A293D2E97C6(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_0E352A293D2E97C6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Method_1_355E095C6703E1E6(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_355E095C6703E1E6_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_5E0955B34F47B03A(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_5E0955B34F47B03A_OFFSET))(a1, a2);
	}

	::System::Single Method_1_931FEBD5B507A020(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_931FEBD5B507A020_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_CCC4673A8E51B428(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_CCC4673A8E51B428_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_69607B7E4783C654()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_69607B7E4783C654_OFFSET))(this);
	}

	::System::Single Method_1_046F753EA62ABCC8(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_046F753EA62ABCC8_OFFSET))(this, a1);
	}

	::System::Single Method_1_8F87396CE8257D5A(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_8F87396CE8257D5A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_906D8EFA88B137F6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_906D8EFA88B137F6_OFFSET))(this);
	}

	::System::Boolean Method_1_623903450D2F7EBD(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_1_1F9F8375E16328FE_METHOD_1_623903450D2F7EBD_OFFSET))(this, a1);
	}
};

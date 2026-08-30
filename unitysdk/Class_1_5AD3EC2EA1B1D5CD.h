#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_4F430D8CD5312CD8;
class Class_1_961B0CA014B1FC95;
class Class_1_E2FB7E5A9E3705C7_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5AD3EC2EA1B1D5CD_GET_ACTIVESKILLEXP_OFFSET UNITYSDK_OFFSET(0xBBAB520)
#define CLASS_1_5AD3EC2EA1B1D5CD_GET_CARNUMBER_OFFSET UNITYSDK_OFFSET(0xBBAB500)
#define CLASS_1_5AD3EC2EA1B1D5CD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBBAB4E0)
#define CLASS_1_5AD3EC2EA1B1D5CD_GET_DEVELOPEDPARTS_OFFSET UNITYSDK_OFFSET(0xBBAB5A0)
#define CLASS_1_5AD3EC2EA1B1D5CD_GET_EQUIPPEDPAINT_OFFSET UNITYSDK_OFFSET(0xBBAB5C0)
#define CLASS_1_5AD3EC2EA1B1D5CD_GET_EQUIPPEDPARTS_OFFSET UNITYSDK_OFFSET(0xBBAB580)
#define CLASS_1_5AD3EC2EA1B1D5CD_GET_STATVALUES_OFFSET UNITYSDK_OFFSET(0xBBAB540)
#define CLASS_1_5AD3EC2EA1B1D5CD_GET_TARGETSTATTIERS_OFFSET UNITYSDK_OFFSET(0xBBAB560)
#define CLASS_1_5AD3EC2EA1B1D5CD_METHOD_1_ADA85C40A3382050_1_OFFSET UNITYSDK_OFFSET(0xBBAB7C0)
#define CLASS_1_5AD3EC2EA1B1D5CD_METHOD_1_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0xBBAB5E0)
#define CLASS_1_5AD3EC2EA1B1D5CD_METHOD_1_B2CC3047F75151AA_OFFSET UNITYSDK_OFFSET(0xBBAB6F0)
#define CLASS_1_5AD3EC2EA1B1D5CD_SET_ACTIVESKILLEXP_OFFSET UNITYSDK_OFFSET(0xBBAB530)
#define CLASS_1_5AD3EC2EA1B1D5CD_SET_CARNUMBER_OFFSET UNITYSDK_OFFSET(0xBBAB510)
#define CLASS_1_5AD3EC2EA1B1D5CD_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBBAB4F0)
#define CLASS_1_5AD3EC2EA1B1D5CD_SET_DEVELOPEDPARTS_OFFSET UNITYSDK_OFFSET(0xBBAB5B0)
#define CLASS_1_5AD3EC2EA1B1D5CD_SET_EQUIPPEDPAINT_OFFSET UNITYSDK_OFFSET(0xBBAB5D0)
#define CLASS_1_5AD3EC2EA1B1D5CD_SET_EQUIPPEDPARTS_OFFSET UNITYSDK_OFFSET(0xBBAB590)
#define CLASS_1_5AD3EC2EA1B1D5CD_SET_STATVALUES_OFFSET UNITYSDK_OFFSET(0xBBAB550)
#define CLASS_1_5AD3EC2EA1B1D5CD_SET_TARGETSTATTIERS_OFFSET UNITYSDK_OFFSET(0xBBAB570)
#define CLASS_1_5AD3EC2EA1B1D5CD__CTOR_OFFSET UNITYSDK_OFFSET(0xBBAB8D0)

inline static constexpr unsigned int Class_1_5AD3EC2EA1B1D5CD_TypeDefinitionIndex = 80360;

class Class_1_5AD3EC2EA1B1D5CD : public ::System::Object
{
public:
	// static const ::System::UInt32 GHJIDLDCHKL = 0x66; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _StatValues_k__BackingField; // 0x10
	::Class_1_4F430D8CD5312CD8* _Config_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>* _DevelopedParts_k__BackingField; // 0x20
	::Class_1_E2FB7E5A9E3705C7_3* _EquippedPaint_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Class_1_961B0CA014B1FC95*>* _EquippedParts_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _TargetStatTiers_k__BackingField; // 0x38
	::System::UInt32 _ActiveSkillExp_k__BackingField; // 0x40
	::System::UInt32 _CarNumber_k__BackingField; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD__CTOR_OFFSET))(this);
	}

	::Class_1_4F430D8CD5312CD8* get_Config()
	{
		return ((::Class_1_4F430D8CD5312CD8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_1_4F430D8CD5312CD8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F430D8CD5312CD8*))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::UInt32 get_CarNumber()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_GET_CARNUMBER_OFFSET))(this);
	}

	::System::Void set_CarNumber(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_SET_CARNUMBER_OFFSET))(this, a1);
	}

	::System::UInt32 get_ActiveSkillExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_GET_ACTIVESKILLEXP_OFFSET))(this);
	}

	::System::Void set_ActiveSkillExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_SET_ACTIVESKILLEXP_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_StatValues()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_GET_STATVALUES_OFFSET))(this);
	}

	::System::Void set_StatValues(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_SET_STATVALUES_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_TargetStatTiers()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_GET_TARGETSTATTIERS_OFFSET))(this);
	}

	::System::Void set_TargetStatTiers(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_SET_TARGETSTATTIERS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Class_1_961B0CA014B1FC95*>* get_EquippedParts()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Class_1_961B0CA014B1FC95*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_GET_EQUIPPEDPARTS_OFFSET))(this);
	}

	::System::Void set_EquippedParts(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Class_1_961B0CA014B1FC95*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Class_1_961B0CA014B1FC95*>*))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_SET_EQUIPPEDPARTS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>* get_DevelopedParts()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_GET_DEVELOPEDPARTS_OFFSET))(this);
	}

	::System::Void set_DevelopedParts(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_SET_DEVELOPEDPARTS_OFFSET))(this, a1);
	}

	::Class_1_E2FB7E5A9E3705C7_3* get_EquippedPaint()
	{
		return ((::Class_1_E2FB7E5A9E3705C7_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_GET_EQUIPPEDPAINT_OFFSET))(this);
	}

	::System::Void set_EquippedPaint(::Class_1_E2FB7E5A9E3705C7_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2FB7E5A9E3705C7_3*))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_SET_EQUIPPEDPAINT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_METHOD_1_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Boolean Method_1_ADA85C40A3382050_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_METHOD_1_ADA85C40A3382050_1_OFFSET))(this);
	}

	::System::Boolean Method_1_B2CC3047F75151AA(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5AD3EC2EA1B1D5CD_METHOD_1_B2CC3047F75151AA_OFFSET))(this, a1);
	}
};

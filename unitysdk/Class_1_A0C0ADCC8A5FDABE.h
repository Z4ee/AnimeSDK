#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52F4A47C29C64CBB;
class Class_1_61CCFA89E19EDD2D;
class Class_1_A74FA5FE3E92D723;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A0C0ADCC8A5FDABE_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x157955A0)
#define CLASS_1_A0C0ADCC8A5FDABE_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x157955F0)
#define CLASS_1_A0C0ADCC8A5FDABE_GET_PLANEXTRASCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15795660)
#define CLASS_1_A0C0ADCC8A5FDABE_GET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15795640)
#define CLASS_1_A0C0ADCC8A5FDABE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x157954F0)
#define CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_603A483075EE5BAE_OFFSET UNITYSDK_OFFSET(0x15795540)
#define CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_97152911748E4B77_OFFSET UNITYSDK_OFFSET(0x15795700)
#define CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x157957A0)
#define CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x15795750)
#define CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_FAB076F9C2EDE3BE_OFFSET UNITYSDK_OFFSET(0x15795680)
#define CLASS_1_A0C0ADCC8A5FDABE_SET_PLANEXTRASCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15795670)
#define CLASS_1_A0C0ADCC8A5FDABE_SET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x15795650)
#define CLASS_1_A0C0ADCC8A5FDABE__CTOR_OFFSET UNITYSDK_OFFSET(0x157956F0)

inline static constexpr unsigned int Class_1_A0C0ADCC8A5FDABE_TypeDefinitionIndex = 74440;

class Class_1_A0C0ADCC8A5FDABE : public ::System::Object
{
public:
	::Class_1_52F4A47C29C64CBB* GANLOCFFMEF; // 0x10
	::Class_1_61CCFA89E19EDD2D* _RelicScoreCalculator_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* APDCBJCDALM; // 0x20
	::Class_1_A74FA5FE3E92D723* _PlanExtraScoreCalculator_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_52F4A47C29C64CBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52F4A47C29C64CBB*))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_GET_VERSION_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_603A483075EE5BAE()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_603A483075EE5BAE_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* get_Avatar()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_GET_AVATAR_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_PlanData()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_GET_PLANDATA_OFFSET))(this);
	}

	::Class_1_61CCFA89E19EDD2D* get_RelicScoreCalculator()
	{
		return ((::Class_1_61CCFA89E19EDD2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_GET_RELICSCORECALCULATOR_OFFSET))(this);
	}

	::System::Void set_RelicScoreCalculator(::Class_1_61CCFA89E19EDD2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61CCFA89E19EDD2D*))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_SET_RELICSCORECALCULATOR_OFFSET))(this, a1);
	}

	::Class_1_A74FA5FE3E92D723* get_PlanExtraScoreCalculator()
	{
		return ((::Class_1_A74FA5FE3E92D723*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_GET_PLANEXTRASCORECALCULATOR_OFFSET))(this);
	}

	::System::Void set_PlanExtraScoreCalculator(::Class_1_A74FA5FE3E92D723* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A74FA5FE3E92D723*))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_SET_PLANEXTRASCORECALCULATOR_OFFSET))(this, a1);
	}

	static ::Class_1_A0C0ADCC8A5FDABE* Method_1_FAB076F9C2EDE3BE(::Class_1_52F4A47C29C64CBB* a1)
	{
		return ((::Class_1_A0C0ADCC8A5FDABE*(*)(::Class_1_52F4A47C29C64CBB*))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_FAB076F9C2EDE3BE_OFFSET))(a1);
	}

	::System::Void Method_1_97152911748E4B77(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_97152911748E4B77_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_61CCFA89E19EDD2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61CCFA89E19EDD2D*))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_A74FA5FE3E92D723* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A74FA5FE3E92D723*))((::PBYTE)hIl2Cpp + CLASS_1_A0C0ADCC8A5FDABE_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E012D14DF64C55A;
class Class_1_61CCFA89E19EDD2D;
class Class_1_81595715048249D2;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_35B024CC96B837C1_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x8C812F0)
#define CLASS_1_35B024CC96B837C1_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x8C81310)
#define CLASS_1_35B024CC96B837C1_GET_PLANEXTRASCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x8C81350)
#define CLASS_1_35B024CC96B837C1_GET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x8C81330)
#define CLASS_1_35B024CC96B837C1_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x8C81270)
#define CLASS_1_35B024CC96B837C1_METHOD_1_603A483075EE5BAE_OFFSET UNITYSDK_OFFSET(0x8C81290)
#define CLASS_1_35B024CC96B837C1_METHOD_1_97152911748E4B77_OFFSET UNITYSDK_OFFSET(0x8C813F0)
#define CLASS_1_35B024CC96B837C1_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x8C81490)
#define CLASS_1_35B024CC96B837C1_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x8C81440)
#define CLASS_1_35B024CC96B837C1_METHOD_1_FAB076F9C2EDE3BE_OFFSET UNITYSDK_OFFSET(0x8C81370)
#define CLASS_1_35B024CC96B837C1_SET_PLANEXTRASCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x8C81360)
#define CLASS_1_35B024CC96B837C1_SET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x8C81340)
#define CLASS_1_35B024CC96B837C1__CTOR_OFFSET UNITYSDK_OFFSET(0x8C813E0)

inline static constexpr unsigned int Class_1_35B024CC96B837C1_TypeDefinitionIndex = 61195;

class Class_1_35B024CC96B837C1 : public ::System::Object
{
public:
	::Class_1_0E012D14DF64C55A* _PlanExtraScoreCalculator_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Field_1_1; // 0x18
	::Class_1_81595715048249D2* Field_1_0; // 0x20
	::Class_1_61CCFA89E19EDD2D* _RelicScoreCalculator_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_81595715048249D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_81595715048249D2*))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_GET_VERSION_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_603A483075EE5BAE()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_METHOD_1_603A483075EE5BAE_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* get_Avatar()
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_GET_AVATAR_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_PlanData()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_GET_PLANDATA_OFFSET))(this);
	}

	::Class_1_61CCFA89E19EDD2D* get_RelicScoreCalculator()
	{
		return ((::Class_1_61CCFA89E19EDD2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_GET_RELICSCORECALCULATOR_OFFSET))(this);
	}

	::System::Void set_RelicScoreCalculator(::Class_1_61CCFA89E19EDD2D* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61CCFA89E19EDD2D*))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_SET_RELICSCORECALCULATOR_OFFSET))(this, value);
	}

	::Class_1_0E012D14DF64C55A* get_PlanExtraScoreCalculator()
	{
		return ((::Class_1_0E012D14DF64C55A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_GET_PLANEXTRASCORECALCULATOR_OFFSET))(this);
	}

	::System::Void set_PlanExtraScoreCalculator(::Class_1_0E012D14DF64C55A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E012D14DF64C55A*))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_SET_PLANEXTRASCORECALCULATOR_OFFSET))(this, value);
	}

	static ::Class_1_35B024CC96B837C1* Method_1_FAB076F9C2EDE3BE(::Class_1_81595715048249D2* a1)
	{
		return ((::Class_1_35B024CC96B837C1*(*)(::Class_1_81595715048249D2*))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_METHOD_1_FAB076F9C2EDE3BE_OFFSET))(a1);
	}

	::System::Void Method_1_97152911748E4B77(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_METHOD_1_97152911748E4B77_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_61CCFA89E19EDD2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61CCFA89E19EDD2D*))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_0E012D14DF64C55A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E012D14DF64C55A*))((::PBYTE)hIl2Cpp + CLASS_1_35B024CC96B837C1_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}
};

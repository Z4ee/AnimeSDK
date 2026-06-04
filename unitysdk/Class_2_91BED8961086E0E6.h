#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_81F809EAA518CA97.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"

class Class_1_DED4BA2FC834659B;
class Class_1_F9FBCC956DFCF137_21;
class Class_1_FF80A1ACD786CECB_3;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentOption; }
namespace RPG::GameCore { class HipplenIncidentOptionStepConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_91BED8961086E0E6_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x13C29DF0)
#define CLASS_2_91BED8961086E0E6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13C2A260)
#define CLASS_2_91BED8961086E0E6_METHOD_2_5C14A48496CB9BA3_OFFSET UNITYSDK_OFFSET(0x13C29B00)
#define CLASS_2_91BED8961086E0E6_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x13C2A180)
#define CLASS_2_91BED8961086E0E6_METHOD_2_8080E22F79F246F0_OFFSET UNITYSDK_OFFSET(0x13C29DA0)
#define CLASS_2_91BED8961086E0E6_METHOD_2_8E0634CDC64D0684_OFFSET UNITYSDK_OFFSET(0x13C29F60)
#define CLASS_2_91BED8961086E0E6_METHOD_2_9F4F5ECCFC904724_OFFSET UNITYSDK_OFFSET(0x13C29ED0)
#define CLASS_2_91BED8961086E0E6__CTOR_OFFSET UNITYSDK_OFFSET(0x13C29BA0)

inline static constexpr unsigned int Class_2_91BED8961086E0E6_TypeDefinitionIndex = 70421;

class Class_2_91BED8961086E0E6 : public ::Class_1_81F809EAA518CA97
{
public:
	::RPG::GameCore::HipplenIncidentOptionStepConfig* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* Field_2_2; // 0x40
	::System::Int32 Field_2_3; // 0x48
	::System::Boolean Field_2_4; // 0x4C

	::System::Void _ctor(::RPG::GameCore::HipplenIncidentOptionStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentOptionStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_91BED8961086E0E6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_2_91BED8961086E0E6* Method_2_5C14A48496CB9BA3(::RPG::GameCore::HipplenIncidentOptionStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_2_91BED8961086E0E6*(*)(::RPG::GameCore::HipplenIncidentOptionStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_91BED8961086E0E6_METHOD_2_5C14A48496CB9BA3_OFFSET))(a1, a2);
	}

	::System::Void Method_2_8080E22F79F246F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BED8961086E0E6_METHOD_2_8080E22F79F246F0_OFFSET))(this);
	}

	::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* Method_2_9F4F5ECCFC904724()
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BED8961086E0E6_METHOD_2_9F4F5ECCFC904724_OFFSET))(this);
	}

	::System::Void Method_2_8E0634CDC64D0684(::Class_1_FF80A1ACD786CECB_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF80A1ACD786CECB_3*))((::PBYTE)hIl2Cpp + CLASS_2_91BED8961086E0E6_METHOD_2_8E0634CDC64D0684_OFFSET))(this, a1);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_F9FBCC956DFCF137_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_21*))((::PBYTE)hIl2Cpp + CLASS_2_91BED8961086E0E6_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BED8961086E0E6_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BED8961086E0E6_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};

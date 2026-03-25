#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_974;
class Class_1_D5FAA251D0AA82EB;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectCalculator; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::GameCore { class ActivityHipplenIncidentRow; }
namespace RPG::GameCore { class HipplenIncidentConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DED4BA2FC834659B_METHOD_1_2FCF486FE4ECB118_OFFSET UNITYSDK_OFFSET(0x8CB4660)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x8CB4540)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8CB4600)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_7CAC89D7CCB1FA9D_OFFSET UNITYSDK_OFFSET(0x8CB45A0)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_85B9302C2E00DD31_OFFSET UNITYSDK_OFFSET(0x8CB43A0)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x8CB48B0)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8CB4380)
#define CLASS_1_DED4BA2FC834659B__CTOR_OFFSET UNITYSDK_OFFSET(0x8CB4390)

inline static constexpr unsigned int Class_1_DED4BA2FC834659B_TypeDefinitionIndex = 61693;

class Class_1_DED4BA2FC834659B : public ::System::Object
{
public:
	::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* Field_1_0; // 0x10
	::System::Action* Field_1_4; // 0x18
	::Class_1_D5FAA251D0AA82EB* Field_1_3; // 0x20
	::RPG::GameCore::ActivityHipplenIncidentRow* Field_1_1; // 0x28
	::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* Field_1_2; // 0x30

	::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1, ::RPG::GameCore::ActivityHipplenIncidentRow* a2, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*, ::RPG::GameCore::ActivityHipplenIncidentRow*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator*))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_85B9302C2E00DD31(::RPG::GameCore::HipplenIncidentConfig* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_85B9302C2E00DD31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CAC89D7CCB1FA9D(::Class_0_16E4307DCC419505_974* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_974*))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_7CAC89D7CCB1FA9D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* Method_1_2FCF486FE4ECB118()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_2FCF486FE4ECB118_OFFSET))(this);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}
};

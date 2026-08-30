#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1259;
class Class_1_8303B8E58A593199;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectCalculator; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::GameCore { class ActivityHipplenIncidentRow; }
namespace RPG::GameCore { class HipplenIncidentConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DED4BA2FC834659B_METHOD_1_1E77F9DFFAEE3100_OFFSET UNITYSDK_OFFSET(0x15218120)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_2F0BBBAFE5EB4707_OFFSET UNITYSDK_OFFSET(0x15218240)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15217E70)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_40A4162001997C75_OFFSET UNITYSDK_OFFSET(0x15217ED0)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x152180C0)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x152181B0)
#define CLASS_1_DED4BA2FC834659B_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x152184E0)
#define CLASS_1_DED4BA2FC834659B__CTOR_OFFSET UNITYSDK_OFFSET(0x15217EC0)

inline static constexpr unsigned int Class_1_DED4BA2FC834659B_TypeDefinitionIndex = 75244;

class Class_1_DED4BA2FC834659B : public ::System::Object
{
public:
	::Class_1_8303B8E58A593199* EOMLMNOEKDJ; // 0x10
	::System::Action* JCGCCGDNFFI; // 0x18
	::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* KJEDGKFEPLM; // 0x20
	::RPG::GameCore::ActivityHipplenIncidentRow* POBMBPIIJND; // 0x28
	::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* EOFFAMLLEJK; // 0x30

	::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1, ::RPG::GameCore::ActivityHipplenIncidentRow* a2, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*, ::RPG::GameCore::ActivityHipplenIncidentRow*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectCalculator*))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_40A4162001997C75(::RPG::GameCore::HipplenIncidentConfig* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_40A4162001997C75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1E77F9DFFAEE3100(::Class_0_16E4307DCC419505_1259* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1259*))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_1E77F9DFFAEE3100_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* Method_1_2F0BBBAFE5EB4707()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_2F0BBBAFE5EB4707_OFFSET))(this);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DED4BA2FC834659B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};

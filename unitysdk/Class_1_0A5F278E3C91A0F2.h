#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A5F278E3C91A0F2_Class_1_7E66C1729081F63C;
namespace RPG::Client { class TarotBookInteraction; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0A5F278E3C91A0F2_GET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0x19AC0F60)
#define CLASS_1_0A5F278E3C91A0F2_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x19AC12F0)
#define CLASS_1_0A5F278E3C91A0F2_METHOD_1_3260642554990B21_OFFSET UNITYSDK_OFFSET(0x19AC0FE0)
#define CLASS_1_0A5F278E3C91A0F2_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19AC0F10)
#define CLASS_1_0A5F278E3C91A0F2_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19AC1590)
#define CLASS_1_0A5F278E3C91A0F2_METHOD_1_A00EAAEC272AD11A_OFFSET UNITYSDK_OFFSET(0x19AC0F80)
#define CLASS_1_0A5F278E3C91A0F2_SET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0x19AC0F70)
#define CLASS_1_0A5F278E3C91A0F2__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC1750)

inline static constexpr unsigned int Class_1_0A5F278E3C91A0F2_TypeDefinitionIndex = 68059;

class Class_1_0A5F278E3C91A0F2 : public ::System::Object
{
public:
	::RPG::Client::TarotBookInteraction* _LastInteraction_k__BackingField; // 0x10
	::Class_1_0A5F278E3C91A0F2_Class_1_7E66C1729081F63C* EEFMDEHLLFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::TarotBookInteraction* get_LastInteraction()
	{
		return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_GET_LASTINTERACTION_OFFSET))(this);
	}

	::System::Void set_LastInteraction(::RPG::Client::TarotBookInteraction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_SET_LASTINTERACTION_OFFSET))(this, a1);
	}

	::RPG::Client::TarotBookInteraction* Method_1_A00EAAEC272AD11A()
	{
		return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_METHOD_1_A00EAAEC272AD11A_OFFSET))(this);
	}

	::System::Boolean Method_1_3260642554990B21(::RPG::Client::TarotBookInteraction* a1, ::System::Action_1<::RPG::Client::TarotBookInteraction*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::System::Action_1<::RPG::Client::TarotBookInteraction*>*))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_METHOD_1_3260642554990B21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A5F278E3C91A0F2_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};

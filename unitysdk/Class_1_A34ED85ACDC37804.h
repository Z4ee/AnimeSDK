#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A34ED85ACDC37804_Class_1_7E66C1729081F63C;
namespace RPG::Client { class TarotBookInteraction; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A34ED85ACDC37804_GET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0x138CFDE0)
#define CLASS_1_A34ED85ACDC37804_METHOD_1_04EDC299E25A9178_OFFSET UNITYSDK_OFFSET(0x138CFE60)
#define CLASS_1_A34ED85ACDC37804_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x138D0130)
#define CLASS_1_A34ED85ACDC37804_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x138D0390)
#define CLASS_1_A34ED85ACDC37804_METHOD_1_A00EAAEC272AD11A_OFFSET UNITYSDK_OFFSET(0x138CFE00)
#define CLASS_1_A34ED85ACDC37804_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x138CFDD0)
#define CLASS_1_A34ED85ACDC37804_SET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0x138CFDF0)
#define CLASS_1_A34ED85ACDC37804__CTOR_OFFSET UNITYSDK_OFFSET(0x138D0510)

inline static constexpr unsigned int Class_1_A34ED85ACDC37804_TypeDefinitionIndex = 63682;

class Class_1_A34ED85ACDC37804 : public ::System::Object
{
public:
	::RPG::Client::TarotBookInteraction* _LastInteraction_k__BackingField; // 0x10
	::Class_1_A34ED85ACDC37804_Class_1_7E66C1729081F63C* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A34ED85ACDC37804__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A34ED85ACDC37804_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::TarotBookInteraction* get_LastInteraction()
	{
		return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A34ED85ACDC37804_GET_LASTINTERACTION_OFFSET))(this);
	}

	::System::Void set_LastInteraction(::RPG::Client::TarotBookInteraction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + CLASS_1_A34ED85ACDC37804_SET_LASTINTERACTION_OFFSET))(this, a1);
	}

	::RPG::Client::TarotBookInteraction* Method_1_A00EAAEC272AD11A()
	{
		return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A34ED85ACDC37804_METHOD_1_A00EAAEC272AD11A_OFFSET))(this);
	}

	::System::Boolean Method_1_04EDC299E25A9178(::RPG::Client::TarotBookInteraction* a1, ::System::Action_1<::RPG::Client::TarotBookInteraction*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::System::Action_1<::RPG::Client::TarotBookInteraction*>*))((::PBYTE)hIl2Cpp + CLASS_1_A34ED85ACDC37804_METHOD_1_04EDC299E25A9178_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A34ED85ACDC37804_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A34ED85ACDC37804_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};

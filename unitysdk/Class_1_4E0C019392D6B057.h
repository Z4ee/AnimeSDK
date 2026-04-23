#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4E0C019392D6B057_Class_1_7E66C1729081F63C;
namespace RPG::Client { class TarotBookInteraction; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4E0C019392D6B057_GET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0x11E77C50)
#define CLASS_1_4E0C019392D6B057_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x11E77F70)
#define CLASS_1_4E0C019392D6B057_METHOD_1_119EA32A3B1018E0_OFFSET UNITYSDK_OFFSET(0x11E77CD0)
#define CLASS_1_4E0C019392D6B057_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11E781D0)
#define CLASS_1_4E0C019392D6B057_METHOD_1_A00EAAEC272AD11A_OFFSET UNITYSDK_OFFSET(0x11E77C70)
#define CLASS_1_4E0C019392D6B057_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11E77C40)
#define CLASS_1_4E0C019392D6B057_SET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0x11E77C60)
#define CLASS_1_4E0C019392D6B057__CTOR_OFFSET UNITYSDK_OFFSET(0x11E78340)

inline static constexpr unsigned int Class_1_4E0C019392D6B057_TypeDefinitionIndex = 62749;

class Class_1_4E0C019392D6B057 : public ::System::Object
{
public:
	::RPG::Client::TarotBookInteraction* _LastInteraction_k__BackingField; // 0x10
	::Class_1_4E0C019392D6B057_Class_1_7E66C1729081F63C* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E0C019392D6B057__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E0C019392D6B057_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::TarotBookInteraction* get_LastInteraction()
	{
		return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E0C019392D6B057_GET_LASTINTERACTION_OFFSET))(this);
	}

	::System::Void set_LastInteraction(::RPG::Client::TarotBookInteraction* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + CLASS_1_4E0C019392D6B057_SET_LASTINTERACTION_OFFSET))(this, value);
	}

	::RPG::Client::TarotBookInteraction* Method_1_A00EAAEC272AD11A()
	{
		return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E0C019392D6B057_METHOD_1_A00EAAEC272AD11A_OFFSET))(this);
	}

	::System::Boolean Method_1_119EA32A3B1018E0(::RPG::Client::TarotBookInteraction* a1, ::System::Action_1<::RPG::Client::TarotBookInteraction*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::System::Action_1<::RPG::Client::TarotBookInteraction*>*))((::PBYTE)hIl2Cpp + CLASS_1_4E0C019392D6B057_METHOD_1_119EA32A3B1018E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E0C019392D6B057_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E0C019392D6B057_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};

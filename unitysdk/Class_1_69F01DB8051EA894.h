#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define CLASS_1_69F01DB8051EA894_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x118F1710)
#define CLASS_1_69F01DB8051EA894_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x118F1750)
#define CLASS_1_69F01DB8051EA894_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x118F18F0)
#define CLASS_1_69F01DB8051EA894_METHOD_1_BF3A97FF800F0C24_1_OFFSET UNITYSDK_OFFSET(0x118F1A80)
#define CLASS_1_69F01DB8051EA894_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0x118F19E0)
#define CLASS_1_69F01DB8051EA894_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118F1A40)
#define CLASS_1_69F01DB8051EA894__CTOR_OFFSET UNITYSDK_OFFSET(0x118F1700)

inline static constexpr unsigned int Class_1_69F01DB8051EA894_TypeDefinitionIndex = 48965;

class Class_1_69F01DB8051EA894 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_1; // 0x10
	::RPG::Client::ChallengePeakGroup* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::ChallengePeakGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + CLASS_1_69F01DB8051EA894__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F01DB8051EA894_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F01DB8051EA894_METHOD_1_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F01DB8051EA894_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_69F01DB8051EA894_METHOD_1_BF3A97FF800F0C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F01DB8051EA894_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_69F01DB8051EA894_METHOD_1_BF3A97FF800F0C24_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define CLASS_1_2E196078C591D6C6_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0x1629F7D0)
#define CLASS_1_2E196078C591D6C6_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x1629F730)
#define CLASS_1_2E196078C591D6C6_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1629F480)
#define CLASS_1_2E196078C591D6C6_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1629F660)
#define CLASS_1_2E196078C591D6C6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1629F790)
#define CLASS_1_2E196078C591D6C6_METHOD_1_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x1629F4C0)
#define CLASS_1_2E196078C591D6C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1629F470)

inline static constexpr unsigned int Class_1_2E196078C591D6C6_TypeDefinitionIndex = 60571;

class Class_1_2E196078C591D6C6 : public ::System::Object
{
public:
	::RPG::Client::UIController* JONJFNGDLKI; // 0x10
	::RPG::Client::ChallengePeakGroup* APPIHABBCGK; // 0x18

	::System::Void _ctor(::RPG::Client::ChallengePeakGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_D20F759FC2EC43FB_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_256B6E165124982E_1_OFFSET))(this, a1);
	}
};

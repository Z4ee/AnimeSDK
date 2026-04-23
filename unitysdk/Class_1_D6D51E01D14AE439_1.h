#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeData; }
namespace System { class Action; }

#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x12547A30)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_25F6F1B55C6B901F_OFFSET UNITYSDK_OFFSET(0x12547C20)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12547860)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_BF3A97FF800F0C24_1_OFFSET UNITYSDK_OFFSET(0x12547BC0)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0x12547B20)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12547B80)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x125478A0)
#define CLASS_1_D6D51E01D14AE439_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12547C70)

inline static constexpr unsigned int Class_1_D6D51E01D14AE439_1_TypeDefinitionIndex = 55758;

class Class_1_D6D51E01D14AE439_1 : public ::System::Object
{
public:
	::RPG::Client::ChallengeData* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_BF3A97FF800F0C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_BF3A97FF800F0C24_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_25F6F1B55C6B901F(::RPG::Client::ChallengeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_25F6F1B55C6B901F_OFFSET))(this, a1);
	}
};

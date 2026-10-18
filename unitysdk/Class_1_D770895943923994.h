#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StoryLineData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D770895943923994_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x12D088B0)
#define CLASS_1_D770895943923994_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12D08900)
#define CLASS_1_D770895943923994_METHOD_1_5354A13DDABA2EFA_OFFSET UNITYSDK_OFFSET(0x12D08820)
#define CLASS_1_D770895943923994_METHOD_1_E465D0F588233D19_OFFSET UNITYSDK_OFFSET(0x12D087C0)
#define CLASS_1_D770895943923994__CTOR_OFFSET UNITYSDK_OFFSET(0x12D08650)

inline static constexpr unsigned int Class_1_D770895943923994_TypeDefinitionIndex = 74643;

class Class_1_D770895943923994 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* ACKBIIJEHDP; // 0x10
	::RPG::Client::StoryLineData* AOJKMPDNLKI; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D770895943923994__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E465D0F588233D19(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D770895943923994_METHOD_1_E465D0F588233D19_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5354A13DDABA2EFA(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D770895943923994_METHOD_1_5354A13DDABA2EFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D770895943923994_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D770895943923994_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_799;
class Class_1_AE0CA897D782D638;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class BaseGachaPoolData; }

#define CLASS_1_464399BC11DD56B3_METHOD_1_17B794D886466CBC_OFFSET UNITYSDK_OFFSET(0xA9EDDC0)
#define CLASS_1_464399BC11DD56B3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA9EDD70)
#define CLASS_1_464399BC11DD56B3_METHOD_1_6ED0447A6B466842_OFFSET UNITYSDK_OFFSET(0xA9EDB00)
#define CLASS_1_464399BC11DD56B3_METHOD_1_FD52D88A38A2BFC3_OFFSET UNITYSDK_OFFSET(0xA9EDB70)
#define CLASS_1_464399BC11DD56B3__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EDF30)

inline static constexpr unsigned int Class_1_464399BC11DD56B3_TypeDefinitionIndex = 61314;

class Class_1_464399BC11DD56B3 : public ::System::Object
{
public:
	::RPG::Client::BaseGachaPoolData* Field_1_0; // 0x10
	::Class_1_AE0CA897D782D638* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6ED0447A6B466842(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3_METHOD_1_6ED0447A6B466842_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_799* Method_1_17B794D886466CBC()
	{
		return ((::Class_0_16E4307DCC419505_799*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3_METHOD_1_17B794D886466CBC_OFFSET))(this);
	}

	::RPG::Client::BaseGachaPoolData* Method_1_FD52D88A38A2BFC3(::System::UInt32 a1)
	{
		return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_464399BC11DD56B3_METHOD_1_FD52D88A38A2BFC3_OFFSET))(this, a1);
	}
};

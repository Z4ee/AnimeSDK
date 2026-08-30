#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53D455EF2A816533_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A608AA0)
#define CLASS_1_53D455EF2A816533_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A60AF80)
#define CLASS_1_53D455EF2A816533_METHOD_1_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x1A60A9C0)
#define CLASS_1_53D455EF2A816533_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x1A60C860)
#define CLASS_1_53D455EF2A816533_ONHIT_OFFSET UNITYSDK_OFFSET(0x1A60B0A0)
#define CLASS_1_53D455EF2A816533__CTOR_OFFSET UNITYSDK_OFFSET(0x1A608A30)

inline static constexpr unsigned int Class_1_53D455EF2A816533_TypeDefinitionIndex = 41110;

class Class_1_53D455EF2A816533 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* MBKIEFPKECG; // 0x10
	::Class_3_7E25C9E6907AC48F* PDENFEFCAGN; // 0x18
	::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* BLOMOEJJCIK; // 0x20
	::Entitas::IMatcher_1<::Class_2_FD51057495DB654F*>* NNAGPBBJGAD; // 0x28
	::System::Boolean KAMEDHGHMEO; // 0x30
	::System::Boolean MJCAIPOIDEE; // 0x31

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_EXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_INITIALIZE_OFFSET))(this);
	}

	::System::Void OnHit(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_ONHIT_OFFSET))(this, a1);
	}

	::System::Void Method_1_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_METHOD_1_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}
};

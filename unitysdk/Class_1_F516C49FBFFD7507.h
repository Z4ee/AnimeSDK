#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SimpleTalkTargetBehaviorInfo; }
namespace RPG::GameCore { class SimpleTalkTargetBehavior; }

#define CLASS_1_F516C49FBFFD7507_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA62DB60)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xA62E020)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_8562A2A1E4593432_OFFSET UNITYSDK_OFFSET(0xA62DBE0)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_B33C2DF16EFB4917_OFFSET UNITYSDK_OFFSET(0xA62DA60)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0xA62DFC0)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_D643BAC787BFCBDF_OFFSET UNITYSDK_OFFSET(0xA62E2E0)
#define CLASS_1_F516C49FBFFD7507__CTOR_OFFSET UNITYSDK_OFFSET(0xA62E3A0)

inline static constexpr unsigned int Class_1_F516C49FBFFD7507_TypeDefinitionIndex = 56780;

class Class_1_F516C49FBFFD7507 : public ::System::Object
{
public:
	::RPG::GameCore::SimpleTalkTargetBehavior* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::Int32 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F516C49FBFFD7507__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B33C2DF16EFB4917(::RPG::Client::SimpleTalkTargetBehaviorInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleTalkTargetBehaviorInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F516C49FBFFD7507_METHOD_1_B33C2DF16EFB4917_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F516C49FBFFD7507_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_C8EED11299FD17DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F516C49FBFFD7507_METHOD_1_C8EED11299FD17DB_OFFSET))(this);
	}

	::System::Void Method_1_D643BAC787BFCBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F516C49FBFFD7507_METHOD_1_D643BAC787BFCBDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8562A2A1E4593432(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F516C49FBFFD7507_METHOD_1_8562A2A1E4593432_OFFSET))(this, a1);
	}

	::System::Void Method_1_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F516C49FBFFD7507_METHOD_1_50131F4CF014469C_OFFSET))(this);
	}
};

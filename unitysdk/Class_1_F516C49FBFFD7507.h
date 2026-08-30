#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SimpleTalkTargetBehaviorInfo; }
namespace RPG::GameCore { class SimpleTalkTargetBehavior; }

#define CLASS_1_F516C49FBFFD7507_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x195D1F40)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_8562A2A1E4593432_OFFSET UNITYSDK_OFFSET(0x195D1FC0)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_B33C2DF16EFB4917_OFFSET UNITYSDK_OFFSET(0x195D1E40)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x195D23A0)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0x195D2400)
#define CLASS_1_F516C49FBFFD7507_METHOD_1_D643BAC787BFCBDF_OFFSET UNITYSDK_OFFSET(0x195D26C0)
#define CLASS_1_F516C49FBFFD7507__CTOR_OFFSET UNITYSDK_OFFSET(0x195D2780)

inline static constexpr unsigned int Class_1_F516C49FBFFD7507_TypeDefinitionIndex = 60854;

class Class_1_F516C49FBFFD7507 : public ::System::Object
{
public:
	::RPG::GameCore::SimpleTalkTargetBehavior* IGHAHBNLIJA; // 0x10
	::System::Int32 POMODDMAILE; // 0x18
	::System::Single PGMIOKKLHIE; // 0x1C
	::System::UInt32 ELCDNICEPAO; // 0x20
	::System::Boolean HDKMCJLGOFI; // 0x24
	::System::UInt32 JDLPMOKEBPD; // 0x28

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

	::System::Void Method_1_D56C1A4C75B97C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F516C49FBFFD7507_METHOD_1_D56C1A4C75B97C47_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define CLASS_1_A6AA67006243F998_METHOD_1_1A53B648CAC728B2_OFFSET UNITYSDK_OFFSET(0x15B2DBC0)
#define CLASS_1_A6AA67006243F998_METHOD_1_49AC4F5E691698CF_OFFSET UNITYSDK_OFFSET(0x15B2DD60)
#define CLASS_1_A6AA67006243F998_METHOD_1_568954BB78DFFD18_OFFSET UNITYSDK_OFFSET(0x15B2DF70)
#define CLASS_1_A6AA67006243F998_METHOD_1_8A28FE6BC993279B_OFFSET UNITYSDK_OFFSET(0x15B2DEC0)
#define CLASS_1_A6AA67006243F998_METHOD_1_D2594BF9DC46F655_OFFSET UNITYSDK_OFFSET(0x15B2E110)
#define CLASS_1_A6AA67006243F998__CTOR_OFFSET UNITYSDK_OFFSET(0x15B2E1D0)

inline static constexpr unsigned int Class_1_A6AA67006243F998_TypeDefinitionIndex = 61077;

class Class_1_A6AA67006243F998 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6AA67006243F998__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A53B648CAC728B2(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_A6AA67006243F998_METHOD_1_1A53B648CAC728B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_49AC4F5E691698CF(::MiHoYo::SDK::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_A6AA67006243F998_METHOD_1_49AC4F5E691698CF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A28FE6BC993279B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6AA67006243F998_METHOD_1_8A28FE6BC993279B_OFFSET))(this, a1);
	}

	::System::Void Method_1_568954BB78DFFD18(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6AA67006243F998_METHOD_1_568954BB78DFFD18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D2594BF9DC46F655(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A6AA67006243F998_METHOD_1_D2594BF9DC46F655_OFFSET))(this, a1);
	}
};

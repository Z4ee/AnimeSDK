#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_CCE502355C885F78_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD291E30)
#define CLASS_1_CCE502355C885F78_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xD291E90)
#define CLASS_1_CCE502355C885F78_METHOD_1_40399AB61EC65AA3_OFFSET UNITYSDK_OFFSET(0xD2919E0)
#define CLASS_1_CCE502355C885F78_METHOD_1_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0xD291D00)
#define CLASS_1_CCE502355C885F78_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xD291D70)
#define CLASS_1_CCE502355C885F78__CTOR_OFFSET UNITYSDK_OFFSET(0xD291830)

inline static constexpr unsigned int Class_1_CCE502355C885F78_TypeDefinitionIndex = 75161;

class Class_1_CCE502355C885F78 : public ::System::Object
{
public:
	::System::Action* LIOAPMDFLPL; // 0x10
	::RPG::Client::ActivityIdleLive::IdleLiveNode* BECOOHALAFM; // 0x18
	::System::Boolean AFLGDFPEMNP; // 0x20
	::System::Int32 KDPKBMKBPIG; // 0x24
	::System::Int32 JOEONHECOGJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_40399AB61EC65AA3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_40399AB61EC65AA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};

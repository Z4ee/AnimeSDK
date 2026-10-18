#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_7C4CF87154CFE9B2_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF205F30)
#define CLASS_1_7C4CF87154CFE9B2_3_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xF206160)
#define CLASS_1_7C4CF87154CFE9B2_3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xF2060F0)
#define CLASS_1_7C4CF87154CFE9B2_3_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xF206040)
#define CLASS_1_7C4CF87154CFE9B2_3_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xF205F80)
#define CLASS_1_7C4CF87154CFE9B2_3__CTOR_OFFSET UNITYSDK_OFFSET(0xF205E80)

inline static constexpr unsigned int Class_1_7C4CF87154CFE9B2_3_TypeDefinitionIndex = 75461;

class Class_1_7C4CF87154CFE9B2_3 : public ::System::Object
{
public:
	::System::Action* LIOAPMDFLPL; // 0x10
	::System::Int32 NEMONPEMLDP; // 0x18
	::System::Int32 JHDFLJHFHEI; // 0x1C
	::System::Boolean AFLGDFPEMNP; // 0x20

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_3_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_3_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_3_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};

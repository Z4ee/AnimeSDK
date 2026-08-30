#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_7C4CF87154CFE9B2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4FAF20)
#define CLASS_1_7C4CF87154CFE9B2_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xB4FAF70)
#define CLASS_1_7C4CF87154CFE9B2_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB4FAD50)
#define CLASS_1_7C4CF87154CFE9B2_METHOD_1_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0xB4FAE00)
#define CLASS_1_7C4CF87154CFE9B2_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xB4FAE60)
#define CLASS_1_7C4CF87154CFE9B2__CTOR_OFFSET UNITYSDK_OFFSET(0xB4FACA0)

inline static constexpr unsigned int Class_1_7C4CF87154CFE9B2_TypeDefinitionIndex = 75150;

class Class_1_7C4CF87154CFE9B2 : public ::System::Object
{
public:
	::System::Action* LIOAPMDFLPL; // 0x10
	::System::Int32 GMPIKJNNNPG; // 0x18
	::System::Int32 IFAAHCGCHKK; // 0x1C
	::System::Boolean AFLGDFPEMNP; // 0x20

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_METHOD_1_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};

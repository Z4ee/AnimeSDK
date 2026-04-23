#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_7C4CF87154CFE9B2_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9925EB0)
#define CLASS_1_7C4CF87154CFE9B2_2_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x9925F00)
#define CLASS_1_7C4CF87154CFE9B2_2_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9925DB0)
#define CLASS_1_7C4CF87154CFE9B2_2_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x9925E20)
#define CLASS_1_7C4CF87154CFE9B2_2_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x9925C90)
#define CLASS_1_7C4CF87154CFE9B2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9925BF0)

inline static constexpr unsigned int Class_1_7C4CF87154CFE9B2_2_TypeDefinitionIndex = 69516;

class Class_1_7C4CF87154CFE9B2_2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_2_METHOD_1_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_2_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_2_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_2_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};

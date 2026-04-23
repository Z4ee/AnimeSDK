#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TriggerEffectParams; }

#define CLASS_1_C09C9DF644956437_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92352B0)
#define CLASS_1_C09C9DF644956437_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x92353D0)
#define CLASS_1_C09C9DF644956437_METHOD_1_4BA0E333242074E4_OFFSET UNITYSDK_OFFSET(0x9235170)
#define CLASS_1_C09C9DF644956437_METHOD_1_7FC905D4198EB592_OFFSET UNITYSDK_OFFSET(0x9235430)
#define CLASS_1_C09C9DF644956437__CTOR_OFFSET UNITYSDK_OFFSET(0x92354A0)

inline static constexpr unsigned int Class_1_C09C9DF644956437_TypeDefinitionIndex = 52696;

class Class_1_C09C9DF644956437 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C09C9DF644956437_TypeDefinitionIndex)->GetStaticField(0xD050);
	}
	::System::Single Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09C9DF644956437__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4BA0E333242074E4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C09C9DF644956437_METHOD_1_4BA0E333242074E4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09C9DF644956437_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C09C9DF644956437_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FC905D4198EB592(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_C09C9DF644956437_METHOD_1_7FC905D4198EB592_OFFSET))(this, a1);
	}
};

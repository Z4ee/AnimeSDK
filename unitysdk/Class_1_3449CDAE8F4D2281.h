#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class EffectDurationConfig; }
namespace RPG::GameCore { class TriggerEffect; }

#define CLASS_1_3449CDAE8F4D2281_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1655CBD0)
#define CLASS_1_3449CDAE8F4D2281_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1655CA70)
#define CLASS_1_3449CDAE8F4D2281_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1655CD20)
#define CLASS_1_3449CDAE8F4D2281_METHOD_1_7FC905D4198EB592_OFFSET UNITYSDK_OFFSET(0x1655CEC0)
#define CLASS_1_3449CDAE8F4D2281_METHOD_1_D2539B7A95AD2FBD_OFFSET UNITYSDK_OFFSET(0x1655CD80)
#define CLASS_1_3449CDAE8F4D2281_METHOD_1_DAEDEAE95FE10B89_OFFSET UNITYSDK_OFFSET(0x1655CA80)
#define CLASS_1_3449CDAE8F4D2281_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1655CA50)
#define CLASS_1_3449CDAE8F4D2281__CTOR_OFFSET UNITYSDK_OFFSET(0x1655CF30)

inline static constexpr unsigned int Class_1_3449CDAE8F4D2281_TypeDefinitionIndex = 57169;

class Class_1_3449CDAE8F4D2281 : public ::System::Object
{
public:
	static ::Class_1_3449CDAE8F4D2281** StaticGet_PILDFLBIFJN()
	{
		return (::Class_1_3449CDAE8F4D2281**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3449CDAE8F4D2281_TypeDefinitionIndex)->GetStaticField(0x3B9B0);
	}
	::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* FHMDJOBOAAB; // 0x10
	::System::Single NMCJLENIEFC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3449CDAE8F4D2281__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3449CDAE8F4D2281_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::Class_1_3449CDAE8F4D2281* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3449CDAE8F4D2281*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3449CDAE8F4D2281_METHOD_1_24748FC20F375725_OFFSET))();
	}

	::System::Void Method_1_DAEDEAE95FE10B89(::System::Single a1, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_3449CDAE8F4D2281_METHOD_1_DAEDEAE95FE10B89_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3449CDAE8F4D2281_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3449CDAE8F4D2281_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2539B7A95AD2FBD(::RPG::GameCore::TriggerEffect* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_1_3449CDAE8F4D2281_METHOD_1_D2539B7A95AD2FBD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FC905D4198EB592(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_3449CDAE8F4D2281_METHOD_1_7FC905D4198EB592_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D4E2A0605A71F3AC_FadingDoneActionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_913;
class Class_1_9CBC71DC5240DC00;
class Class_2_8443F308FD8840B9;
class RenderItemPolymerConfig;
namespace RPG::Client { class RPGProfilerMarker; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_D4E2A0605A71F3AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1093A740)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_122508E459F25D87_OFFSET UNITYSDK_OFFSET(0x1093B900)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1093B490)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0x1093AFB0)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x1093A940)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1093A790)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_9C22BF803F744161_OFFSET UNITYSDK_OFFSET(0x1093ABF0)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1093B8A0)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_D67046CBB357BF79_OFFSET UNITYSDK_OFFSET(0x1093C140)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_DF0A53148F871577_OFFSET UNITYSDK_OFFSET(0x1093B500)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_E681B6D41E5607D0_1_OFFSET UNITYSDK_OFFSET(0x1093C090)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0x1093BFE0)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1093B890)
#define CLASS_1_D4E2A0605A71F3AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1093C2D0)
#define CLASS_1_D4E2A0605A71F3AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1093A730)

inline static constexpr unsigned int Class_1_D4E2A0605A71F3AC_TypeDefinitionIndex = 60497;

class Class_1_D4E2A0605A71F3AC : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_13()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4E2A0605A71F3AC_TypeDefinitionIndex)->GetStaticField(0x37B10);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::UnityEngine::GameObject* Field_1_4; // 0x10
	::Class_1_9CBC71DC5240DC00* Field_1_8; // 0x18
	::Class_2_8443F308FD8840B9* Field_1_12; // 0x20
	::Class_0_16E4307DCC419505_913* Field_1_5; // 0x28
	::UnityEngine::GameObject* Field_1_3; // 0x30
	::Class_1_9CBC71DC5240DC00* Field_1_7; // 0x38
	::Class_0_16E4307DCC419505_913* Field_1_6; // 0x40
	::System::Single Field_1_10; // 0x48
	::Class_1_D4E2A0605A71F3AC_FadingDoneActionType Field_1_2; // 0x4C
	::System::Boolean Field_1_11; // 0x50
	::System::Single Field_1_9; // 0x54

	::System::Void _ctor(::Class_2_8443F308FD8840B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8443F308FD8840B9*))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_9C22BF803F744161(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_9C22BF803F744161_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_6747250BC2D13457()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_6747250BC2D13457_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_DF0A53148F871577(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_DF0A53148F871577_OFFSET))(this, a1);
	}

	::System::Void Method_1_122508E459F25D87(::RenderItemPolymerConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RenderItemPolymerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_122508E459F25D87_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::Class_1_9CBC71DC5240DC00* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_9CBC71DC5240DC00*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_E681B6D41E5607D0_OFFSET))(this);
	}

	::Class_1_9CBC71DC5240DC00* Method_1_E681B6D41E5607D0_1()
	{
		return ((::Class_1_9CBC71DC5240DC00*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_E681B6D41E5607D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_D67046CBB357BF79()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_D67046CBB357BF79_OFFSET))(this);
	}
};

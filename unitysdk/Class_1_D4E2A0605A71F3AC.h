#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D4E2A0605A71F3AC_FadingDoneActionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1078;
class Class_1_1342B57709FD7AC5;
class Class_2_333B5B45BDCA1F04;
class RenderItemPolymerConfig;
namespace RPG::Client { class RPGProfilerMarker; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_D4E2A0605A71F3AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB022F50)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0xB0237C0)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_122508E459F25D87_OFFSET UNITYSDK_OFFSET(0xB024140)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB023CD0)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_9C22BF803F744161_OFFSET UNITYSDK_OFFSET(0xB023400)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_A0C3689E220BE4D5_OFFSET UNITYSDK_OFFSET(0xB023D40)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xB0240E0)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB022FA0)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_D56DAA96379ECAB9_OFFSET UNITYSDK_OFFSET(0xB023160)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_D67046CBB357BF79_OFFSET UNITYSDK_OFFSET(0xB024980)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_E681B6D41E5607D0_1_OFFSET UNITYSDK_OFFSET(0xB0248D0)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0xB024820)
#define CLASS_1_D4E2A0605A71F3AC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB0240D0)
#define CLASS_1_D4E2A0605A71F3AC__CCTOR_OFFSET UNITYSDK_OFFSET(0xB024B00)
#define CLASS_1_D4E2A0605A71F3AC__CTOR_OFFSET UNITYSDK_OFFSET(0xB022F40)

inline static constexpr unsigned int Class_1_D4E2A0605A71F3AC_TypeDefinitionIndex = 68885;

class Class_1_D4E2A0605A71F3AC : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4E2A0605A71F3AC_TypeDefinitionIndex)->GetStaticField(0x4EC60);
	}
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::Class_0_16E4307DCC419505_1078* Field_1_3; // 0x10
	::Class_1_1342B57709FD7AC5* Field_1_4; // 0x18
	::UnityEngine::GameObject* Field_1_5; // 0x20
	::Class_0_16E4307DCC419505_1078* Field_1_6; // 0x28
	::UnityEngine::GameObject* Field_1_7; // 0x30
	::Class_2_333B5B45BDCA1F04* Field_1_8; // 0x38
	::Class_1_1342B57709FD7AC5* Field_1_9; // 0x40
	::System::Single Field_1_10; // 0x48
	::System::Single Field_1_11; // 0x4C
	::Class_1_D4E2A0605A71F3AC_FadingDoneActionType Field_1_12; // 0x50
	::System::Boolean Field_1_13; // 0x54

	::System::Void _ctor(::Class_2_333B5B45BDCA1F04* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_333B5B45BDCA1F04*))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D56DAA96379ECAB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_D56DAA96379ECAB9_OFFSET))(this);
	}

	::System::Void Method_1_9C22BF803F744161(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_9C22BF803F744161_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_025E4B1A2211CF52_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_A0C3689E220BE4D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_A0C3689E220BE4D5_OFFSET))(this, a1);
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

	::Class_1_1342B57709FD7AC5* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_1342B57709FD7AC5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_E681B6D41E5607D0_OFFSET))(this);
	}

	::Class_1_1342B57709FD7AC5* Method_1_E681B6D41E5607D0_1()
	{
		return ((::Class_1_1342B57709FD7AC5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_E681B6D41E5607D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_D67046CBB357BF79()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E2A0605A71F3AC_METHOD_1_D67046CBB357BF79_OFFSET))(this);
	}
};

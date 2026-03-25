#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_848;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D3061860904844A0_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x106055B0)
#define CLASS_2_D3061860904844A0_METHOD_2_13523FD4EA5101C4_OFFSET UNITYSDK_OFFSET(0x10605600)
#define CLASS_2_D3061860904844A0_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x106052F0)
#define CLASS_2_D3061860904844A0_METHOD_2_AD04CF6369F3E2B1_OFFSET UNITYSDK_OFFSET(0x106050B0)
#define CLASS_2_D3061860904844A0_METHOD_2_D9E34E162363C06E_OFFSET UNITYSDK_OFFSET(0x10605680)
#define CLASS_2_D3061860904844A0_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x10604EF0)
#define CLASS_2_D3061860904844A0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x106056D0)
#define CLASS_2_D3061860904844A0_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x106052A0)
#define CLASS_2_D3061860904844A0_ONRETURN_OFFSET UNITYSDK_OFFSET(0x10605050)
#define CLASS_2_D3061860904844A0__CTOR_OFFSET UNITYSDK_OFFSET(0x106056E0)
#define CLASS_2_D3061860904844A0__ONBIND_OFFSET UNITYSDK_OFFSET(0x10604D30)
#define CLASS_2_D3061860904844A0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10605740)

inline static constexpr unsigned int Class_2_D3061860904844A0_TypeDefinitionIndex = 58772;

class Class_2_D3061860904844A0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Action* Field_2_3; // 0x60
	::RPG::GameCore::GameEntity* Field_2_2; // 0x68
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_848*>* Field_2_4; // 0x70
	::System::Boolean Field_2_1; // 0x78
	::System::Boolean Field_2_0; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_ONRETURN_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD04CF6369F3E2B1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_AD04CF6369F3E2B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_13523FD4EA5101C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_13523FD4EA5101C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9E34E162363C06E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_D9E34E162363C06E_OFFSET))(this);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

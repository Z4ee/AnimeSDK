#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_1008;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D3061860904844A0_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x137A7CD0)
#define CLASS_2_D3061860904844A0_METHOD_2_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x137A7DA0)
#define CLASS_2_D3061860904844A0_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x137A79C0)
#define CLASS_2_D3061860904844A0_METHOD_2_0A2969A062E1E163_OFFSET UNITYSDK_OFFSET(0x137A7770)
#define CLASS_2_D3061860904844A0_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x137A7D20)
#define CLASS_2_D3061860904844A0_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x137A7590)
#define CLASS_2_D3061860904844A0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x137A7DF0)
#define CLASS_2_D3061860904844A0_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x137A7970)
#define CLASS_2_D3061860904844A0_ONRETURN_OFFSET UNITYSDK_OFFSET(0x137A7710)
#define CLASS_2_D3061860904844A0__CTOR_OFFSET UNITYSDK_OFFSET(0x137A7E00)
#define CLASS_2_D3061860904844A0__ONBIND_OFFSET UNITYSDK_OFFSET(0x137A72F0)
#define CLASS_2_D3061860904844A0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x137A7E60)

inline static constexpr unsigned int Class_2_D3061860904844A0_TypeDefinitionIndex = 67071;

class Class_2_D3061860904844A0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Action* Field_2_0; // 0x60
	::RPG::GameCore::GameEntity* Field_2_1; // 0x68
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1008*>* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78
	::System::Boolean Field_2_4; // 0x79

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

	::System::Void Method_2_0A2969A062E1E163(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_0A2969A062E1E163_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void Method_2_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
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

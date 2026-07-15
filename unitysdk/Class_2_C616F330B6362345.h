#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1037;
class Class_1_95EEF67A826E14FF;
class Class_2_161F0FCFC6671237;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C616F330B6362345_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1923E1C0)
#define CLASS_2_C616F330B6362345_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1923E360)
#define CLASS_2_C616F330B6362345_METHOD_2_47303F9F278ED362_OFFSET UNITYSDK_OFFSET(0x1923DC10)
#define CLASS_2_C616F330B6362345_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x1923D500)
#define CLASS_2_C616F330B6362345_METHOD_2_65CF685B19AB5EC4_OFFSET UNITYSDK_OFFSET(0x1923D5A0)
#define CLASS_2_C616F330B6362345_METHOD_2_99770A90CCA648B7_OFFSET UNITYSDK_OFFSET(0x1923DD50)
#define CLASS_2_C616F330B6362345_METHOD_2_AE26C11CBE96CD41_1_OFFSET UNITYSDK_OFFSET(0x1923D990)
#define CLASS_2_C616F330B6362345_METHOD_2_AE26C11CBE96CD41_OFFSET UNITYSDK_OFFSET(0x1923D6E0)
#define CLASS_2_C616F330B6362345_METHOD_2_BA3B2013235236B1_OFFSET UNITYSDK_OFFSET(0x1923DB00)
#define CLASS_2_C616F330B6362345_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1923DFB0)
#define CLASS_2_C616F330B6362345_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1923E070)
#define CLASS_2_C616F330B6362345_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x1923E130)
#define CLASS_2_C616F330B6362345_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1923DEF0)
#define CLASS_2_C616F330B6362345_METHOD_2_FEACA58079A1D4DA_OFFSET UNITYSDK_OFFSET(0x1923D850)
#define CLASS_2_C616F330B6362345_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1923D490)
#define CLASS_2_C616F330B6362345_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1923D550)
#define CLASS_2_C616F330B6362345__CTOR_OFFSET UNITYSDK_OFFSET(0x1923E4D0)
#define CLASS_2_C616F330B6362345__ONBIND_OFFSET UNITYSDK_OFFSET(0x1923D650)

inline static constexpr unsigned int Class_2_C616F330B6362345_TypeDefinitionIndex = 68315;

class Class_2_C616F330B6362345 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_2_161F0FCFC6671237* Field_2_0; // 0x60
	::RPG::GameCore::GameEntity* Field_2_1; // 0x68
	::Class_0_16E4307DCC419505_1037* Field_2_2; // 0x70
	::System::String* Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345__CTOR_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_65CF685B19AB5EC4(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_65CF685B19AB5EC4_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE26C11CBE96CD41(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_AE26C11CBE96CD41_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE26C11CBE96CD41_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_AE26C11CBE96CD41_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA3B2013235236B1(::RPG::Client::BattleBuffToastNotify* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_BA3B2013235236B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_99770A90CCA648B7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_99770A90CCA648B7_OFFSET))(this, a1);
	}

	::Class_1_95EEF67A826E14FF* Method_2_FEACA58079A1D4DA(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_FEACA58079A1D4DA_OFFSET))(this, a1);
	}

	::Class_1_95EEF67A826E14FF* Method_2_47303F9F278ED362(::RPG::Client::BattleBuffToastNotify* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_47303F9F278ED362_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

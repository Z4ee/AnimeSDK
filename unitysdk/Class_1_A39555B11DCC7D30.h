#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRacePropertyModifier; }

#define CLASS_1_A39555B11DCC7D30_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1D0960)
#define CLASS_1_A39555B11DCC7D30_METHOD_1_9B37EC2197574EAC_OFFSET UNITYSDK_OFFSET(0x1C1D09A0)
#define CLASS_1_A39555B11DCC7D30_METHOD_1_BBA450397E8BDBE3_OFFSET UNITYSDK_OFFSET(0x1C1D0BA0)
#define CLASS_1_A39555B11DCC7D30_METHOD_1_FF3596444631797E_1_OFFSET UNITYSDK_OFFSET(0x1C1D0C40)
#define CLASS_1_A39555B11DCC7D30_METHOD_1_FF3596444631797E_OFFSET UNITYSDK_OFFSET(0x1C1D0A40)
#define CLASS_1_A39555B11DCC7D30_METHOD_1_FFF4557E60F6F97B_OFFSET UNITYSDK_OFFSET(0x1C1D08E0)
#define CLASS_1_A39555B11DCC7D30__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D0950)

inline static constexpr unsigned int Class_1_A39555B11DCC7D30_TypeDefinitionIndex = 36632;

class Class_1_A39555B11DCC7D30 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x10

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_A39555B11DCC7D30__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A39555B11DCC7D30* Method_1_FFF4557E60F6F97B(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::Class_1_A39555B11DCC7D30*(*)(::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_A39555B11DCC7D30_METHOD_1_FFF4557E60F6F97B_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A39555B11DCC7D30_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9B37EC2197574EAC(::Class_2_21AD365C113DC484* a1, ::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>*))((::PBYTE)hIl2Cpp + CLASS_1_A39555B11DCC7D30_METHOD_1_9B37EC2197574EAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF3596444631797E(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRacePropertyModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRacePropertyModifier*))((::PBYTE)hIl2Cpp + CLASS_1_A39555B11DCC7D30_METHOD_1_FF3596444631797E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BBA450397E8BDBE3(::Class_2_21AD365C113DC484* a1, ::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>*))((::PBYTE)hIl2Cpp + CLASS_1_A39555B11DCC7D30_METHOD_1_BBA450397E8BDBE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF3596444631797E_1(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRacePropertyModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRacePropertyModifier*))((::PBYTE)hIl2Cpp + CLASS_1_A39555B11DCC7D30_METHOD_1_FF3596444631797E_1_OFFSET))(this, a1, a2);
	}
};

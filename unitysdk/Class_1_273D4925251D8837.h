#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersInputActionType.h"
#include "unitysdk/RPG/GameCore/TeamTowersAIParamType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_3437ECE1CCDFA38D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_27;
class Class_0_16E4307DCC419505_28;
class Class_0_16E4307DCC419505_30;
class Class_1_6F0828FBB5B15920;
class Class_2_35962C2B7535512E;
class Class_2_465A9E6CC2B0EF21;
namespace RPG::GameCore { class TeamTowersAIConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_273D4925251D8837_GET_NEXTINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14AAC6E0)
#define CLASS_1_273D4925251D8837_METHOD_1_2DFE974D2FEBD3E4_OFFSET UNITYSDK_OFFSET(0x14AAAC00)
#define CLASS_1_273D4925251D8837_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x14AAC700)
#define CLASS_1_273D4925251D8837_METHOD_1_48A730878298E8F8_OFFSET UNITYSDK_OFFSET(0x14AAA890)
#define CLASS_1_273D4925251D8837_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x14AAA9E0)
#define CLASS_1_273D4925251D8837_METHOD_1_87DA5EB0C040E3E5_OFFSET UNITYSDK_OFFSET(0x14AAA6F0)
#define CLASS_1_273D4925251D8837_METHOD_1_88DFD67617E05BA5_OFFSET UNITYSDK_OFFSET(0x14AAA530)
#define CLASS_1_273D4925251D8837_METHOD_1_8D7C7714BEF6FF15_OFFSET UNITYSDK_OFFSET(0x14AAB4D0)
#define CLASS_1_273D4925251D8837_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x14AAB050)
#define CLASS_1_273D4925251D8837_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14AAA3D0)
#define CLASS_1_273D4925251D8837_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14AAA4E0)
#define CLASS_1_273D4925251D8837_METHOD_1_CAB0AE3B3ACFE685_OFFSET UNITYSDK_OFFSET(0x14AAB130)
#define CLASS_1_273D4925251D8837_METHOD_1_D9BFE6A940340607_OFFSET UNITYSDK_OFFSET(0x14AAC570)
#define CLASS_1_273D4925251D8837_METHOD_1_E248AC4FD950B968_OFFSET UNITYSDK_OFFSET(0x14AAB9A0)
#define CLASS_1_273D4925251D8837_METHOD_1_E60B41B0210068CD_OFFSET UNITYSDK_OFFSET(0x14AAAF30)
#define CLASS_1_273D4925251D8837_METHOD_1_F9265FC7E012B3AA_OFFSET UNITYSDK_OFFSET(0x14AAA290)
#define CLASS_1_273D4925251D8837_SET_NEXTINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14AAC6F0)
#define CLASS_1_273D4925251D8837__CTOR_OFFSET UNITYSDK_OFFSET(0x14AAC710)

inline static constexpr unsigned int Class_1_273D4925251D8837_TypeDefinitionIndex = 35599;

class Class_1_273D4925251D8837 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::Class_2_35962C2B7535512E* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_27* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_27*>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_30*>* Field_1_5; // 0x28
	::Class_0_16E4307DCC419505_28* Field_1_6; // 0x30
	::Class_2_465A9E6CC2B0EF21* Field_1_7; // 0x38
	::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType _NextInputAction_k__BackingField; // 0x40
	::System::Single Field_1_9; // 0x44
	::System::Int32 Field_1_10; // 0x48
	::System::Int32 Field_1_11; // 0x4C
	::System::Boolean Field_1_12; // 0x50
	::System::Boolean Field_1_13; // 0x51
	::System::Single Field_1_14; // 0x54
	::System::Single Field_1_15; // 0x58
	::System::Int32 Field_1_16; // 0x5C
	::System::Int32 Field_1_17; // 0x60
	::System::Int32 Field_1_18; // 0x64
	::System::Single Field_1_19; // 0x68
	::System::Int32 Field_1_20; // 0x6C
	::RPG::MVector2 Field_1_21; // 0x70
	::System::Int32 Field_1_22; // 0x78
	::System::Int32 Field_1_23; // 0x7C
	::RPG::MVector2 Field_1_24; // 0x80
	::System::Single Field_1_25; // 0x88
	::System::Single Field_1_26; // 0x8C
	::RPG::MVector2 Field_1_27; // 0x90
	::System::Single Field_1_28; // 0x98
	::System::Single Field_1_29; // 0x9C
	::System::Int32 Field_1_30; // 0xA0
	::System::Int32 Field_1_31; // 0xA4
	::System::Single Field_1_32; // 0xA8
	::System::Single Field_1_33; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F9265FC7E012B3AA(::Class_2_35962C2B7535512E* a1, ::Class_0_16E4307DCC419505_28* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::TeamTowersAIConfig* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35962C2B7535512E*, ::Class_0_16E4307DCC419505_28*, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::TeamTowersAIConfig*))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_F9265FC7E012B3AA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_88DFD67617E05BA5(::Class_2_465A9E6CC2B0EF21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_88DFD67617E05BA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_87DA5EB0C040E3E5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_87DA5EB0C040E3E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_48A730878298E8F8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_48A730878298E8F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_2DFE974D2FEBD3E4(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_2DFE974D2FEBD3E4_OFFSET))(this, a1, a2);
	}

	static ::Class_2_465A9E6CC2B0EF21* Method_1_8D7C7714BEF6FF15(::Class_0_16E4307DCC419505_27* a1)
	{
		return ((::Class_2_465A9E6CC2B0EF21*(*)(::Class_0_16E4307DCC419505_27*))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_8D7C7714BEF6FF15_OFFSET))(a1);
	}

	::System::Void Method_1_CAB0AE3B3ACFE685(::System::Single a1, ::Class_1_6F0828FBB5B15920* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_6F0828FBB5B15920*))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_CAB0AE3B3ACFE685_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_E248AC4FD950B968()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_E248AC4FD950B968_OFFSET))(this);
	}

	::System::Boolean Method_1_E60B41B0210068CD(::Struct_2_3437ECE1CCDFA38D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3437ECE1CCDFA38D))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_E60B41B0210068CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::System::Void Method_1_D9BFE6A940340607(::RPG::GameCore::TeamTowersAIParamType a1, ::Il2CppArray<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersAIParamType, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_D9BFE6A940340607_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType get_NextInputAction()
	{
		return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_GET_NEXTINPUTACTION_OFFSET))(this);
	}

	::System::Void set_NextInputAction(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_SET_NEXTINPUTACTION_OFFSET))(this, a1);
	}

	::Class_2_465A9E6CC2B0EF21* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_465A9E6CC2B0EF21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273D4925251D8837_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}
};

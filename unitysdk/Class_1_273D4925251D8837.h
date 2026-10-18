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

#define CLASS_1_273D4925251D8837_GET_NEXTINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1C5CC450)
#define CLASS_1_273D4925251D8837_METHOD_1_2DFE974D2FEBD3E4_OFFSET UNITYSDK_OFFSET(0x1C5CA990)
#define CLASS_1_273D4925251D8837_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1C5CC470)
#define CLASS_1_273D4925251D8837_METHOD_1_48A730878298E8F8_OFFSET UNITYSDK_OFFSET(0x1C5CA630)
#define CLASS_1_273D4925251D8837_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x1C5CA760)
#define CLASS_1_273D4925251D8837_METHOD_1_87DA5EB0C040E3E5_OFFSET UNITYSDK_OFFSET(0x1C5CA490)
#define CLASS_1_273D4925251D8837_METHOD_1_88DFD67617E05BA5_OFFSET UNITYSDK_OFFSET(0x1C5CA2D0)
#define CLASS_1_273D4925251D8837_METHOD_1_8D7C7714BEF6FF15_OFFSET UNITYSDK_OFFSET(0x1C5CB240)
#define CLASS_1_273D4925251D8837_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x1C5CADE0)
#define CLASS_1_273D4925251D8837_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1C5CA170)
#define CLASS_1_273D4925251D8837_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C5CA280)
#define CLASS_1_273D4925251D8837_METHOD_1_CAB0AE3B3ACFE685_OFFSET UNITYSDK_OFFSET(0x1C5CAEC0)
#define CLASS_1_273D4925251D8837_METHOD_1_D9BFE6A940340607_OFFSET UNITYSDK_OFFSET(0x1C5CC2D0)
#define CLASS_1_273D4925251D8837_METHOD_1_E248AC4FD950B968_OFFSET UNITYSDK_OFFSET(0x1C5CB710)
#define CLASS_1_273D4925251D8837_METHOD_1_E60B41B0210068CD_OFFSET UNITYSDK_OFFSET(0x1C5CACC0)
#define CLASS_1_273D4925251D8837_METHOD_1_F9265FC7E012B3AA_OFFSET UNITYSDK_OFFSET(0x1C5CA030)
#define CLASS_1_273D4925251D8837_SET_NEXTINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1C5CC460)
#define CLASS_1_273D4925251D8837__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CC480)

inline static constexpr unsigned int Class_1_273D4925251D8837_TypeDefinitionIndex = 37147;

class Class_1_273D4925251D8837 : public ::System::Object
{
public:
	// static const ::System::Single OAHNMNMGHBH; // 0x0
	// static const ::System::Single JOFEFPACONH; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_30*>* JEMGLDDOPFM; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_27*>* ALCCLOKILPL; // 0x18
	::Class_2_465A9E6CC2B0EF21* FPKJBBGNPBB; // 0x20
	::Class_0_16E4307DCC419505_28* JEOADHBDKMO; // 0x28
	::Class_0_16E4307DCC419505_27* MANEKNPNILP; // 0x30
	::Class_2_35962C2B7535512E* PDENFEFCAGN; // 0x38
	::System::Int32 MBKGOFAHEME; // 0x40
	::System::Single PGKAFGGPHMH; // 0x44
	::System::Single DGONAMEFLAI; // 0x48
	::System::Int32 EACDGPCDMFI; // 0x4C
	::System::Int32 KNLIPEKMICF; // 0x50
	::System::Single KCHICCLINJN; // 0x54
	::RPG::MVector2 CLODCALCCFF; // 0x58
	::System::Single BOINDOAKOAK; // 0x60
	::System::Boolean DLNNFPKMHLO; // 0x64
	::System::Boolean NHHALCBIMOF; // 0x65
	::System::Int32 DHMPFJDBPDF; // 0x68
	::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType _NextInputAction_k__BackingField; // 0x6C
	::System::Single MFNEBFBIAMK; // 0x70
	::System::Int32 JOOMGLOODGI; // 0x74
	::System::Single FIFMOFDCOKC; // 0x78
	::System::Single MBPEINKNHAF; // 0x7C
	::RPG::MVector2 AILIKDEBMOO; // 0x80
	::System::Int32 FDKGLFOFAJM; // 0x88
	::System::Int32 KGPAGGHKPLP; // 0x8C
	::System::Single EDENKCJENDB; // 0x90
	::System::Int32 BNKBEOHFPLM; // 0x94
	::System::Int32 EOKGNNINCNM; // 0x98
	::System::Single FPCJAMDMONB; // 0x9C
	::System::Int32 HEEIDDLIOMP; // 0xA0
	::System::Single BKKIFNGBDAM; // 0xA4
	::RPG::MVector2 HCMBEICKNCI; // 0xA8

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

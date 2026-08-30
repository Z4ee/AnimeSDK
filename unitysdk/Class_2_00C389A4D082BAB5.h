#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/AICarRuntimeState.h"

class Class_1_B6045334FA181376;
class Class_2_230F5EDDB35DAEBA;
class Class_2_A59080F652920B7A;
namespace RPG::Client { class RoadRashGameModifier_TutorialLevelAI; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_00C389A4D082BAB5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC50BB40)
#define CLASS_2_00C389A4D082BAB5_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xC50E2D0)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_13EF61FA69484524_OFFSET UNITYSDK_OFFSET(0xC50D5D0)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_1C5EC54583F2FF24_OFFSET UNITYSDK_OFFSET(0xC50D160)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC50C470)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC50C150)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xC50C5F0)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_91F02C4A88570587_OFFSET UNITYSDK_OFFSET(0xC50DD60)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0xC50BF30)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xC50C210)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_B037F716E4381760_OFFSET UNITYSDK_OFFSET(0xC50E310)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_BA1A38622022D58A_OFFSET UNITYSDK_OFFSET(0xC50D450)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_BB955B40FC9DEBFE_OFFSET UNITYSDK_OFFSET(0xC50BCD0)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_BFF66B15589BFBA9_OFFSET UNITYSDK_OFFSET(0xC50DA90)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_C8110F9A5AB27813_OFFSET UNITYSDK_OFFSET(0xC50C020)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC50D110)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xC50BBA0)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_D3E17EE162EAD52F_OFFSET UNITYSDK_OFFSET(0xC50DA00)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_E6B4D8E9B33CB8DA_OFFSET UNITYSDK_OFFSET(0xC50D220)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_EED433EF99798382_OFFSET UNITYSDK_OFFSET(0xC50DC20)
#define CLASS_2_00C389A4D082BAB5_METHOD_2_F6CE902DC5FC8BD7_OFFSET UNITYSDK_OFFSET(0xC50D780)
#define CLASS_2_00C389A4D082BAB5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC50C0E0)
#define CLASS_2_00C389A4D082BAB5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC50C790)
#define CLASS_2_00C389A4D082BAB5_TICK_OFFSET UNITYSDK_OFFSET(0xC50C800)
#define CLASS_2_00C389A4D082BAB5__CCTOR_OFFSET UNITYSDK_OFFSET(0xC50E5C0)
#define CLASS_2_00C389A4D082BAB5__CTOR_OFFSET UNITYSDK_OFFSET(0xC50BB30)

inline static constexpr unsigned int Class_2_00C389A4D082BAB5_TypeDefinitionIndex = 58582;

class Class_2_00C389A4D082BAB5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_00C389A4D082BAB5*>** StaticGet_ONOIJDOCJIL()
	{
		return (::System::Collections::Generic::List_1<::Class_2_00C389A4D082BAB5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_00C389A4D082BAB5_TypeDefinitionIndex)->GetStaticField(0x60D10);
	}
	static ::System::Int32* StaticGet_CGBFNOHNMDE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00C389A4D082BAB5_TypeDefinitionIndex)->GetStaticField(0x13D50);
	}
	static ::System::Boolean* StaticGet_DPDNECGFDGK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00C389A4D082BAB5_TypeDefinitionIndex)->GetStaticField(0x13D54);
	}
	static ::System::Boolean* StaticGet_JPKINJEBNJD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00C389A4D082BAB5_TypeDefinitionIndex)->GetStaticField(0x13D55);
	}
	static ::System::Single* StaticGet_EJJGHKDJHEL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00C389A4D082BAB5_TypeDefinitionIndex)->GetStaticField(0x13D58);
	}
	// static const ::System::String* GHOHEHDDCEC; // 0x0
	// static const ::System::Boolean FFGKPOENFKC; // 0x0
	// static const ::System::Single OHHFCKJPBBD; // 0x0
	// static const ::System::Single OCGDLEFIHEG; // 0x0
	// static const ::System::Single OOMMGKHFKGK; // 0x0
	// static const ::System::Single CPMOFCGEBJB; // 0x0
	// static const ::System::Single GDEIMMBACFB; // 0x0
	// static const ::System::Single ELLOGBAKIHD; // 0x0
	// static const ::System::Single CGJODGHIDNG; // 0x0
	// static const ::System::Single ADEJOKEKCLE; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::RoadRashGameModifier_TutorialLevelAI* OFKGLJOAMLD; // 0x20
	::Class_1_B6045334FA181376* EJJMBPMHOBA; // 0x28
	::System::Boolean AGEDKBBFJFL; // 0x30
	::System::Boolean IGHAMGNKHAO; // 0x31
	::System::Single DPALCHEKJHC; // 0x34
	::System::Single MJIDMGGDMIB; // 0x38
	::System::Boolean OAPBNLFGHEB; // 0x3C
	::System::Boolean ELMNAHHPFLK; // 0x3D
	::System::Boolean LFMEDHFJMKB; // 0x3E
	::System::Single MELNEEBEJBA; // 0x40
	::System::Single BOGMKKMNLJL; // 0x44
	::System::Single EIFDPPIFEEJ; // 0x48
	::System::Single MAOGDONHAHM; // 0x4C
	::System::Int32 ONPJLDJHNDG; // 0x50
	::System::Boolean POPPDFDEINM; // 0x54
	::System::Boolean CLMIEEBDLBL; // 0x55
	::System::Boolean BDIIKNAAIFD; // 0x56
	::System::Boolean MKPJJPLDOBI; // 0x57
	::System::Single OIPLGPBHAHL; // 0x58
	::System::Single ADPMMNEFDPA; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI*))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_91F02C4A88570587(::RPG::Client::LittleGame::RoadRash::AICarRuntimeState& a1, ::Class_2_230F5EDDB35DAEBA* a2, ::Class_2_230F5EDDB35DAEBA* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Single a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::AICarRuntimeState&, ::Class_2_230F5EDDB35DAEBA*, ::Class_2_230F5EDDB35DAEBA*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_91F02C4A88570587_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_GETCONFIG_OFFSET))(this);
	}

	static ::System::Int32 Method_2_B037F716E4381760(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_B037F716E4381760_OFFSET))(a1, a2);
	}

	::System::Single Method_2_BFF66B15589BFBA9(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_BFF66B15589BFBA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3E17EE162EAD52F(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_D3E17EE162EAD52F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	static ::System::Boolean Method_2_1C5EC54583F2FF24(::Class_2_A59080F652920B7A* a1)
	{
		return ((::System::Boolean(*)(::Class_2_A59080F652920B7A*))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_1C5EC54583F2FF24_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_EED433EF99798382(::Class_2_A59080F652920B7A* a1, ::Class_2_230F5EDDB35DAEBA* a2)
	{
		return ((::System::Boolean(*)(::Class_2_A59080F652920B7A*, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_EED433EF99798382_OFFSET))(a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Single Method_2_13EF61FA69484524(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_13EF61FA69484524_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_F6CE902DC5FC8BD7(::Class_2_A59080F652920B7A* a1, ::Class_2_230F5EDDB35DAEBA* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A59080F652920B7A*, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_F6CE902DC5FC8BD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_BB955B40FC9DEBFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_BB955B40FC9DEBFE_OFFSET))(this);
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_A88B36294D55B85C_OFFSET))(this);
	}

	static ::System::Void Method_2_BA1A38622022D58A(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_BA1A38622022D58A_OFFSET))(a1);
	}

	::System::Void Method_2_C8110F9A5AB27813()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_C8110F9A5AB27813_OFFSET))(this);
	}

	::System::Void Method_2_E6B4D8E9B33CB8DA(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5_METHOD_2_E6B4D8E9B33CB8DA_OFFSET))(this, a1);
	}
};

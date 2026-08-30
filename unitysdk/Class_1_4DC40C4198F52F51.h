#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4DC40C4198F52F51_ColumeType.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA;
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBattleMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4DC40C4198F52F51_METHOD_1_05F32324BECF0448_OFFSET UNITYSDK_OFFSET(0xBA45920)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_0E22B68DB534BAEE_OFFSET UNITYSDK_OFFSET(0xBA45990)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_2FD16EEAD9984A60_OFFSET UNITYSDK_OFFSET(0xBA47AE0)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_4348D348D50A2B81_OFFSET UNITYSDK_OFFSET(0xBA43F20)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_51A2EAB7889E8A59_OFFSET UNITYSDK_OFFSET(0xBA47000)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_5D9646F4A7309CF6_OFFSET UNITYSDK_OFFSET(0xBA469B0)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0xBA43F90)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_6B5C45B91CB8890A_OFFSET UNITYSDK_OFFSET(0xBA46600)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xBA47E40)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_7F5AA14837C837AE_OFFSET UNITYSDK_OFFSET(0xBA46E50)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_8F74C4A88302B13A_1_OFFSET UNITYSDK_OFFSET(0xBA45DC0)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_8F74C4A88302B13A_OFFSET UNITYSDK_OFFSET(0xBA45C00)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_908758788F1E500B_OFFSET UNITYSDK_OFFSET(0xBA47730)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_962761C929DB2E3F_OFFSET UNITYSDK_OFFSET(0xBA444C0)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_AD890FF2759AE6DF_OFFSET UNITYSDK_OFFSET(0xBA47530)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_CF3FF89BC7293141_OFFSET UNITYSDK_OFFSET(0xBA44090)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_D009A011D7E59617_OFFSET UNITYSDK_OFFSET(0xBA45F80)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_D0D2894DFBF32E4A_OFFSET UNITYSDK_OFFSET(0xBA426B0)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_DC62087FC8595E21_OFFSET UNITYSDK_OFFSET(0xBA46B60)
#define CLASS_1_4DC40C4198F52F51_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0xBA43DE0)
#define CLASS_1_4DC40C4198F52F51_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xBA432F0)
#define CLASS_1_4DC40C4198F52F51_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xBA43950)
#define CLASS_1_4DC40C4198F52F51__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA423E0)
#define CLASS_1_4DC40C4198F52F51__CTOR_OFFSET UNITYSDK_OFFSET(0xBA47E50)

inline static constexpr unsigned int Class_1_4DC40C4198F52F51_TypeDefinitionIndex = 54468;

class Class_1_4DC40C4198F52F51 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_GLFANIFAMOO()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DC40C4198F52F51_TypeDefinitionIndex)->GetStaticField(0x48070);
	}
	static ::System::String** StaticGet_NDMBBNJPGGB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DC40C4198F52F51_TypeDefinitionIndex)->GetStaticField(0x48078);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_PDKAECMJECD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DC40C4198F52F51_TypeDefinitionIndex)->GetStaticField(0x48080);
	}
	static ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>** StaticGet_GCFJMINLDFP()
	{
		return (::Il2CppArray<::RPG::GameCore::RtAbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DC40C4198F52F51_TypeDefinitionIndex)->GetStaticField(0x48088);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_MDAMKDHCBMO()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DC40C4198F52F51_TypeDefinitionIndex)->GetStaticField(0x48090);
	}
	static ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>** StaticGet_NOHHEJMBMCO()
	{
		return (::Il2CppArray<::RPG::GameCore::RtAbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DC40C4198F52F51_TypeDefinitionIndex)->GetStaticField(0x48098);
	}
	// static const ::System::String* PCIMCJGPAEI; // 0x0
	// static const ::System::String* GKDBBPCHGOG; // 0x0
	// static const ::System::String* LFPGLDENDEM; // 0x0
	// static const ::System::String* BMLAMNOOGCN; // 0x0
	// static const ::System::String* LKGMNOKKFHK; // 0x0
	// static const ::System::String* MCLPNDHABBB; // 0x0
	// static const ::System::String* DHMGGCCFKPH; // 0x0
	// static const ::System::String* JLCNNHMLJNH; // 0x0
	// static const ::System::String* HOHNLKFFBFN; // 0x0
	// static const ::System::String* NJADGNPDNLJ; // 0x0
	// static const ::System::String* KIPAFLELKKA; // 0x0
	// static const ::System::String* CDJADKLOHDI; // 0x0
	// static const ::System::String* KGBCFEIJHOA; // 0x0
	// static const ::System::String* LALOBIAEOLC; // 0x0
	// static const ::System::String* JOFLCFBJFOK; // 0x0
	// static const ::System::String* MOJPDDAOIMM; // 0x0
	// static const ::System::String* HHMEHOCPEPA; // 0x0
	// static const ::System::String* KEJGCDHMGDD; // 0x0
	// static const ::System::String* LKEKLMHDBAL; // 0x0
	// static const ::System::String* BKAKPIALGLF; // 0x0
	// static const ::System::String* PAOENFNNBOK; // 0x0
	// static const ::System::String* KGNCKCMHMJK; // 0x0
	// static const ::System::String* JBNIAKPOAMG; // 0x0
	// static const ::System::String* PGDKAJLHBDA; // 0x0
	// static const ::System::String* MLHILPLHIHO; // 0x0
	// static const ::System::String* AHFKGICOODI; // 0x0
	// static const ::System::String* IPHIKMLGKOB; // 0x0
	// static const ::System::String* KHEJKCBCAKO; // 0x0
	// static const ::System::String* DGAAHCCKGHH; // 0x0
	// static const ::System::String* OGJHDOEBJEP; // 0x0
	// static const ::System::String* JLEGLAFNONH; // 0x0
	// static const ::System::String* KIBNJOKPBFG; // 0x0
	// static const ::System::String* MAMNNLDILBL; // 0x0
	// static const ::System::String* EKLCEEDJIOF; // 0x0
	// static const ::System::String* CPJKDNDNJPF; // 0x0
	// static const ::System::String* JMHPIECCOHK; // 0x0
	// static const ::System::String* DJHIEEJLDFC; // 0x0
	// static const ::System::String* GGPHOOEGGOM; // 0x0
	// static const ::System::String* AKPGNEEDFGE; // 0x0
	::System::String* JLPFONFICNK; // 0x10
	::RPG::GameCore::RtBattleMode* BHJDJDPLCLP; // 0x18
	::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>* BMFKEHONEFH; // 0x20
	::System::Collections::Generic::List_1<::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA*>* GBOFGEEPFCM; // 0x28
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x30
	::System::Boolean AMAHANLOFHO; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_ONPLUGINUNINIT_OFFSET))(this);
	}

	static ::System::String* Method_1_4348D348D50A2B81()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_4348D348D50A2B81_OFFSET))();
	}

	::System::Void Method_1_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CF3FF89BC7293141(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_CF3FF89BC7293141_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_D0D2894DFBF32E4A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_D0D2894DFBF32E4A_OFFSET))();
	}

	::System::Void Method_1_962761C929DB2E3F(::RPG::GameCore::CSVRow* a1, ::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_962761C929DB2E3F_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_0E22B68DB534BAEE(::Class_1_4DC40C4198F52F51_ColumeType a1, ::RPG::GameCore::RtAbilityProperty a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_4DC40C4198F52F51_ColumeType, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_0E22B68DB534BAEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05F32324BECF0448(::RPG::GameCore::CSVRow* a1, ::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_05F32324BECF0448_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F74C4A88302B13A(::RPG::GameCore::CSVRow* a1, ::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_8F74C4A88302B13A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F74C4A88302B13A_1(::RPG::GameCore::CSVRow* a1, ::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_4DC40C4198F52F51_Class_1_A0EFD53562DEA7DA*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_8F74C4A88302B13A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D009A011D7E59617(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_D009A011D7E59617_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B5C45B91CB8890A(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_6B5C45B91CB8890A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D9646F4A7309CF6(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_5D9646F4A7309CF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC62087FC8595E21(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_DC62087FC8595E21_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F5AA14837C837AE(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_7F5AA14837C837AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_51A2EAB7889E8A59(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_51A2EAB7889E8A59_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD890FF2759AE6DF(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_AD890FF2759AE6DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_908758788F1E500B(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_908758788F1E500B_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FD16EEAD9984A60(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_2FD16EEAD9984A60_OFFSET))(this, a1);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};

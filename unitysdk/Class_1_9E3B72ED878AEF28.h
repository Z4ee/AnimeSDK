#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_483;
class Class_1_1763C3F870E54CEB;
class Class_1_9E3B72ED878AEF28_Class_1_C278875DDF1F66F8;
class Class_1_DA32E543F3E152DD;
class Class_3_98C806684F7CC372_12;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9E3B72ED878AEF28_METHOD_1_335E17AC304F13C4_OFFSET UNITYSDK_OFFSET(0x164B51C0)
#define CLASS_1_9E3B72ED878AEF28_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x164B4EC0)
#define CLASS_1_9E3B72ED878AEF28_METHOD_1_47311AA3A267DC77_OFFSET UNITYSDK_OFFSET(0x164B53A0)
#define CLASS_1_9E3B72ED878AEF28_METHOD_1_99B79EBE9678BFB7_OFFSET UNITYSDK_OFFSET(0x164B4880)
#define CLASS_1_9E3B72ED878AEF28_METHOD_1_A5FD3DCE5427C711_OFFSET UNITYSDK_OFFSET(0x164B4E10)
#define CLASS_1_9E3B72ED878AEF28_METHOD_1_C58EA836B8C3CA1D_OFFSET UNITYSDK_OFFSET(0x164B5100)
#define CLASS_1_9E3B72ED878AEF28_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x164B4830)
#define CLASS_1_9E3B72ED878AEF28_METHOD_1_FE6D3CB6F205F453_OFFSET UNITYSDK_OFFSET(0x164B5860)
#define CLASS_1_9E3B72ED878AEF28__CCTOR_OFFSET UNITYSDK_OFFSET(0x164B6230)
#define CLASS_1_9E3B72ED878AEF28__CTOR_OFFSET UNITYSDK_OFFSET(0x164B6150)

inline static constexpr unsigned int Class_1_9E3B72ED878AEF28_TypeDefinitionIndex = 54434;

class Class_1_9E3B72ED878AEF28 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::IVec2>** StaticGet_GCLOMHAEOIN()
	{
		return (::Il2CppArray<::RPG::GameCore::IVec2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3B72ED878AEF28_TypeDefinitionIndex)->GetStaticField(0x631E0);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IVec2, ::Class_1_9E3B72ED878AEF28_Class_1_C278875DDF1F66F8*>* ADKMOGEDHKN; // 0x10
	::Class_1_1763C3F870E54CEB* NPMFLJPODJF; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9E3B72ED878AEF28_Class_1_C278875DDF1F66F8*>* BGGLCMPFICA; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9E3B72ED878AEF28_Class_1_C278875DDF1F66F8*>* NJOJNADLJMN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1763C3F870E54CEB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1763C3F870E54CEB*))((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_99B79EBE9678BFB7(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::RPG::GameCore::IVec2 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a5, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::RPG::GameCore::IVec2, ::System::Int32, ::System::Int32, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*))((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28_METHOD_1_99B79EBE9678BFB7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_47311AA3A267DC77(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2& a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28_METHOD_1_47311AA3A267DC77_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_FE6D3CB6F205F453(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::Class_0_16E4307DCC419505_483* a2, ::RPG::GameCore::IVec2 a3, ::RPG::GameCore::IVec2 a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::Class_0_16E4307DCC419505_483*, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28_METHOD_1_FE6D3CB6F205F453_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_A5FD3DCE5427C711(::Class_1_DA32E543F3E152DD* a1, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DA32E543F3E152DD*, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*))((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28_METHOD_1_A5FD3DCE5427C711_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_1_335E17AC304F13C4(::Class_1_9E3B72ED878AEF28_Class_1_C278875DDF1F66F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E3B72ED878AEF28_Class_1_C278875DDF1F66F8*))((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28_METHOD_1_335E17AC304F13C4_OFFSET))(this, a1);
	}

	::Class_1_9E3B72ED878AEF28_Class_1_C278875DDF1F66F8* Method_1_C58EA836B8C3CA1D()
	{
		return ((::Class_1_9E3B72ED878AEF28_Class_1_C278875DDF1F66F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E3B72ED878AEF28_METHOD_1_C58EA836B8C3CA1D_OFFSET))(this);
	}
};

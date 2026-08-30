#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_255;
class Class_1_B7D8FCA21FE37AFD;
class Class_2_68CB91321C3E76A7;
class Class_2_D3DC74FCB64200A3_Class_1_935F1C58F3EECE28;
namespace RPG::GameCore { class LittleGameAbilityPixAirFireMissle; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D3DC74FCB64200A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153AA500)
#define CLASS_2_D3DC74FCB64200A3_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x153AC4E0)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_070B85DE6F787526_OFFSET UNITYSDK_OFFSET(0x153AB2E0)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x153AAE80)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_0B2772044994A2C5_OFFSET UNITYSDK_OFFSET(0x153AC520)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_2B3E418FCEB4ACC0_OFFSET UNITYSDK_OFFSET(0x153AC5E0)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x153AB860)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_4D7B4CA2F3097BB0_OFFSET UNITYSDK_OFFSET(0x153ABF90)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_4E6F72124EC1C84B_OFFSET UNITYSDK_OFFSET(0x153ABF20)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x153AB740)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_B3D3AD8F3E59981A_OFFSET UNITYSDK_OFFSET(0x153AB3D0)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_B7BDCD0E08EC15F6_OFFSET UNITYSDK_OFFSET(0x153AB8E0)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_C38F03C1E988B48E_OFFSET UNITYSDK_OFFSET(0x153AAF90)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x153AC470)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_D6EE2EB5A2CB5688_OFFSET UNITYSDK_OFFSET(0x153AB140)
#define CLASS_2_D3DC74FCB64200A3_METHOD_2_DC822FA3C145458D_OFFSET UNITYSDK_OFFSET(0x153ABE90)
#define CLASS_2_D3DC74FCB64200A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153AA5A0)
#define CLASS_2_D3DC74FCB64200A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x153AC270)
#define CLASS_2_D3DC74FCB64200A3_TICK_OFFSET UNITYSDK_OFFSET(0x153AC320)
#define CLASS_2_D3DC74FCB64200A3__CTOR_OFFSET UNITYSDK_OFFSET(0x153AA490)

inline static constexpr unsigned int Class_2_D3DC74FCB64200A3_TypeDefinitionIndex = 58341;

class Class_2_D3DC74FCB64200A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_BDNOFBGDBFF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3DC74FCB64200A3_TypeDefinitionIndex)->GetStaticField(0x14DC0);
	}
	static ::System::Int32* StaticGet_LCFIPJPEKLK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3DC74FCB64200A3_TypeDefinitionIndex)->GetStaticField(0x14DC4);
	}
	static ::System::Int32* StaticGet_CNGFGKLFHOD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3DC74FCB64200A3_TypeDefinitionIndex)->GetStaticField(0x14DC8);
	}
	static ::System::Boolean* StaticGet_AHBDEBJKMOC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3DC74FCB64200A3_TypeDefinitionIndex)->GetStaticField(0x14DCC);
	}
	static ::System::Single* StaticGet_PLBLHNPPLAF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3DC74FCB64200A3_TypeDefinitionIndex)->GetStaticField(0x14DD0);
	}
	// static const ::System::Single DNIMBGFNGKM; // 0x0
	// static const ::System::String* FOHPANOLBGM; // 0x0
	// static const ::System::String* DNGIMJCIIIK; // 0x0
	// static const ::System::String* NLNONDMDKKE; // 0x0
	// static const ::System::String* HIOKECIJOPP; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::System::Collections::Generic::List_1<::Class_2_D3DC74FCB64200A3_Class_1_935F1C58F3EECE28*>* DIJHIMLLBHG; // 0x20
	::RPG::GameCore::LittleGameAbilityPixAirFireMissle* OFKGLJOAMLD; // 0x28
	::Class_1_B7D8FCA21FE37AFD* KDKAGOHPOOC; // 0x30
	::System::Boolean OJKJLINNHCJ; // 0x38
	::System::Int32 AGKGKJFNBED; // 0x3C
	::System::Single BPAIDCADMDO; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle*))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_2_B3D3AD8F3E59981A(::System::Int32 a1)
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_B3D3AD8F3E59981A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_B7BDCD0E08EC15F6(::Class_2_D3DC74FCB64200A3_Class_1_935F1C58F3EECE28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D3DC74FCB64200A3_Class_1_935F1C58F3EECE28*))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_B7BDCD0E08EC15F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D7B4CA2F3097BB0(::RPG::GameCore::TaskContext* a1, ::Class_2_68CB91321C3E76A7* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_2_68CB91321C3E76A7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_4D7B4CA2F3097BB0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_GETCONFIG_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_C38F03C1E988B48E(::Class_0_16E4307DCC419505_255* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_C38F03C1E988B48E_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::Class_1_B7D8FCA21FE37AFD* Method_2_D6EE2EB5A2CB5688()
	{
		return ((::Class_1_B7D8FCA21FE37AFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_D6EE2EB5A2CB5688_OFFSET))(this);
	}

	::System::Int32 Method_2_070B85DE6F787526(::Class_2_68CB91321C3E76A7* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_070B85DE6F787526_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_DC822FA3C145458D(::Class_2_68CB91321C3E76A7* a1)
	{
		return ((::System::Int32(*)(::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_DC822FA3C145458D_OFFSET))(a1);
	}

	static ::System::Single Method_2_4E6F72124EC1C84B(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_4E6F72124EC1C84B_OFFSET))(a1);
	}

	static ::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_0865E94460F11643_OFFSET))();
	}

	static ::System::Void Method_2_0B2772044994A2C5(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_0B2772044994A2C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_2B3E418FCEB4ACC0(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_METHOD_2_2B3E418FCEB4ACC0_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5B59D99E2BF00D7F;
class Class_1_6C3F9A42035397E0;
class Class_1_7C67B6722D48B6DB;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_19D496A9E85766D1_GET__LOAD_COMP_VIEW_RADIUS_POW2_OFFSET UNITYSDK_OFFSET(0xB3749B0)
#define CLASS_1_19D496A9E85766D1_GET__UNLOAD_COMP_VIEW_RADIUS_POW2_OFFSET UNITYSDK_OFFSET(0xB3749F0)
#define CLASS_1_19D496A9E85766D1_METHOD_1_04B5EDB18FECE00C_OFFSET UNITYSDK_OFFSET(0xB373880)
#define CLASS_1_19D496A9E85766D1_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xB3712E0)
#define CLASS_1_19D496A9E85766D1_METHOD_1_38DF15199A72A821_OFFSET UNITYSDK_OFFSET(0xB371580)
#define CLASS_1_19D496A9E85766D1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB371140)
#define CLASS_1_19D496A9E85766D1_METHOD_1_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0xB372F90)
#define CLASS_1_19D496A9E85766D1_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB372EE0)
#define CLASS_1_19D496A9E85766D1_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xB3737D0)
#define CLASS_1_19D496A9E85766D1_METHOD_1_5FEC76BECBF15C28_OFFSET UNITYSDK_OFFSET(0xB374B10)
#define CLASS_1_19D496A9E85766D1_METHOD_1_658B76B8CF96D59E_OFFSET UNITYSDK_OFFSET(0xB372CA0)
#define CLASS_1_19D496A9E85766D1_METHOD_1_66A26E3317E26881_OFFSET UNITYSDK_OFFSET(0xB372500)
#define CLASS_1_19D496A9E85766D1_METHOD_1_7611EAFCCADCE283_OFFSET UNITYSDK_OFFSET(0xB372150)
#define CLASS_1_19D496A9E85766D1_METHOD_1_78A816EDF045E4C8_OFFSET UNITYSDK_OFFSET(0xB371C60)
#define CLASS_1_19D496A9E85766D1_METHOD_1_7F479C51A6BB116C_OFFSET UNITYSDK_OFFSET(0xB372B90)
#define CLASS_1_19D496A9E85766D1_METHOD_1_8D0B2692E6B264FE_OFFSET UNITYSDK_OFFSET(0xB374120)
#define CLASS_1_19D496A9E85766D1_METHOD_1_944ABDAA6FA47E49_OFFSET UNITYSDK_OFFSET(0xB373040)
#define CLASS_1_19D496A9E85766D1_METHOD_1_94F09F1DE4D5A02E_OFFSET UNITYSDK_OFFSET(0xB374A30)
#define CLASS_1_19D496A9E85766D1_METHOD_1_9FEF743119D36039_OFFSET UNITYSDK_OFFSET(0xB373FD0)
#define CLASS_1_19D496A9E85766D1_METHOD_1_A46C25C9468879BF_OFFSET UNITYSDK_OFFSET(0xB373910)
#define CLASS_1_19D496A9E85766D1_METHOD_1_AD1EC85440CF93A6_OFFSET UNITYSDK_OFFSET(0xB373420)
#define CLASS_1_19D496A9E85766D1_METHOD_1_C4533278489E08D3_OFFSET UNITYSDK_OFFSET(0xB374200)
#define CLASS_1_19D496A9E85766D1_METHOD_1_ED4FAF675062F47D_OFFSET UNITYSDK_OFFSET(0xB373ED0)
#define CLASS_1_19D496A9E85766D1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB371130)
#define CLASS_1_19D496A9E85766D1_METHOD_1_F2478E3FA4E77A8D_OFFSET UNITYSDK_OFFSET(0xB371E40)
#define CLASS_1_19D496A9E85766D1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB374C20)
#define CLASS_1_19D496A9E85766D1__CTOR_OFFSET UNITYSDK_OFFSET(0xB371190)

inline static constexpr unsigned int Class_1_19D496A9E85766D1_TypeDefinitionIndex = 69213;

class Class_1_19D496A9E85766D1 : public ::System::Object
{
public:
	static ::System::Single* StaticGet___UNLOAD_COMP_VIEW_RADIUS_POW2_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_19D496A9E85766D1_TypeDefinitionIndex)->GetStaticField(0xD4D0);
	}
	static ::System::Single* StaticGet___LOAD_COMP_VIEW_RADIUS_POW2_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_19D496A9E85766D1_TypeDefinitionIndex)->GetStaticField(0xD4D4);
	}
	static ::System::Int32* StaticGet_LKIJFPMICKN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_19D496A9E85766D1_TypeDefinitionIndex)->GetStaticField(0xD4D8);
	}
	// static const ::System::Single CFGCPDGFEHC; // 0x0
	// static const ::System::Single KMNAKCDIJHB; // 0x0
	// static const ::System::Single DBAODDLJGCA; // 0x0
	::System::Collections::Generic::List_1<::Class_1_5B59D99E2BF00D7F*>* EPEJEELKFCH; // 0x10
	::System::Collections::Generic::List_1<::Class_1_7C67B6722D48B6DB*>* CHMAOEOJLDO; // 0x18
	::RPG::Client::MapDef* MJKJCCNJACA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5B59D99E2BF00D7F*>* KKHIGAFANAA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7C67B6722D48B6DB*>* FDEMDADPAPH; // 0x30
	::System::Collections::Generic::List_1<::Class_1_6C3F9A42035397E0*>* NGCFGPEDHBP; // 0x38
	::System::Comparison_1<::Class_1_6C3F9A42035397E0*>* FOOAJNPIICI; // 0x40
	::System::Collections::Generic::List_1<::Class_1_6C3F9A42035397E0*>* DIPMGDEOPMD; // 0x48
	::System::Int32 KLEIODILCJN; // 0x50
	::System::Boolean AAECOAAJBFE; // 0x54
	::System::Single JHDCBJMELCG; // 0x58
	::System::Single AHCLECBNOAN; // 0x5C
	::System::Int32 HJIJPPEKDBD; // 0x60
	::System::Single MMDFPBFGHEP; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_38DF15199A72A821(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_38DF15199A72A821_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2478E3FA4E77A8D(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_F2478E3FA4E77A8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7611EAFCCADCE283(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_7611EAFCCADCE283_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F479C51A6BB116C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_7F479C51A6BB116C_OFFSET))(this, a1);
	}

	::System::Void Method_1_658B76B8CF96D59E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_658B76B8CF96D59E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_4307B2A4B4A12C1A_1_OFFSET))(this);
	}

	::System::Void Method_1_944ABDAA6FA47E49(::System::UInt32 a1, ::RPG::GameCore::LevelCrowdInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelCrowdInfo*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_944ABDAA6FA47E49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AD1EC85440CF93A6(::System::UInt32 a1, ::RPG::GameCore::LevelCrowdInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelCrowdInfo*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_AD1EC85440CF93A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_6C3F9A42035397E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C3F9A42035397E0*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_04B5EDB18FECE00C(::Class_1_6C3F9A42035397E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C3F9A42035397E0*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_04B5EDB18FECE00C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A46C25C9468879BF(::Class_1_7C67B6722D48B6DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C67B6722D48B6DB*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_A46C25C9468879BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED4FAF675062F47D(::Class_1_7C67B6722D48B6DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C67B6722D48B6DB*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_ED4FAF675062F47D_OFFSET))(this, a1);
	}

	::Class_1_7C67B6722D48B6DB* Method_1_9FEF743119D36039(::System::String* a1)
	{
		return ((::Class_1_7C67B6722D48B6DB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_9FEF743119D36039_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8D0B2692E6B264FE(::System::String* a1, ::Class_1_7C67B6722D48B6DB*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_7C67B6722D48B6DB*&))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_8D0B2692E6B264FE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_78A816EDF045E4C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_78A816EDF045E4C8_OFFSET))(this);
	}

	::System::Void Method_1_66A26E3317E26881(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_66A26E3317E26881_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_C4533278489E08D3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_C4533278489E08D3_OFFSET))(a1);
	}

	static ::System::Single get__LOAD_COMP_VIEW_RADIUS_POW2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_GET__LOAD_COMP_VIEW_RADIUS_POW2_OFFSET))();
	}

	static ::System::Single get__UNLOAD_COMP_VIEW_RADIUS_POW2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_GET__UNLOAD_COMP_VIEW_RADIUS_POW2_OFFSET))();
	}

	::System::Int32 Method_1_94F09F1DE4D5A02E(::Class_1_6C3F9A42035397E0* a1, ::Class_1_6C3F9A42035397E0* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_6C3F9A42035397E0*, ::Class_1_6C3F9A42035397E0*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_94F09F1DE4D5A02E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5FEC76BECBF15C28(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_19D496A9E85766D1_METHOD_1_5FEC76BECBF15C28_OFFSET))(this, a1);
	}
};

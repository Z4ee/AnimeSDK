#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_18FA54BA9B277765;
class Class_1_B4575D4416857720;
class Class_1_DACE4D21D4FC5F48;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_59E967A53C7B71C0_GET__LOAD_COMP_VIEW_RADIUS_POW2_OFFSET UNITYSDK_OFFSET(0x144E3D50)
#define CLASS_1_59E967A53C7B71C0_GET__UNLOAD_COMP_VIEW_RADIUS_POW2_OFFSET UNITYSDK_OFFSET(0x144E3D90)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_036034241CAEB3FB_OFFSET UNITYSDK_OFFSET(0x144E27F0)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x144E11C0)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x144E1020)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0x144E2BA0)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x144E2AF0)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x144E2C50)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_59760BD7F2ED7128_1_OFFSET UNITYSDK_OFFSET(0x144E3350)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_59760BD7F2ED7128_OFFSET UNITYSDK_OFFSET(0x144E2D00)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_5FEC76BECBF15C28_OFFSET UNITYSDK_OFFSET(0x144E3EB0)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_658B76B8CF96D59E_OFFSET UNITYSDK_OFFSET(0x144E28B0)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_66A26E3317E26881_OFFSET UNITYSDK_OFFSET(0x144E2160)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_7611EAFCCADCE283_OFFSET UNITYSDK_OFFSET(0x144E1DB0)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_78A816EDF045E4C8_OFFSET UNITYSDK_OFFSET(0x144E1960)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_7A47577643EFCBA4_OFFSET UNITYSDK_OFFSET(0x144E1B40)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_94F09F1DE4D5A02E_OFFSET UNITYSDK_OFFSET(0x144E3DD0)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_9FEF743119D36039_OFFSET UNITYSDK_OFFSET(0x144E3450)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_C269CCA5765CA0B8_OFFSET UNITYSDK_OFFSET(0x144E2E10)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_C4533278489E08D3_OFFSET UNITYSDK_OFFSET(0x144E35A0)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_EBC85A794A575D21_OFFSET UNITYSDK_OFFSET(0x144E1450)
#define CLASS_1_59E967A53C7B71C0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x144E1010)
#define CLASS_1_59E967A53C7B71C0__CCTOR_OFFSET UNITYSDK_OFFSET(0x144E3FC0)
#define CLASS_1_59E967A53C7B71C0__CTOR_OFFSET UNITYSDK_OFFSET(0x144E1070)

inline static constexpr unsigned int Class_1_59E967A53C7B71C0_TypeDefinitionIndex = 64736;

class Class_1_59E967A53C7B71C0 : public ::System::Object
{
public:
	static ::System::Single* StaticGet___LOAD_COMP_VIEW_RADIUS_POW2_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59E967A53C7B71C0_TypeDefinitionIndex)->GetStaticField(0xD370);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59E967A53C7B71C0_TypeDefinitionIndex)->GetStaticField(0xD374);
	}
	static ::System::Single* StaticGet___UNLOAD_COMP_VIEW_RADIUS_POW2_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59E967A53C7B71C0_TypeDefinitionIndex)->GetStaticField(0xD378);
	}
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	::System::Collections::Generic::List_1<::Class_1_DACE4D21D4FC5F48*>* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_18FA54BA9B277765*>* Field_1_7; // 0x18
	::RPG::Client::MapDef* Field_1_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B4575D4416857720*>* Field_1_9; // 0x28
	::System::Comparison_1<::Class_1_DACE4D21D4FC5F48*>* Field_1_10; // 0x30
	::System::Collections::Generic::List_1<::Class_1_18FA54BA9B277765*>* Field_1_11; // 0x38
	::System::Collections::Generic::List_1<::Class_1_DACE4D21D4FC5F48*>* Field_1_12; // 0x40
	::System::Collections::Generic::List_1<::Class_1_B4575D4416857720*>* Field_1_13; // 0x48
	::System::Int32 Field_1_14; // 0x50
	::System::Single Field_1_15; // 0x54
	::System::Int32 Field_1_16; // 0x58
	::System::Single Field_1_17; // 0x5C
	::System::Boolean Field_1_18; // 0x60
	::System::Single Field_1_19; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_EBC85A794A575D21(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_EBC85A794A575D21_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A47577643EFCBA4(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_7A47577643EFCBA4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7611EAFCCADCE283(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_7611EAFCCADCE283_OFFSET))(this, a1);
	}

	::System::Void Method_1_036034241CAEB3FB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_036034241CAEB3FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_658B76B8CF96D59E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_658B76B8CF96D59E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_4307B2A4B4A12C1A_1_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_DACE4D21D4FC5F48* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DACE4D21D4FC5F48*))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_59760BD7F2ED7128(::Class_1_DACE4D21D4FC5F48* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DACE4D21D4FC5F48*))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_59760BD7F2ED7128_OFFSET))(this, a1);
	}

	::System::Void Method_1_C269CCA5765CA0B8(::Class_1_B4575D4416857720* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4575D4416857720*))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_C269CCA5765CA0B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_59760BD7F2ED7128_1(::Class_1_B4575D4416857720* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4575D4416857720*))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_59760BD7F2ED7128_1_OFFSET))(this, a1);
	}

	::Class_1_B4575D4416857720* Method_1_9FEF743119D36039(::System::String* a1)
	{
		return ((::Class_1_B4575D4416857720*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_9FEF743119D36039_OFFSET))(this, a1);
	}

	::System::Void Method_1_78A816EDF045E4C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_78A816EDF045E4C8_OFFSET))(this);
	}

	::System::Void Method_1_66A26E3317E26881(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_66A26E3317E26881_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_C4533278489E08D3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_C4533278489E08D3_OFFSET))(a1);
	}

	static ::System::Single get__LOAD_COMP_VIEW_RADIUS_POW2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_GET__LOAD_COMP_VIEW_RADIUS_POW2_OFFSET))();
	}

	static ::System::Single get__UNLOAD_COMP_VIEW_RADIUS_POW2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_GET__UNLOAD_COMP_VIEW_RADIUS_POW2_OFFSET))();
	}

	::System::Int32 Method_1_94F09F1DE4D5A02E(::Class_1_DACE4D21D4FC5F48* a1, ::Class_1_DACE4D21D4FC5F48* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DACE4D21D4FC5F48*, ::Class_1_DACE4D21D4FC5F48*))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_94F09F1DE4D5A02E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5FEC76BECBF15C28(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_59E967A53C7B71C0_METHOD_1_5FEC76BECBF15C28_OFFSET))(this, a1);
	}
};

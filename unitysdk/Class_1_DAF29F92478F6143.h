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

#define CLASS_1_DAF29F92478F6143_GET__LOAD_COMP_VIEW_RADIUS_POW2_OFFSET UNITYSDK_OFFSET(0x116C5100)
#define CLASS_1_DAF29F92478F6143_GET__UNLOAD_COMP_VIEW_RADIUS_POW2_OFFSET UNITYSDK_OFFSET(0x116C5140)
#define CLASS_1_DAF29F92478F6143_METHOD_1_0EA1ACE7302D5DD1_OFFSET UNITYSDK_OFFSET(0x116C4220)
#define CLASS_1_DAF29F92478F6143_METHOD_1_14E9A915334A42B3_OFFSET UNITYSDK_OFFSET(0x116C4880)
#define CLASS_1_DAF29F92478F6143_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x116C4090)
#define CLASS_1_DAF29F92478F6143_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x116C4000)
#define CLASS_1_DAF29F92478F6143_METHOD_1_1C68B146B473C9EB_OFFSET UNITYSDK_OFFSET(0x116C3390)
#define CLASS_1_DAF29F92478F6143_METHOD_1_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0x116C3D40)
#define CLASS_1_DAF29F92478F6143_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x116C2620)
#define CLASS_1_DAF29F92478F6143_METHOD_1_4863C96DA6A57411_OFFSET UNITYSDK_OFFSET(0x116C4190)
#define CLASS_1_DAF29F92478F6143_METHOD_1_4F6C6BB2E60AD46A_OFFSET UNITYSDK_OFFSET(0x116C3E00)
#define CLASS_1_DAF29F92478F6143_METHOD_1_50896BDA13FD77D3_OFFSET UNITYSDK_OFFSET(0x116C36A0)
#define CLASS_1_DAF29F92478F6143_METHOD_1_59760BD7F2ED7128_OFFSET UNITYSDK_OFFSET(0x116C4780)
#define CLASS_1_DAF29F92478F6143_METHOD_1_5D57E1829F338F05_OFFSET UNITYSDK_OFFSET(0x116C5260)
#define CLASS_1_DAF29F92478F6143_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0x116C4120)
#define CLASS_1_DAF29F92478F6143_METHOD_1_94F09F1DE4D5A02E_OFFSET UNITYSDK_OFFSET(0x116C5180)
#define CLASS_1_DAF29F92478F6143_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x116C27B0)
#define CLASS_1_DAF29F92478F6143_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x116C2F50)
#define CLASS_1_DAF29F92478F6143_METHOD_1_C4533278489E08D3_OFFSET UNITYSDK_OFFSET(0x116C4960)
#define CLASS_1_DAF29F92478F6143_METHOD_1_EEA1CB3C78CAB3EE_OFFSET UNITYSDK_OFFSET(0x116C3140)
#define CLASS_1_DAF29F92478F6143_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x116C2610)
#define CLASS_1_DAF29F92478F6143_METHOD_1_F24B8747ACF105FF_OFFSET UNITYSDK_OFFSET(0x116C2A30)
#define CLASS_1_DAF29F92478F6143__CCTOR_OFFSET UNITYSDK_OFFSET(0x116C5390)
#define CLASS_1_DAF29F92478F6143__CTOR_OFFSET UNITYSDK_OFFSET(0x116C2670)

inline static constexpr unsigned int Class_1_DAF29F92478F6143_TypeDefinitionIndex = 56571;

class Class_1_DAF29F92478F6143 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAF29F92478F6143_TypeDefinitionIndex)->GetStaticField(0x10410);
	}
	static ::System::Single* StaticGet___LOAD_COMP_VIEW_RADIUS_POW2_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAF29F92478F6143_TypeDefinitionIndex)->GetStaticField(0x10414);
	}
	static ::System::Single* StaticGet___UNLOAD_COMP_VIEW_RADIUS_POW2_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAF29F92478F6143_TypeDefinitionIndex)->GetStaticField(0x10418);
	}
	// static const ::System::Single Field_1_15; // 0x0
	// static const ::System::Single Field_1_16; // 0x0
	// static const ::System::Single Field_1_17; // 0x0
	::System::Collections::Generic::List_1<::Class_1_DACE4D21D4FC5F48*>* Field_1_6; // 0x10
	::System::Comparison_1<::Class_1_DACE4D21D4FC5F48*>* Field_1_13; // 0x18
	::System::Collections::Generic::List_1<::Class_1_18FA54BA9B277765*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Class_1_B4575D4416857720*>* Field_1_9; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_18FA54BA9B277765*>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B4575D4416857720*>* Field_1_8; // 0x38
	::RPG::Client::MapDef* Field_1_1; // 0x40
	::System::Collections::Generic::List_1<::Class_1_DACE4D21D4FC5F48*>* Field_1_5; // 0x48
	::System::Single Field_1_11; // 0x50
	::System::Int32 Field_1_7; // 0x54
	::System::Int32 Field_1_2; // 0x58
	::System::Boolean Field_1_10; // 0x5C
	::System::Single Field_1_12; // 0x60
	::System::Single Field_1_14; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_1_F24B8747ACF105FF(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_F24B8747ACF105FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEA1CB3C78CAB3EE(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_EEA1CB3C78CAB3EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C68B146B473C9EB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_1C68B146B473C9EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F6C6BB2E60AD46A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_4F6C6BB2E60AD46A_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_DACE4D21D4FC5F48* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DACE4D21D4FC5F48*))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Void Method_1_4863C96DA6A57411(::Class_1_DACE4D21D4FC5F48* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DACE4D21D4FC5F48*))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_4863C96DA6A57411_OFFSET))(this, a1);
	}

	::System::Void Method_1_0EA1ACE7302D5DD1(::Class_1_B4575D4416857720* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4575D4416857720*))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_0EA1ACE7302D5DD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_59760BD7F2ED7128(::Class_1_B4575D4416857720* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4575D4416857720*))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_59760BD7F2ED7128_OFFSET))(this, a1);
	}

	::Class_1_B4575D4416857720* Method_1_14E9A915334A42B3(::System::String* a1)
	{
		return ((::Class_1_B4575D4416857720*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_14E9A915334A42B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_50896BDA13FD77D3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_50896BDA13FD77D3_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_C4533278489E08D3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_C4533278489E08D3_OFFSET))(a1);
	}

	static ::System::Single get__LOAD_COMP_VIEW_RADIUS_POW2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_GET__LOAD_COMP_VIEW_RADIUS_POW2_OFFSET))();
	}

	static ::System::Single get__UNLOAD_COMP_VIEW_RADIUS_POW2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_GET__UNLOAD_COMP_VIEW_RADIUS_POW2_OFFSET))();
	}

	::System::Int32 Method_1_94F09F1DE4D5A02E(::Class_1_DACE4D21D4FC5F48* a1, ::Class_1_DACE4D21D4FC5F48* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DACE4D21D4FC5F48*, ::Class_1_DACE4D21D4FC5F48*))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_94F09F1DE4D5A02E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5D57E1829F338F05(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DAF29F92478F6143_METHOD_1_5D57E1829F338F05_OFFSET))(this, a1);
	}
};

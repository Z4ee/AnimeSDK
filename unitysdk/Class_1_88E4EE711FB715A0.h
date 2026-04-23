#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_74D97E08BFF70A55.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_252;
class Class_1_423695772F3F2AA9;
class Class_1_7A49742D2EA44155;
class Class_1_813BC3EDB3CAACE9;
class Class_1_DCE8F52BF27202F5;
class Class_1_DE4C6B309308A230;
class Class_2_7F4574E2AA5F0809;
class Class_2_8B3E44A52CD80E24;
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class VolumeComponentTransition_1; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_88E4EE711FB715A0_GET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x970EF30)
#define CLASS_1_88E4EE711FB715A0_GET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x970EF10)
#define CLASS_1_88E4EE711FB715A0_GET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x970EF70)
#define CLASS_1_88E4EE711FB715A0_GET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0x970EF50)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x970EBB0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x970F290)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_14BFEE99BA593FDD_OFFSET UNITYSDK_OFFSET(0x970B8A0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x970DC10)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x970D370)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x970D310)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x970FEF0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_2DBD33D400DF6DDE_OFFSET UNITYSDK_OFFSET(0x97136E0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0x970D3D0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_496D299FBEED85FF_OFFSET UNITYSDK_OFFSET(0x9710740)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_4A9A016DED73BF7C_OFFSET UNITYSDK_OFFSET(0x9711FF0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_4D395DE7080248C4_OFFSET UNITYSDK_OFFSET(0x970D960)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x970DEA0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_5C35C5A2AED42591_OFFSET UNITYSDK_OFFSET(0x9711050)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x9710250)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_631361B5F0734C5E_OFFSET UNITYSDK_OFFSET(0x9712FB0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x970F430)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x970EF90)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_75E10C86775D877F_1_OFFSET UNITYSDK_OFFSET(0x970CC30)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_75E10C86775D877F_OFFSET UNITYSDK_OFFSET(0x970C710)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_1_OFFSET UNITYSDK_OFFSET(0x9710570)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x970FE80)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_7F7437D824ED763B_OFFSET UNITYSDK_OFFSET(0x9713520)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_949FF3FB083C7315_OFFSET UNITYSDK_OFFSET(0x97108E0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_97D0AD0D877DE9D8_OFFSET UNITYSDK_OFFSET(0x970E2B0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x9713430)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x970E250)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x970D850)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_B20B564596DB48F3_OFFSET UNITYSDK_OFFSET(0x970D4F0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x97125E0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x970E820)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0x970D1D0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x970D130)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x9710EE0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_CE63D88F1A046706_OFFSET UNITYSDK_OFFSET(0x970D270)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_CEF2F84573427F6B_OFFSET UNITYSDK_OFFSET(0x9710FC0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_D729F7CA1F78F5C7_OFFSET UNITYSDK_OFFSET(0x97106A0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_DAF13E2DDF8F15E7_OFFSET UNITYSDK_OFFSET(0x97101F0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_E0129C47613F76F3_OFFSET UNITYSDK_OFFSET(0x97105E0)
#define CLASS_1_88E4EE711FB715A0_SET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x970EF40)
#define CLASS_1_88E4EE711FB715A0_SET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x970EF20)
#define CLASS_1_88E4EE711FB715A0_SET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x970EF80)
#define CLASS_1_88E4EE711FB715A0_SET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0x970EF60)
#define CLASS_1_88E4EE711FB715A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x9713880)
#define CLASS_1_88E4EE711FB715A0__CTOR_OFFSET UNITYSDK_OFFSET(0x970E8A0)

inline static constexpr unsigned int Class_1_88E4EE711FB715A0_TypeDefinitionIndex = 68101;

class Class_1_88E4EE711FB715A0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_DCE8F52BF27202F5*>** StaticGet_Field_1_28()
	{
		return (::System::Collections::Generic::List_1<::Class_1_DCE8F52BF27202F5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E4EE711FB715A0_TypeDefinitionIndex)->GetStaticField(0x5B70);
	}
	static ::Class_1_88E4EE711FB715A0** StaticGet_Field_1_17()
	{
		return (::Class_1_88E4EE711FB715A0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E4EE711FB715A0_TypeDefinitionIndex)->GetStaticField(0x5B78);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_14; // 0x10
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _BlockComponentTypes_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* Field_1_22; // 0x20
	::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* Field_1_8; // 0x28
	::Class_1_DCE8F52BF27202F5* __AllSourceProxy_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_11; // 0x38
	::Class_1_DE4C6B309308A230* Field_1_16; // 0x40
	::System::Collections::Generic::List_1<::Class_1_7A49742D2EA44155*>* Field_1_1; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_12; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7A49742D2EA44155*>* Field_1_0; // 0x58
	::System::Collections::Generic::List_1<::Class_1_DCE8F52BF27202F5*>* Field_1_10; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_813BC3EDB3CAACE9*>* Field_1_26; // 0x68
	::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* Field_1_21; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* Field_1_15; // 0x80
	::Class_1_813BC3EDB3CAACE9* Field_1_25; // 0x88
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GlobalComponentTypes_k__BackingField; // 0x90
	::Class_2_7F4574E2AA5F0809* Field_1_5; // 0x98
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* Field_1_20; // 0xA0
	::Class_2_8B3E44A52CD80E24* Field_1_6; // 0xA8
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>*>* Field_1_9; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_813BC3EDB3CAACE9*>* Field_1_13; // 0xB8
	::Class_1_DCE8F52BF27202F5* __AllSourceStack_k__BackingField; // 0xC0
	::System::Boolean Field_1_3; // 0xC8
	::System::Boolean Field_1_2; // 0xC9
	::System::Boolean Field_1_4; // 0xCA
	::System::Boolean Field_1_27; // 0xCB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_14BFEE99BA593FDD(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_14BFEE99BA593FDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_75E10C86775D877F(::System::String* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_75E10C86775D877F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_75E10C86775D877F_1(::System::String* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_75E10C86775D877F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_1_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_1_OFFSET))(this);
	}

	::System::Void Method_1_CE63D88F1A046706(::System::Int32 a1, ::Struct_2_74D97E08BFF70A55& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_74D97E08BFF70A55&))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_CE63D88F1A046706_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_252*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_B20B564596DB48F3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_B20B564596DB48F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_4F6E40C18A7A5A9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_4F6E40C18A7A5A9E_OFFSET))(this);
	}

	::System::Void Method_1_97D0AD0D877DE9D8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_97D0AD0D877DE9D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	static ::Class_1_88E4EE711FB715A0* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_88E4EE711FB715A0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_GlobalComponentTypes()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_GET_GLOBALCOMPONENTTYPES_OFFSET))(this);
	}

	::System::Void set_GlobalComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_SET_GLOBALCOMPONENTTYPES_OFFSET))(this, value);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_BlockComponentTypes()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_GET_BLOCKCOMPONENTTYPES_OFFSET))(this);
	}

	::System::Void set_BlockComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_SET_BLOCKCOMPONENTTYPES_OFFSET))(this, value);
	}

	::Class_1_DCE8F52BF27202F5* get__AllSourceStack()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_GET__ALLSOURCESTACK_OFFSET))(this);
	}

	::System::Void set__AllSourceStack(::Class_1_DCE8F52BF27202F5* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_SET__ALLSOURCESTACK_OFFSET))(this, value);
	}

	::Class_1_DCE8F52BF27202F5* get__AllSourceProxy()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_GET__ALLSOURCEPROXY_OFFSET))(this);
	}

	::System::Void set__AllSourceProxy(::Class_1_DCE8F52BF27202F5* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_SET__ALLSOURCEPROXY_OFFSET))(this, value);
	}

	::Class_1_DCE8F52BF27202F5* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::Class_1_DCE8F52BF27202F5* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_OFFSET))(this);
	}

	::Class_1_DCE8F52BF27202F5* Method_1_7E9AC3FFDA4606D5_1()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_1_OFFSET))(this);
	}

	::Class_1_423695772F3F2AA9* Method_1_E0129C47613F76F3(::System::Type* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
	{
		return ((::Class_1_423695772F3F2AA9*(*)(::PVOID, ::System::Type*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_E0129C47613F76F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAF13E2DDF8F15E7(::Class_1_DCE8F52BF27202F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_DAF13E2DDF8F15E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_D729F7CA1F78F5C7(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_D729F7CA1F78F5C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_496D299FBEED85FF(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_496D299FBEED85FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_949FF3FB083C7315(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_949FF3FB083C7315_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Int32 Method_1_CEF2F84573427F6B(::RPG::Client::OpenWorld::Volume* a1, ::RPG::Client::OpenWorld::Volume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_CEF2F84573427F6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D395DE7080248C4(::Class_1_DCE8F52BF27202F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_4D395DE7080248C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C35C5A2AED42591(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_5C35C5A2AED42591_OFFSET))(this, a1, a2);
	}

	::Class_1_DCE8F52BF27202F5* Method_1_4A9A016DED73BF7C(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_4A9A016DED73BF7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_631361B5F0734C5E(::Class_1_DE4C6B309308A230* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_631361B5F0734C5E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::Volume* Method_1_7F7437D824ED763B(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_7F7437D824ED763B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::Volume* Method_1_2DBD33D400DF6DDE(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_2DBD33D400DF6DDE_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_07F6252E5E1E4C3B_Struct_2_A9834A329E322A3D.h"
#include "unitysdk/Struct_2_92DA5310F390EF4D.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_916778923E38503B;
class Class_1_B7E341C5F1A6F199;
class Class_1_C3C91849E993F765;
class Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_FFD0045B4597F294;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }
namespace UnityEngine { class Material; }

#define CLASS_3_07F6252E5E1E4C3B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x106D80C0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_00DC8BCDD9497DF0_OFFSET UNITYSDK_OFFSET(0x106DB440)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_05252F136A7884FE_OFFSET UNITYSDK_OFFSET(0x106DC970)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0x106DEDE0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x106DC2B0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_134A95DAF15CFB39_OFFSET UNITYSDK_OFFSET(0x106DAF80)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x106DF1B0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_182BA737D561CA10_OFFSET UNITYSDK_OFFSET(0x106DAB10)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_1ABE634E489C2299_OFFSET UNITYSDK_OFFSET(0x106DAD00)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_20FD8965F00EA2BF_OFFSET UNITYSDK_OFFSET(0x106E1890)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_21DB8E6F31E6B2BF_OFFSET UNITYSDK_OFFSET(0x106DE7F0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_2DF53C819113F884_OFFSET UNITYSDK_OFFSET(0x106DA700)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x106DAA10)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_36094BFB41CBC198_OFFSET UNITYSDK_OFFSET(0x106DD6D0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_3E0CF88A50D88B11_OFFSET UNITYSDK_OFFSET(0x106E0F20)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_4572AE8CBBAFC727_OFFSET UNITYSDK_OFFSET(0x106DE390)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_4691854E32F3C2F6_OFFSET UNITYSDK_OFFSET(0x106DCFE0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_4D4D11992F7A784F_OFFSET UNITYSDK_OFFSET(0x106DDE40)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_4E069FC9EE6CE58D_OFFSET UNITYSDK_OFFSET(0x106DFF40)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_54A73EE71975CF96_OFFSET UNITYSDK_OFFSET(0x106DB4C0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_5CBC2890DD8B8FE1_OFFSET UNITYSDK_OFFSET(0x106DC7C0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_5E4534F85F5E24C1_OFFSET UNITYSDK_OFFSET(0x106D9830)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_63DF1B20A479DA8A_OFFSET UNITYSDK_OFFSET(0x106DBE50)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_64E54667189E0E82_1_OFFSET UNITYSDK_OFFSET(0x106E19B0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_64E54667189E0E82_OFFSET UNITYSDK_OFFSET(0x106DBCC0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x106D8610)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_6A42D69EC06778FC_OFFSET UNITYSDK_OFFSET(0x106DD0B0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_7CFF2709956D699C_OFFSET UNITYSDK_OFFSET(0x106D9F60)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_8891C4A56F6DD8A4_OFFSET UNITYSDK_OFFSET(0x106E0BD0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_91D97064765DCBF1_OFFSET UNITYSDK_OFFSET(0x106DED30)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_97F35EDEA90406E7_OFFSET UNITYSDK_OFFSET(0x106DEE50)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_9CF311942FEDF5FA_OFFSET UNITYSDK_OFFSET(0x106E0520)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_AF0467DAE60EFAC6_OFFSET UNITYSDK_OFFSET(0x106D9BF0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_B519A46C44F8653F_OFFSET UNITYSDK_OFFSET(0x106DDF30)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_BA602288AE4290BE_OFFSET UNITYSDK_OFFSET(0x106DF350)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x106E0E90)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_BD71CCF95E66CB30_OFFSET UNITYSDK_OFFSET(0x106DA2F0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_BE77BDBA11F12421_OFFSET UNITYSDK_OFFSET(0x106DCF00)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_C03BDC7128320068_OFFSET UNITYSDK_OFFSET(0x106D9A30)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x106DE300)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x106DF2C0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x106DC730)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_D40AEACBF23D3511_OFFSET UNITYSDK_OFFSET(0x106DA1D0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_D46478B237B9BCD5_OFFSET UNITYSDK_OFFSET(0x106D7E50)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_E9F85D670420BBAB_OFFSET UNITYSDK_OFFSET(0x106DA230)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_EB8BD7BE57734D47_OFFSET UNITYSDK_OFFSET(0x106DD9C0)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_ED487879C8D4740D_OFFSET UNITYSDK_OFFSET(0x106DAE30)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_EDB83528DA1DE7BA_OFFSET UNITYSDK_OFFSET(0x106E1520)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_EE3A4115437F2968_OFFSET UNITYSDK_OFFSET(0x106D9780)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_EEE12406B97122F4_OFFSET UNITYSDK_OFFSET(0x106DD290)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_F390BC167F6CE613_OFFSET UNITYSDK_OFFSET(0x106DC320)
#define CLASS_3_07F6252E5E1E4C3B_METHOD_3_FE936CB8E8F44BDB_OFFSET UNITYSDK_OFFSET(0x106DF520)
#define CLASS_3_07F6252E5E1E4C3B_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x106D7D50)
#define CLASS_3_07F6252E5E1E4C3B_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x106D8480)
#define CLASS_3_07F6252E5E1E4C3B_START_OFFSET UNITYSDK_OFFSET(0x106D7C90)
#define CLASS_3_07F6252E5E1E4C3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x106D96C0)
#define CLASS_3_07F6252E5E1E4C3B__CTOR_OFFSET UNITYSDK_OFFSET(0x106D9510)

inline static constexpr unsigned int Class_3_07F6252E5E1E4C3B_TypeDefinitionIndex = 51436;

class Class_3_07F6252E5E1E4C3B : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_3_07F6252E5E1E4C3B** StaticGet_Field_3_1()
	{
		return (::Class_3_07F6252E5E1E4C3B**)Il2CppClass::FromTypeDefinitionIndex(Class_3_07F6252E5E1E4C3B_TypeDefinitionIndex)->GetStaticField(0x3D520);
	}
	static ::System::String** StaticGet_Field_3_15()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_07F6252E5E1E4C3B_TypeDefinitionIndex)->GetStaticField(0x3D528);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_3_16()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_07F6252E5E1E4C3B_TypeDefinitionIndex)->GetStaticField(0x3D530);
	}
	static ::System::Boolean* StaticGet_Field_3_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_07F6252E5E1E4C3B_TypeDefinitionIndex)->GetStaticField(0xF020);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_07F6252E5E1E4C3B_TypeDefinitionIndex)->GetStaticField(0xF021);
	}
	::Nap::NapECS::EcsFilter* Field_3_14; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_3; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_92DA5310F390EF4D<::System::UInt32>>* Field_3_4; // 0x30
	::Unity::Collections::ManagedBlockQueue_1<::System::Int32>* Field_3_9; // 0x38
	::System::Collections::Generic::List_1<::Class_1_C3C91849E993F765*>* Field_3_2; // 0x40
	::Class_3_07F6252E5E1E4C3B_Struct_2_A9834A329E322A3D Field_3_8; // 0x48
	::System::Boolean Field_3_5; // 0x49
	::System::Boolean Field_3_13; // 0x4A
	::System::Single Field_3_12; // 0x4C
	::Unity::Jobs::JobHandle Field_3_7; // 0x50
	::UnityEngine::Vector3 Field_3_11; // 0x60
	::System::Single Field_3_10; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_EE3A4115437F2968(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_EE3A4115437F2968_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C03BDC7128320068(::System::Single a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_C03BDC7128320068_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_7CFF2709956D699C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_7CFF2709956D699C_OFFSET))(this, a1);
	}

	static ::Class_3_07F6252E5E1E4C3B* Method_3_D40AEACBF23D3511()
	{
		return ((::Class_3_07F6252E5E1E4C3B*(*)())((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_D40AEACBF23D3511_OFFSET))();
	}

	static ::System::Void Method_3_E9F85D670420BBAB(::Class_3_FFD0045B4597F294* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_E9F85D670420BBAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2DF53C819113F884(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_2DF53C819113F884_OFFSET))(a1);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_1ABE634E489C2299(::Class_1_C3C91849E993F765* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C91849E993F765*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_1ABE634E489C2299_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_134A95DAF15CFB39(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Action_1<::System::UInt32>* a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Action_1<::System::UInt32>*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_134A95DAF15CFB39_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_64E54667189E0E82(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_64E54667189E0E82_OFFSET))(a1);
	}

	static ::System::Void Method_3_63DF1B20A479DA8A(::Class_1_C3C91849E993F765* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_1_C3C91849E993F765*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_63DF1B20A479DA8A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_F390BC167F6CE613(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Action* a3, ::System::String* a4, ::System::String* a5, ::System::UInt32 a6)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Action*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_F390BC167F6CE613_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Single Method_3_5CBC2890DD8B8FE1(::UnityEngine::Vector3 a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::Class_3_FFD0045B4597F294* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_5CBC2890DD8B8FE1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_05252F136A7884FE(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_05252F136A7884FE_OFFSET))(a1);
	}

	static ::System::Void Method_3_6A42D69EC06778FC(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_6A42D69EC06778FC_OFFSET))(a1);
	}

	::System::Void Method_3_EEE12406B97122F4(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_EEE12406B97122F4_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_36094BFB41CBC198(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_36094BFB41CBC198_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_EB8BD7BE57734D47(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_EB8BD7BE57734D47_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_4691854E32F3C2F6(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_4691854E32F3C2F6_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_4D4D11992F7A784F(::UnityEngine::Material* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_FFD0045B4597F294* a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Material*, ::MoleMole::Battle::Entity*, ::Class_3_FFD0045B4597F294*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_4D4D11992F7A784F_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_916778923E38503B* Method_3_BE77BDBA11F12421(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::Class_1_916778923E38503B*(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_BE77BDBA11F12421_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_B519A46C44F8653F(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_B519A46C44F8653F_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_54A73EE71975CF96(::System::Single a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::Class_3_FFD0045B4597F294* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_54A73EE71975CF96_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_4572AE8CBBAFC727(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_4572AE8CBBAFC727_OFFSET))(a1);
	}

	static ::System::Void Method_3_21DB8E6F31E6B2BF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_21DB8E6F31E6B2BF_OFFSET))(a1);
	}

	static ::System::Void Method_3_97F35EDEA90406E7(::System::Int32 a1, ::Class_1_C3C91849E993F765* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_1_C3C91849E993F765*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_97F35EDEA90406E7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5E4534F85F5E24C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_5E4534F85F5E24C1_OFFSET))(a1);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_C3C91849E993F765* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_1_C3C91849E993F765*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_00DC8BCDD9497DF0(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::String*(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_00DC8BCDD9497DF0_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Single Method_3_BA602288AE4290BE(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Class_3_FFD0045B4597F294* a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_BA602288AE4290BE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_FE936CB8E8F44BDB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_FE936CB8E8F44BDB_OFFSET))(a1);
	}

	static ::System::Void Method_3_4E069FC9EE6CE58D(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2, ::System::String* a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean, ::System::String*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_4E069FC9EE6CE58D_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_9CF311942FEDF5FA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_9CF311942FEDF5FA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_AF0467DAE60EFAC6(::System::Single a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_AF0467DAE60EFAC6_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_D46478B237B9BCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_D46478B237B9BCD5_OFFSET))(this);
	}

	static ::System::Void Method_3_8891C4A56F6DD8A4(::UnityEngine::Material* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::MoleMole::Battle::Entity*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_8891C4A56F6DD8A4_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_182BA737D561CA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_182BA737D561CA10_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_ED487879C8D4740D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_ED487879C8D4740D_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_3_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_EDB83528DA1DE7BA(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_EDB83528DA1DE7BA_OFFSET))(a1);
	}

	static ::Class_1_916778923E38503B* Method_3_20FD8965F00EA2BF(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::System::UInt32>* a4, ::System::Action* a5, ::System::UInt32 a6)
	{
		return ((::Class_1_916778923E38503B*(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::String*, ::System::Action_1<::System::UInt32>*, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_20FD8965F00EA2BF_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_64E54667189E0E82_1(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_64E54667189E0E82_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_3E0CF88A50D88B11(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_3E0CF88A50D88B11_OFFSET))(a1);
	}

	static ::System::Void Method_3_91D97064765DCBF1(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_91D97064765DCBF1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_BD71CCF95E66CB30(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Action* a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Action*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_07F6252E5E1E4C3B_METHOD_3_BD71CCF95E66CB30_OFFSET))(a1, a2, a3, a4, a5);
	}
};

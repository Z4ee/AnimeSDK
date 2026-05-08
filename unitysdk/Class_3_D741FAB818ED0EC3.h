#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_0E82907678BD44BD.h"
#include "unitysdk/Struct_2_7AEA12404CD1ADA2.h"

class Class_1_17084610E266B2F1;
class Class_1_CCC17A1447C28688;
class Class_1_D366ED82D8A1F916;
class Class_1_E25AA19765F0B270;
class Class_1_F61BB49F70F7407A;
class Class_1_F94500673BE00878;
class Class_2_52E46C711C8C873D;
class Class_2_BA2B2B0A0E98E063;
class Class_2_C162E620AE258C19;
class Class_3_46E613428B30FCCD;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D741FAB818ED0EC3_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x77A43D0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_01FBB2EDE30F5868_OFFSET UNITYSDK_OFFSET(0x77A54D0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_097011A8281486E9_OFFSET UNITYSDK_OFFSET(0x77A7850)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_18EBD506031A4BFC_OFFSET UNITYSDK_OFFSET(0x77A9460)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_212E5A8A613C96EF_OFFSET UNITYSDK_OFFSET(0x77A6560)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_2CCA885A56D1610F_OFFSET UNITYSDK_OFFSET(0x77A9560)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_2EDCFE768244BB69_OFFSET UNITYSDK_OFFSET(0x77A7F80)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_3558E4C27DDDCDDB_OFFSET UNITYSDK_OFFSET(0x77A59E0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_36B3213827884734_OFFSET UNITYSDK_OFFSET(0x77A7500)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_3C793DB8E982F1E1_OFFSET UNITYSDK_OFFSET(0x77A72B0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_437104B6108A6647_OFFSET UNITYSDK_OFFSET(0x77A5EA0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x77A47B0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_5416E03ECBCA6EFA_OFFSET UNITYSDK_OFFSET(0x77A6750)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_5C68F1398A4A25A3_OFFSET UNITYSDK_OFFSET(0x77A7E80)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x77A8B30)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_71CB1911E1482163_OFFSET UNITYSDK_OFFSET(0x77A6070)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_82F68C34ED2DEDB4_OFFSET UNITYSDK_OFFSET(0x77A87D0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_8420DC088664D618_OFFSET UNITYSDK_OFFSET(0x77A6370)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_8B8773820C506C86_OFFSET UNITYSDK_OFFSET(0x77A84A0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x77A8B80)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_8F62BDF7BE010079_OFFSET UNITYSDK_OFFSET(0x77A5920)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_997A5B543B59E1D0_OFFSET UNITYSDK_OFFSET(0x77A6950)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_9E7F1A4AAB0B506A_OFFSET UNITYSDK_OFFSET(0x77A6EE0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_A11144519902A27F_1_OFFSET UNITYSDK_OFFSET(0x77A8F20)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x77A83C0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_A52A04403DC7D65A_OFFSET UNITYSDK_OFFSET(0x77A6C40)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x77A5E60)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_AB26FB330C9D1F56_OFFSET UNITYSDK_OFFSET(0x77A5360)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_ABE028A4CD8823F1_OFFSET UNITYSDK_OFFSET(0x77A5620)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_BACF19C53A486B14_OFFSET UNITYSDK_OFFSET(0x77A8500)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x77A6BB0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x77A69F0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x77A7470)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x77A8E90)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x77A62E0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_E167CC791D3371F7_OFFSET UNITYSDK_OFFSET(0x77A7040)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x77A4670)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_ED28413061815D20_OFFSET UNITYSDK_OFFSET(0x77A5B80)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_F4BE935479597FC3_OFFSET UNITYSDK_OFFSET(0x77A90D0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_F60376C419629B4A_OFFSET UNITYSDK_OFFSET(0x77A57B0)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_FFED7C3041A4AB5E_1_OFFSET UNITYSDK_OFFSET(0x77A8410)
#define CLASS_3_D741FAB818ED0EC3_METHOD_3_FFED7C3041A4AB5E_OFFSET UNITYSDK_OFFSET(0x77A6250)
#define CLASS_3_D741FAB818ED0EC3_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x77A4390)
#define CLASS_3_D741FAB818ED0EC3_START_OFFSET UNITYSDK_OFFSET(0x77A4230)
#define CLASS_3_D741FAB818ED0EC3_UPDATE_OFFSET UNITYSDK_OFFSET(0x77A4FB0)
#define CLASS_3_D741FAB818ED0EC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x77A52C0)
#define CLASS_3_D741FAB818ED0EC3__CTOR_OFFSET UNITYSDK_OFFSET(0x77A51C0)

inline static constexpr unsigned int Class_3_D741FAB818ED0EC3_TypeDefinitionIndex = 40148;

class Class_3_D741FAB818ED0EC3 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Nap::NapECS::EcsFilter** StaticGet_Field_3_2()
	{
		return (::Nap::NapECS::EcsFilter**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0x413E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_BA2B2B0A0E98E063*>** StaticGet_Field_3_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_BA2B2B0A0E98E063*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0x413E8);
	}
	static ::System::Collections::Generic::List_1<::Class_2_C162E620AE258C19*>** StaticGet_Field_3_5()
	{
		return (::System::Collections::Generic::List_1<::Class_2_C162E620AE258C19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0x413F0);
	}
	static ::Class_1_F94500673BE00878** StaticGet_Field_3_6()
	{
		return (::Class_1_F94500673BE00878**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0x413F8);
	}
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0xFDA0);
	}
	static ::System::Boolean* StaticGet_Field_3_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D741FAB818ED0EC3_TypeDefinitionIndex)->GetStaticField(0xFDA4);
	}
	// static const ::System::Int32 Field_3_0 = 0x7FFFFFFF; // 0x0
	// static const ::System::Int32 Field_3_8 = 0x80000000; // 0x0
	// static const ::System::String* Field_3_9; // 0x0
	// static const ::System::String* Field_3_10; // 0x0
	// static const ::System::String* Field_3_11; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_17084610E266B2F1*>* Field_3_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_UPDATE_OFFSET))(this);
	}

	static ::Class_2_C162E620AE258C19* Method_3_AB26FB330C9D1F56()
	{
		return ((::Class_2_C162E620AE258C19*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_AB26FB330C9D1F56_OFFSET))();
	}

	static ::System::Boolean Method_3_01FBB2EDE30F5868(::System::Int32 a1, ::Class_2_BA2B2B0A0E98E063*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Class_2_BA2B2B0A0E98E063*&))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_01FBB2EDE30F5868_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ABE028A4CD8823F1(::Class_2_C162E620AE258C19* a1)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_ABE028A4CD8823F1_OFFSET))(a1);
	}

	static ::System::Void Method_3_F60376C419629B4A(::MoleMole::Battle::Entity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_F60376C419629B4A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8F62BDF7BE010079(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_46E613428B30FCCD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_8F62BDF7BE010079_OFFSET))(a1, a2);
	}

	::System::Void Method_3_3558E4C27DDDCDDB(::Class_3_46E613428B30FCCD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46E613428B30FCCD*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_3558E4C27DDDCDDB_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_437104B6108A6647(::Class_1_17084610E266B2F1* a1)
	{
		return ((::System::Boolean(*)(::Class_1_17084610E266B2F1*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_437104B6108A6647_OFFSET))(a1);
	}

	static ::System::Void Method_3_71CB1911E1482163(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_71CB1911E1482163_OFFSET))(a1);
	}

	static ::System::Void Method_3_FFED7C3041A4AB5E(::Class_2_C162E620AE258C19* a1)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_FFED7C3041A4AB5E_OFFSET))(a1);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_8420DC088664D618(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_8420DC088664D618_OFFSET))(a1);
	}

	static ::System::Void Method_3_212E5A8A613C96EF(::MoleMole::Battle::Entity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_212E5A8A613C96EF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_5416E03ECBCA6EFA(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_46E613428B30FCCD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_5416E03ECBCA6EFA_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_BFBBE8A6FE167A6A_OFFSET))();
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A52A04403DC7D65A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_A52A04403DC7D65A_OFFSET))(a1);
	}

	::System::Void Method_3_ED28413061815D20(::Class_3_46E613428B30FCCD* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46E613428B30FCCD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_ED28413061815D20_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_9E7F1A4AAB0B506A(::MoleMole::Battle::Entity* a1, ::Class_1_CCC17A1447C28688* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_CCC17A1447C28688*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_9E7F1A4AAB0B506A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E167CC791D3371F7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_E167CC791D3371F7_OFFSET))(a1);
	}

	static ::System::Void Method_3_3C793DB8E982F1E1(::Class_2_C162E620AE258C19* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_3C793DB8E982F1E1_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_46E613428B30FCCD* a1)
	{
		return ((::System::Void(*)(::Class_3_46E613428B30FCCD*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::String* Method_3_36B3213827884734(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_36B3213827884734_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_997A5B543B59E1D0(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::Class_3_46E613428B30FCCD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_997A5B543B59E1D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_097011A8281486E9(::Class_2_C162E620AE258C19* a1, ::Class_1_D366ED82D8A1F916* a2, ::Class_1_E25AA19765F0B270* a3, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* a4, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* a5, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* a6, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* a7, ::System::Func_2<::Class_2_BA2B2B0A0E98E063*, ::Class_2_BA2B2B0A0E98E063*>* a8, ::System::Func_3<::Class_1_D366ED82D8A1F916*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*>* a9)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*, ::Class_1_D366ED82D8A1F916*, ::Class_1_E25AA19765F0B270*, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>*, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>*, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>*, ::System::Action_1<::Class_2_BA2B2B0A0E98E063*>*, ::System::Func_2<::Class_2_BA2B2B0A0E98E063*, ::Class_2_BA2B2B0A0E98E063*>*, ::System::Func_3<::Class_1_D366ED82D8A1F916*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*>*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_097011A8281486E9_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::Class_1_17084610E266B2F1* Method_3_2EDCFE768244BB69(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2, ::Nap::NapECS::EcsEntity* a3, ::System::Int32 a4)
	{
		return ((::Class_1_17084610E266B2F1*(*)(::Class_3_46E613428B30FCCD*, ::System::Int32, ::Nap::NapECS::EcsEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_2EDCFE768244BB69_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_FFED7C3041A4AB5E_1(::Class_2_C162E620AE258C19* a1)
	{
		return ((::System::Void(*)(::Class_2_C162E620AE258C19*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_FFED7C3041A4AB5E_1_OFFSET))(a1);
	}

	static ::Nap::NapECS::EcsFilter* Method_3_8B8773820C506C86()
	{
		return ((::Nap::NapECS::EcsFilter*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_8B8773820C506C86_OFFSET))();
	}

	static ::Class_1_CCC17A1447C28688* Method_3_BACF19C53A486B14(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_F61BB49F70F7407A* a3, ::Enum_3_0E82907678BD44BD a4, ::System::Single a5, ::System::String* a6)
	{
		return ((::Class_1_CCC17A1447C28688*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_F61BB49F70F7407A*, ::Enum_3_0E82907678BD44BD, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_BACF19C53A486B14_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_82F68C34ED2DEDB4(::Class_3_46E613428B30FCCD* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Class_3_46E613428B30FCCD*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_82F68C34ED2DEDB4_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_8CA05BCD86E125DF_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_A11144519902A27F_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_A11144519902A27F_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4389275F4099DE36()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_4389275F4099DE36_OFFSET))();
	}

	static ::System::Void Method_3_5C68F1398A4A25A3(::System::Int32 a1, ::Class_2_BA2B2B0A0E98E063* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_2_BA2B2B0A0E98E063*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_5C68F1398A4A25A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F4BE935479597FC3(::Class_3_46E613428B30FCCD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_46E613428B30FCCD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_F4BE935479597FC3_OFFSET))(a1, a2);
	}

	static ::Struct_2_7AEA12404CD1ADA2 Method_3_18EBD506031A4BFC(::Struct_2_7AEA12404CD1ADA2 a1)
	{
		return ((::Struct_2_7AEA12404CD1ADA2(*)(::Struct_2_7AEA12404CD1ADA2))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_18EBD506031A4BFC_OFFSET))(a1);
	}

	static ::System::Void Method_3_2CCA885A56D1610F(::MoleMole::Battle::Entity* a1, ::Class_1_CCC17A1447C28688* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_CCC17A1447C28688*))((::PBYTE)hIl2Cpp + CLASS_3_D741FAB818ED0EC3_METHOD_3_2CCA885A56D1610F_OFFSET))(a1, a2);
	}
};

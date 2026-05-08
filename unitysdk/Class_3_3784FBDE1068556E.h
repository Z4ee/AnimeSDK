#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_1B1B79CF034B93D1;
class Class_2_25A326E4E7F9FCFE;
class Class_2_B242825AD4217625;
class Class_2_EFBBB9EB13AB1B92;
class Class_3_6D73516CC6FEADD7;
class Class_3_CF6254B260CF5CF4;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define CLASS_3_3784FBDE1068556E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14AA5C10)
#define CLASS_3_3784FBDE1068556E_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x14AA62F0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x14AA7950)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0508563E26675EC4_OFFSET UNITYSDK_OFFSET(0x14AAB800)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0539F1DF6B7FACDB_OFFSET UNITYSDK_OFFSET(0x14AA9FD0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x14AAD280)
#define CLASS_3_3784FBDE1068556E_METHOD_3_08E666F7EFE21B1A_OFFSET UNITYSDK_OFFSET(0x14AAC5B0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_093CFA5711463297_OFFSET UNITYSDK_OFFSET(0x14AA7990)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0A7C48807515A41D_OFFSET UNITYSDK_OFFSET(0x14AA6ED0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0C1A9D6D9E04543C_OFFSET UNITYSDK_OFFSET(0x14AAAF20)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0DBEBD74722C00C2_OFFSET UNITYSDK_OFFSET(0x14AA6970)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0FF755CF0787BB5E_OFFSET UNITYSDK_OFFSET(0x14AAB200)
#define CLASS_3_3784FBDE1068556E_METHOD_3_29F0C501FEEE7583_OFFSET UNITYSDK_OFFSET(0x14AAB6B0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_2BE98EB9F95F2CDC_OFFSET UNITYSDK_OFFSET(0x14AAB470)
#define CLASS_3_3784FBDE1068556E_METHOD_3_2CC9263E08F5BAB5_OFFSET UNITYSDK_OFFSET(0x14AA70D0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_385AA2E42A1A69EE_OFFSET UNITYSDK_OFFSET(0x14AAA140)
#define CLASS_3_3784FBDE1068556E_METHOD_3_3B522448B1B3BE68_OFFSET UNITYSDK_OFFSET(0x14AA9D20)
#define CLASS_3_3784FBDE1068556E_METHOD_3_3DFE04DC823D9D33_OFFSET UNITYSDK_OFFSET(0x14AAAD60)
#define CLASS_3_3784FBDE1068556E_METHOD_3_3FEBC466DBC9364E_OFFSET UNITYSDK_OFFSET(0x14AACA80)
#define CLASS_3_3784FBDE1068556E_METHOD_3_435FA878CD73DCB7_OFFSET UNITYSDK_OFFSET(0x14AA8400)
#define CLASS_3_3784FBDE1068556E_METHOD_3_5D0C7528A8F66838_OFFSET UNITYSDK_OFFSET(0x14AA6B10)
#define CLASS_3_3784FBDE1068556E_METHOD_3_66E92F0F1F2E149A_OFFSET UNITYSDK_OFFSET(0x14AABF80)
#define CLASS_3_3784FBDE1068556E_METHOD_3_6C3E18151183E806_OFFSET UNITYSDK_OFFSET(0x14AA7FA0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_71CB1911E1482163_OFFSET UNITYSDK_OFFSET(0x14AA7D90)
#define CLASS_3_3784FBDE1068556E_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x14AA7D20)
#define CLASS_3_3784FBDE1068556E_METHOD_3_77F5509F60E9D563_OFFSET UNITYSDK_OFFSET(0x14AA8030)
#define CLASS_3_3784FBDE1068556E_METHOD_3_7AE17E23D5D7D9E1_OFFSET UNITYSDK_OFFSET(0x14AAA390)
#define CLASS_3_3784FBDE1068556E_METHOD_3_838A7B6FC3359269_OFFSET UNITYSDK_OFFSET(0x14AABDC0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_8C0A991B87BCB7E5_OFFSET UNITYSDK_OFFSET(0x14AA9270)
#define CLASS_3_3784FBDE1068556E_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x14AABBF0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x14AACA40)
#define CLASS_3_3784FBDE1068556E_METHOD_3_ABC648D3784862E2_OFFSET UNITYSDK_OFFSET(0x14AA8E40)
#define CLASS_3_3784FBDE1068556E_METHOD_3_ACC82255344BDFD8_OFFSET UNITYSDK_OFFSET(0x14AABA60)
#define CLASS_3_3784FBDE1068556E_METHOD_3_AE3493A700B105E9_OFFSET UNITYSDK_OFFSET(0x14AAC720)
#define CLASS_3_3784FBDE1068556E_METHOD_3_AF747A56A0F2C0A4_OFFSET UNITYSDK_OFFSET(0x14AAC030)
#define CLASS_3_3784FBDE1068556E_METHOD_3_BA7EC93585A2D84F_OFFSET UNITYSDK_OFFSET(0x14AA6750)
#define CLASS_3_3784FBDE1068556E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14AAD2E0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_BD354EC62647EDC0_OFFSET UNITYSDK_OFFSET(0x14AA8080)
#define CLASS_3_3784FBDE1068556E_METHOD_3_C5F7038291B9C7AC_OFFSET UNITYSDK_OFFSET(0x14AA90F0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_CA241200E605E58A_OFFSET UNITYSDK_OFFSET(0x14AA8C30)
#define CLASS_3_3784FBDE1068556E_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14AAC520)
#define CLASS_3_3784FBDE1068556E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14AAC490)
#define CLASS_3_3784FBDE1068556E_METHOD_3_D26D9E10340F3CAD_OFFSET UNITYSDK_OFFSET(0x14AA7580)
#define CLASS_3_3784FBDE1068556E_METHOD_3_D55069FE11A76D52_OFFSET UNITYSDK_OFFSET(0x14AAB9C0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E48D6654AD4E7EC9_OFFSET UNITYSDK_OFFSET(0x14AA7180)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E580FB8A7DB7EB67_OFFSET UNITYSDK_OFFSET(0x14AA64F0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E5B23F8EF798AAA5_OFFSET UNITYSDK_OFFSET(0x14AA9600)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E610E6ED7355DD4E_OFFSET UNITYSDK_OFFSET(0x14AA76F0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E8F3294104A2A048_OFFSET UNITYSDK_OFFSET(0x14AAD370)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E8F49BF844103AAC_OFFSET UNITYSDK_OFFSET(0x14AAB4B0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_F44843D801E0CB03_OFFSET UNITYSDK_OFFSET(0x14AA9EF0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0x14AAA7A0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_F5F44F1A22EBC8ED_OFFSET UNITYSDK_OFFSET(0x14AA87C0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_F95CA892D2345159_OFFSET UNITYSDK_OFFSET(0x14AA8AB0)
#define CLASS_3_3784FBDE1068556E_UPDATE_OFFSET UNITYSDK_OFFSET(0x14AA6010)
#define CLASS_3_3784FBDE1068556E__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AA64C0)
#define CLASS_3_3784FBDE1068556E__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA6470)

inline static constexpr unsigned int Class_3_3784FBDE1068556E_TypeDefinitionIndex = 69308;

class Class_3_3784FBDE1068556E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Single* StaticGet_Field_3_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0x9650);
	}
	static ::System::Single* StaticGet_Field_3_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0x9654);
	}
	static ::System::Single* StaticGet_Field_3_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0x9658);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0x965C);
	}
	static ::System::Boolean* StaticGet_Field_3_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0x965D);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0x965E);
	}
	static ::System::Single* StaticGet_Field_3_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0x9660);
	}
	// static const ::System::Int32 Field_3_7 = 0x2; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_E580FB8A7DB7EB67(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E580FB8A7DB7EB67_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0DBEBD74722C00C2(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0DBEBD74722C00C2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_0A7C48807515A41D(::MoleMole::EntityHandle a1, ::System::Action_2<::System::UInt32, ::System::Boolean>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0A7C48807515A41D_OFFSET))(a1, a2);
	}

	static ::MoleMole::AttackType Method_3_D26D9E10340F3CAD(::System::String* a1, ::MoleMole::AttackType a2)
	{
		return ((::MoleMole::AttackType(*)(::System::String*, ::MoleMole::AttackType))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_D26D9E10340F3CAD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E610E6ED7355DD4E(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E610E6ED7355DD4E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_3_093CFA5711463297(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_093CFA5711463297_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_71CB1911E1482163(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_71CB1911E1482163_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_6C3E18151183E806()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_6C3E18151183E806_OFFSET))();
	}

	static ::System::Void Method_3_77F5509F60E9D563(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_77F5509F60E9D563_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BD354EC62647EDC0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_BD354EC62647EDC0_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_435FA878CD73DCB7(::MoleMole::EntityHandle a1, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_435FA878CD73DCB7_OFFSET))(a1, a2);
	}

	::System::Void Method_3_F95CA892D2345159(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_F95CA892D2345159_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_ABC648D3784862E2(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_ABC648D3784862E2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C5F7038291B9C7AC(::Class_2_B242825AD4217625* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B242825AD4217625*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_C5F7038291B9C7AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E5B23F8EF798AAA5(::MoleMole::EntityHandle a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E5B23F8EF798AAA5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5D0C7528A8F66838(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_5D0C7528A8F66838_OFFSET))(a1);
	}

	static ::System::Void Method_3_F44843D801E0CB03(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_F44843D801E0CB03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F5F44F1A22EBC8ED(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_F5F44F1A22EBC8ED_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7AE17E23D5D7D9E1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_7AE17E23D5D7D9E1_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_3B522448B1B3BE68(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_3B522448B1B3BE68_OFFSET))(a1);
	}

	static ::System::Void Method_3_0539F1DF6B7FACDB(::Class_2_25A326E4E7F9FCFE* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_25A326E4E7F9FCFE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0539F1DF6B7FACDB_OFFSET))(a1, a2);
	}

	::System::Void Method_3_0C1A9D6D9E04543C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0C1A9D6D9E04543C_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8C0A991B87BCB7E5(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_8C0A991B87BCB7E5_OFFSET))(a1);
	}

	static ::System::Void Method_3_2BE98EB9F95F2CDC(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_2BE98EB9F95F2CDC_OFFSET))(a1);
	}

	::System::Void Method_3_BA7EC93585A2D84F(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_BA7EC93585A2D84F_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_E48D6654AD4E7EC9(::MoleMole::EntityHandle a1, ::System::String* a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E48D6654AD4E7EC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_29F0C501FEEE7583(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_29F0C501FEEE7583_OFFSET))(a1);
	}

	static ::System::Void Method_3_0508563E26675EC4(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0508563E26675EC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Void Method_3_838A7B6FC3359269(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_838A7B6FC3359269_OFFSET))(a1);
	}

	::System::Void Method_3_0FF755CF0787BB5E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0FF755CF0787BB5E_OFFSET))(this, a1);
	}

	static ::MoleMole::AttackType Method_3_66E92F0F1F2E149A(::Class_3_6D73516CC6FEADD7* a1, ::Class_3_CF6254B260CF5CF4* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::AttackType(*)(::Class_3_6D73516CC6FEADD7*, ::Class_3_CF6254B260CF5CF4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_66E92F0F1F2E149A_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_3DFE04DC823D9D33(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_3DFE04DC823D9D33_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_385AA2E42A1A69EE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_385AA2E42A1A69EE_OFFSET))(a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_AE3493A700B105E9(::Class_3_6D73516CC6FEADD7* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_AE3493A700B105E9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_08E666F7EFE21B1A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_08E666F7EFE21B1A_OFFSET))(a1);
	}

	static ::System::String* Method_3_2CC9263E08F5BAB5(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_2CC9263E08F5BAB5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D55069FE11A76D52(::Class_2_EFBBB9EB13AB1B92* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_EFBBB9EB13AB1B92*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_D55069FE11A76D52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_AF747A56A0F2C0A4(::Class_3_6D73516CC6FEADD7* a1, ::Class_3_CF6254B260CF5CF4* a2)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*, ::Class_3_CF6254B260CF5CF4*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_AF747A56A0F2C0A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3FEBC466DBC9364E(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_3FEBC466DBC9364E_OFFSET))(a1);
	}

	::System::Boolean Method_3_E8F49BF844103AAC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E8F49BF844103AAC_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_055E3BF644BB741B_OFFSET))(a1);
	}

	::System::Void Method_3_CA241200E605E58A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_CA241200E605E58A_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	static ::System::Void Method_3_E8F3294104A2A048(::Class_3_6D73516CC6FEADD7* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E8F3294104A2A048_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_ACC82255344BDFD8(::Class_2_1B1B79CF034B93D1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_1B1B79CF034B93D1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_ACC82255344BDFD8_OFFSET))(a1, a2);
	}
};

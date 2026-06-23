#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_1B1B79CF034B93D1;
class Class_2_25A326E4E7F9FCFE;
class Class_2_B242825AD4217625;
class Class_2_EFBBB9EB13AB1B92_1;
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

#define CLASS_3_3784FBDE1068556E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x174622A0)
#define CLASS_3_3784FBDE1068556E_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17462980)
#define CLASS_3_3784FBDE1068556E_METHOD_3_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x17466C40)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0508563E26675EC4_OFFSET UNITYSDK_OFFSET(0x17468D00)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0539F1DF6B7FACDB_OFFSET UNITYSDK_OFFSET(0x17462C20)
#define CLASS_3_3784FBDE1068556E_METHOD_3_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x174638A0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_08E666F7EFE21B1A_OFFSET UNITYSDK_OFFSET(0x17466630)
#define CLASS_3_3784FBDE1068556E_METHOD_3_093CFA5711463297_OFFSET UNITYSDK_OFFSET(0x17467470)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0A7C48807515A41D_OFFSET UNITYSDK_OFFSET(0x17468080)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0C1A9D6D9E04543C_OFFSET UNITYSDK_OFFSET(0x174687B0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0DBEBD74722C00C2_OFFSET UNITYSDK_OFFSET(0x174683B0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_0FF755CF0787BB5E_OFFSET UNITYSDK_OFFSET(0x17468A90)
#define CLASS_3_3784FBDE1068556E_METHOD_3_29F0C501FEEE7583_OFFSET UNITYSDK_OFFSET(0x17464A50)
#define CLASS_3_3784FBDE1068556E_METHOD_3_2BE98EB9F95F2CDC_OFFSET UNITYSDK_OFFSET(0x17465410)
#define CLASS_3_3784FBDE1068556E_METHOD_3_2CC9263E08F5BAB5_OFFSET UNITYSDK_OFFSET(0x17465660)
#define CLASS_3_3784FBDE1068556E_METHOD_3_385AA2E42A1A69EE_OFFSET UNITYSDK_OFFSET(0x174663E0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_3B522448B1B3BE68_OFFSET UNITYSDK_OFFSET(0x17464680)
#define CLASS_3_3784FBDE1068556E_METHOD_3_3DFE04DC823D9D33_OFFSET UNITYSDK_OFFSET(0x17465250)
#define CLASS_3_3784FBDE1068556E_METHOD_3_3FEBC466DBC9364E_OFFSET UNITYSDK_OFFSET(0x17469290)
#define CLASS_3_3784FBDE1068556E_METHOD_3_435FA878CD73DCB7_OFFSET UNITYSDK_OFFSET(0x17464BA0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_5D0C7528A8F66838_OFFSET UNITYSDK_OFFSET(0x17463900)
#define CLASS_3_3784FBDE1068556E_METHOD_3_66E92F0F1F2E149A_OFFSET UNITYSDK_OFFSET(0x174691E0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_6C3E18151183E806_OFFSET UNITYSDK_OFFSET(0x17466BB0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x174633D0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_73325761F6F6EE1A_OFFSET UNITYSDK_OFFSET(0x17465450)
#define CLASS_3_3784FBDE1068556E_METHOD_3_77F5509F60E9D563_OFFSET UNITYSDK_OFFSET(0x17464840)
#define CLASS_3_3784FBDE1068556E_METHOD_3_7AE17E23D5D7D9E1_OFFSET UNITYSDK_OFFSET(0x174667A0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_838A7B6FC3359269_OFFSET UNITYSDK_OFFSET(0x17464890)
#define CLASS_3_3784FBDE1068556E_METHOD_3_8C0A991B87BCB7E5_OFFSET UNITYSDK_OFFSET(0x17462D90)
#define CLASS_3_3784FBDE1068556E_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x17466210)
#define CLASS_3_3784FBDE1068556E_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x17462BE0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_ABC648D3784862E2_OFFSET UNITYSDK_OFFSET(0x17463120)
#define CLASS_3_3784FBDE1068556E_METHOD_3_ACC82255344BDFD8_OFFSET UNITYSDK_OFFSET(0x174644F0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_AE3493A700B105E9_OFFSET UNITYSDK_OFFSET(0x17468EC0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_AF747A56A0F2C0A4_OFFSET UNITYSDK_OFFSET(0x17463440)
#define CLASS_3_3784FBDE1068556E_METHOD_3_BA7EC93585A2D84F_OFFSET UNITYSDK_OFFSET(0x17463CD0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x17468280)
#define CLASS_3_3784FBDE1068556E_METHOD_3_BD354EC62647EDC0_OFFSET UNITYSDK_OFFSET(0x17467060)
#define CLASS_3_3784FBDE1068556E_METHOD_3_C5F7038291B9C7AC_OFFSET UNITYSDK_OFFSET(0x17465710)
#define CLASS_3_3784FBDE1068556E_METHOD_3_CA241200E605E58A_OFFSET UNITYSDK_OFFSET(0x17466E50)
#define CLASS_3_3784FBDE1068556E_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17467FF0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x174673E0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_D26D9E10340F3CAD_OFFSET UNITYSDK_OFFSET(0x17465E40)
#define CLASS_3_3784FBDE1068556E_METHOD_3_D55069FE11A76D52_OFFSET UNITYSDK_OFFSET(0x17468310)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E48D6654AD4E7EC9_OFFSET UNITYSDK_OFFSET(0x174640F0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E580FB8A7DB7EB67_OFFSET UNITYSDK_OFFSET(0x17465FB0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E5B23F8EF798AAA5_OFFSET UNITYSDK_OFFSET(0x17467800)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E610E6ED7355DD4E_OFFSET UNITYSDK_OFFSET(0x17468550)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E8F3294104A2A048_OFFSET UNITYSDK_OFFSET(0x17466C80)
#define CLASS_3_3784FBDE1068556E_METHOD_3_E8F49BF844103AAC_OFFSET UNITYSDK_OFFSET(0x17463EF0)
#define CLASS_3_3784FBDE1068556E_METHOD_3_F44843D801E0CB03_OFFSET UNITYSDK_OFFSET(0x17467F10)
#define CLASS_3_3784FBDE1068556E_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0x17465890)
#define CLASS_3_3784FBDE1068556E_METHOD_3_F5F44F1A22EBC8ED_OFFSET UNITYSDK_OFFSET(0x17464F60)
#define CLASS_3_3784FBDE1068556E_METHOD_3_F95CA892D2345159_OFFSET UNITYSDK_OFFSET(0x17466CD0)
#define CLASS_3_3784FBDE1068556E_UPDATE_OFFSET UNITYSDK_OFFSET(0x174626A0)
#define CLASS_3_3784FBDE1068556E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17462BA0)
#define CLASS_3_3784FBDE1068556E__CTOR_OFFSET UNITYSDK_OFFSET(0x17462B00)

inline static constexpr unsigned int Class_3_3784FBDE1068556E_TypeDefinitionIndex = 61294;

class Class_3_3784FBDE1068556E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Single* StaticGet_Field_3_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0xCCC0);
	}
	static ::System::Boolean* StaticGet_Field_3_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0xCCC4);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0xCCC5);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0xCCC6);
	}
	static ::System::Single* StaticGet_Field_3_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0xCCC8);
	}
	static ::System::Single* StaticGet_Field_3_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0xCCCC);
	}
	static ::System::Single* StaticGet_Field_3_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3784FBDE1068556E_TypeDefinitionIndex)->GetStaticField(0xCCD0);
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

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_0539F1DF6B7FACDB(::Class_2_25A326E4E7F9FCFE* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_25A326E4E7F9FCFE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0539F1DF6B7FACDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ABC648D3784862E2(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_ABC648D3784862E2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AF747A56A0F2C0A4(::Class_3_6D73516CC6FEADD7* a1, ::Class_3_CF6254B260CF5CF4* a2)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*, ::Class_3_CF6254B260CF5CF4*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_AF747A56A0F2C0A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_055E3BF644BB741B_OFFSET))(a1);
	}

	static ::System::Void Method_3_5D0C7528A8F66838(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_5D0C7528A8F66838_OFFSET))(a1);
	}

	::System::Void Method_3_BA7EC93585A2D84F(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_BA7EC93585A2D84F_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_E48D6654AD4E7EC9(::MoleMole::EntityHandle a1, ::System::String* a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E48D6654AD4E7EC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_ACC82255344BDFD8(::Class_2_1B1B79CF034B93D1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_1B1B79CF034B93D1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_ACC82255344BDFD8_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_3B522448B1B3BE68(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_3B522448B1B3BE68_OFFSET))(a1);
	}

	static ::System::Void Method_3_77F5509F60E9D563(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_77F5509F60E9D563_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_838A7B6FC3359269(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_838A7B6FC3359269_OFFSET))(a1);
	}

	static ::System::Void Method_3_29F0C501FEEE7583(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_29F0C501FEEE7583_OFFSET))(a1);
	}

	static ::System::Void Method_3_435FA878CD73DCB7(::MoleMole::EntityHandle a1, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_435FA878CD73DCB7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3DFE04DC823D9D33(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_3DFE04DC823D9D33_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_2BE98EB9F95F2CDC(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_2BE98EB9F95F2CDC_OFFSET))(a1);
	}

	::System::Void Method_3_73325761F6F6EE1A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_73325761F6F6EE1A_OFFSET))(this, a1);
	}

	static ::System::String* Method_3_2CC9263E08F5BAB5(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_2CC9263E08F5BAB5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C5F7038291B9C7AC(::Class_2_B242825AD4217625* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B242825AD4217625*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_C5F7038291B9C7AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	::System::Void Method_3_E580FB8A7DB7EB67(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E580FB8A7DB7EB67_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Void Method_3_385AA2E42A1A69EE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_385AA2E42A1A69EE_OFFSET))(a1);
	}

	static ::System::Void Method_3_7AE17E23D5D7D9E1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_7AE17E23D5D7D9E1_OFFSET))(a1);
	}

	static ::System::Single Method_3_6C3E18151183E806()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_6C3E18151183E806_OFFSET))();
	}

	::System::Boolean Method_3_E8F49BF844103AAC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E8F49BF844103AAC_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_3_E8F3294104A2A048(::Class_3_6D73516CC6FEADD7* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E8F3294104A2A048_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_F95CA892D2345159(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_F95CA892D2345159_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_093CFA5711463297(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_093CFA5711463297_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E5B23F8EF798AAA5(::MoleMole::EntityHandle a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E5B23F8EF798AAA5_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA241200E605E58A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_CA241200E605E58A_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F5F44F1A22EBC8ED(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_F5F44F1A22EBC8ED_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F44843D801E0CB03(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_F44843D801E0CB03_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_08E666F7EFE21B1A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_08E666F7EFE21B1A_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_0A7C48807515A41D(::MoleMole::EntityHandle a1, ::System::Action_2<::System::UInt32, ::System::Boolean>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0A7C48807515A41D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_D55069FE11A76D52(::Class_2_EFBBB9EB13AB1B92_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_EFBBB9EB13AB1B92_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_D55069FE11A76D52_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E610E6ED7355DD4E(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_E610E6ED7355DD4E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_0C1A9D6D9E04543C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0C1A9D6D9E04543C_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0DBEBD74722C00C2(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0DBEBD74722C00C2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_8C0A991B87BCB7E5(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_8C0A991B87BCB7E5_OFFSET))(a1);
	}

	::System::Void Method_3_0FF755CF0787BB5E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0FF755CF0787BB5E_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0508563E26675EC4(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_0508563E26675EC4_OFFSET))(a1, a2);
	}

	static ::MoleMole::AttackType Method_3_D26D9E10340F3CAD(::System::String* a1, ::MoleMole::AttackType a2)
	{
		return ((::MoleMole::AttackType(*)(::System::String*, ::MoleMole::AttackType))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_D26D9E10340F3CAD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AE3493A700B105E9(::Class_3_6D73516CC6FEADD7* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_AE3493A700B105E9_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BD354EC62647EDC0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_BD354EC62647EDC0_OFFSET))(this, a1);
	}

	static ::MoleMole::AttackType Method_3_66E92F0F1F2E149A(::Class_3_6D73516CC6FEADD7* a1, ::Class_3_CF6254B260CF5CF4* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::AttackType(*)(::Class_3_6D73516CC6FEADD7*, ::Class_3_CF6254B260CF5CF4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_66E92F0F1F2E149A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3FEBC466DBC9364E(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_METHOD_3_3FEBC466DBC9364E_OFFSET))(a1);
	}
};

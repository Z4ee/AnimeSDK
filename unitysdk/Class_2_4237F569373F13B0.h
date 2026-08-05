#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Struct_2_7C0C45934B7D5974.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
class Class_1_B7E341C5F1A6F199;
class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2F4CE9A3C30CD7F4;
class Class_3_C93CC3D2C2AC4067;
class Class_3_E41C1EFCBD73D3C9_9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4237F569373F13B0_METHOD_2_0254BCE02D3CF10C_OFFSET UNITYSDK_OFFSET(0x11C8B670)
#define CLASS_2_4237F569373F13B0_METHOD_2_112C2B8B7932F43A_OFFSET UNITYSDK_OFFSET(0x11C8B930)
#define CLASS_2_4237F569373F13B0_METHOD_2_1AA906B86AEDF61E_OFFSET UNITYSDK_OFFSET(0x11C8BD40)
#define CLASS_2_4237F569373F13B0_METHOD_2_1AF099404F24215A_OFFSET UNITYSDK_OFFSET(0x11C876C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_1EA0C3C861855A26_OFFSET UNITYSDK_OFFSET(0x11C8A100)
#define CLASS_2_4237F569373F13B0_METHOD_2_247244D4DA8509BE_OFFSET UNITYSDK_OFFSET(0x11C87C90)
#define CLASS_2_4237F569373F13B0_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11C8A290)
#define CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_1_OFFSET UNITYSDK_OFFSET(0x11C8ABB0)
#define CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x11C8A3B0)
#define CLASS_2_4237F569373F13B0_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0x11C88D30)
#define CLASS_2_4237F569373F13B0_METHOD_2_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0x11C87F30)
#define CLASS_2_4237F569373F13B0_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x11C8A330)
#define CLASS_2_4237F569373F13B0_METHOD_2_367A5F1ECD1BC1A2_OFFSET UNITYSDK_OFFSET(0x11C85760)
#define CLASS_2_4237F569373F13B0_METHOD_2_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x11C84580)
#define CLASS_2_4237F569373F13B0_METHOD_2_3C167EBA2B9E4948_OFFSET UNITYSDK_OFFSET(0x11C848A0)
#define CLASS_2_4237F569373F13B0_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x11C86BE0)
#define CLASS_2_4237F569373F13B0_METHOD_2_4420CC1072CF008D_OFFSET UNITYSDK_OFFSET(0x11C89C40)
#define CLASS_2_4237F569373F13B0_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x11C869F0)
#define CLASS_2_4237F569373F13B0_METHOD_2_48BE260CBBBC7A6C_OFFSET UNITYSDK_OFFSET(0x11C86EA0)
#define CLASS_2_4237F569373F13B0_METHOD_2_4A958D3D056F27B7_OFFSET UNITYSDK_OFFSET(0x11C86CB0)
#define CLASS_2_4237F569373F13B0_METHOD_2_596DCAABFD5AB5A9_OFFSET UNITYSDK_OFFSET(0x11C87790)
#define CLASS_2_4237F569373F13B0_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x11C85550)
#define CLASS_2_4237F569373F13B0_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x11C8B560)
#define CLASS_2_4237F569373F13B0_METHOD_2_74C46B91641AB4F4_OFFSET UNITYSDK_OFFSET(0x11C86D80)
#define CLASS_2_4237F569373F13B0_METHOD_2_752327E536CECC02_OFFSET UNITYSDK_OFFSET(0x11C89A50)
#define CLASS_2_4237F569373F13B0_METHOD_2_76C2DF0449D25A29_OFFSET UNITYSDK_OFFSET(0x11C88D40)
#define CLASS_2_4237F569373F13B0_METHOD_2_8B1D1F4F3D0E01CB_OFFSET UNITYSDK_OFFSET(0x11C868D0)
#define CLASS_2_4237F569373F13B0_METHOD_2_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x11C85F40)
#define CLASS_2_4237F569373F13B0_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x11C8A170)
#define CLASS_2_4237F569373F13B0_METHOD_2_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x11C8AC40)
#define CLASS_2_4237F569373F13B0_METHOD_2_97D481F1A9B51827_OFFSET UNITYSDK_OFFSET(0x11C8A8C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_1_OFFSET UNITYSDK_OFFSET(0x11C8A200)
#define CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x11C86880)
#define CLASS_2_4237F569373F13B0_METHOD_2_9CFEBCB9273F8FFB_OFFSET UNITYSDK_OFFSET(0x11C84450)
#define CLASS_2_4237F569373F13B0_METHOD_2_A8D2B57D37726601_OFFSET UNITYSDK_OFFSET(0x11C89050)
#define CLASS_2_4237F569373F13B0_METHOD_2_AFC142D734823FB1_OFFSET UNITYSDK_OFFSET(0x11C8B2C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x11C86C50)
#define CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11C89BB0)
#define CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11C8BCB0)
#define CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11C88250)
#define CLASS_2_4237F569373F13B0_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x11C8C040)
#define CLASS_2_4237F569373F13B0_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x11C8A440)
#define CLASS_2_4237F569373F13B0_METHOD_2_EC73283227CA25E8_OFFSET UNITYSDK_OFFSET(0x11C870F0)
#define CLASS_2_4237F569373F13B0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11C882E0)
#define CLASS_2_4237F569373F13B0_METHOD_2_F4E4A159FF109016_OFFSET UNITYSDK_OFFSET(0x11C882F0)
#define CLASS_2_4237F569373F13B0_METHOD_2_FA483062C4884EE6_OFFSET UNITYSDK_OFFSET(0x11C84830)
#define CLASS_2_4237F569373F13B0_ONTRIGGERENTER_1_OFFSET UNITYSDK_OFFSET(0x11C87470)
#define CLASS_2_4237F569373F13B0_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x11C87410)
#define CLASS_2_4237F569373F13B0_ONTRIGGEREXIT_1_OFFSET UNITYSDK_OFFSET(0x11C87A60)
#define CLASS_2_4237F569373F13B0_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x11C87910)
#define CLASS_2_4237F569373F13B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C880B0)
#define CLASS_2_4237F569373F13B0__CTOR_OFFSET UNITYSDK_OFFSET(0x11C87FC0)

inline static constexpr unsigned int Class_2_4237F569373F13B0_TypeDefinitionIndex = 53213;

class Class_2_4237F569373F13B0 : public ::Class_1_C836D00248E6EFFE
{
public:
	static ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>** StaticGet_Field_2_15()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4237F569373F13B0_TypeDefinitionIndex)->GetStaticField(0x45780);
	}
	::System::String* Field_2_17; // 0x50
	::MoleMole::MonoConfigurableCollider* Field_2_7; // 0x58
	::UnityEngine::Collider* Field_2_6; // 0x60
	::MoleMole::Battle::ColliderEventDispatcher* Field_2_4; // 0x68
	::MoleMole::Battle::Entity* Field_2_8; // 0x70
	::Class_1_8289F2785D9AA990* Field_2_12; // 0x78
	::Class_3_E41C1EFCBD73D3C9_9* Field_2_0; // 0x80
	::Class_3_F41D242A20F8FE06* Field_2_19; // 0x88
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_11; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*>* Field_2_9; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_10; // 0xA0
	::Struct_2_FC595D1A561D8C6F_1 Field_2_18; // 0xA8
	::System::Boolean Field_2_13; // 0xC4
	::System::Boolean Field_2_14; // 0xC5
	::System::Int32 Field_2_5; // 0xC8
	::System::Int32 Field_2_16; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9CFEBCB9273F8FFB(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_9CFEBCB9273F8FFB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Void Method_2_367A5F1ECD1BC1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_367A5F1ECD1BC1A2_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1D1F4F3D0E01CB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_8B1D1F4F3D0E01CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A958D3D056F27B7(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_4A958D3D056F27B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_74C46B91641AB4F4(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_74C46B91641AB4F4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_48BE260CBBBC7A6C(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_48BE260CBBBC7A6C_OFFSET))(this, a1);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_ONTRIGGERENTER_OFFSET))(this, a1, a2);
	}

	::System::Void OnTriggerEnter_1(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_ONTRIGGERENTER_1_OFFSET))(this, a1);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_ONTRIGGEREXIT_OFFSET))(this, a1, a2);
	}

	::System::Void OnTriggerExit_1(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_ONTRIGGEREXIT_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_33B1098CBCE7AEF5_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F4E4A159FF109016(::Class_3_C93CC3D2C2AC4067* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F4E4A159FF109016_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_76C2DF0449D25A29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_76C2DF0449D25A29_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4420CC1072CF008D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_4420CC1072CF008D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EA0C3C861855A26(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_1EA0C3C861855A26_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A8D2B57D37726601(::Class_3_C93CC3D2C2AC4067* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_A8D2B57D37726601_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748_1(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Boolean Method_2_2A6B87C525933554_1(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC73283227CA25E8(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_EC73283227CA25E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_2_596DCAABFD5AB5A9(::MoleMole::Battle::Entity* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_596DCAABFD5AB5A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_752327E536CECC02(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_752327E536CECC02_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AFC142D734823FB1(::MoleMole::Battle::Entity* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_AFC142D734823FB1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97D481F1A9B51827(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_97D481F1A9B51827_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C167EBA2B9E4948()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_3C167EBA2B9E4948_OFFSET))(this);
	}

	::System::Void Method_2_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_0254BCE02D3CF10C(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Transform* a4)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_0254BCE02D3CF10C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_2_112C2B8B7932F43A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_112C2B8B7932F43A_OFFSET))(this);
	}

	::System::Boolean Method_2_1AF099404F24215A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_1AF099404F24215A_OFFSET))(this, a1);
	}

	::System::Void Method_2_247244D4DA8509BE(::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_247244D4DA8509BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AA906B86AEDF61E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_1AA906B86AEDF61E_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA483062C4884EE6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_FA483062C4884EE6_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}
};

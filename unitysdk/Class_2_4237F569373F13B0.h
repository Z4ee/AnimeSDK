#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Struct_2_7C0C45934B7D5974.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
class Class_1_B7E341C5F1A6F199;
class Class_2_0F138252A5783001;
class Class_2_167BB37617B940E3;
class Class_2_2F4CE9A3C30CD7F4;
class Class_2_EA995402651EF7A9;
class Class_3_87D60E227EA9E985;
class Class_3_DFD5D1FDB9D2A4AC;
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

#define CLASS_2_4237F569373F13B0_METHOD_2_0254BCE02D3CF10C_OFFSET UNITYSDK_OFFSET(0x1081D2F0)
#define CLASS_2_4237F569373F13B0_METHOD_2_088B50B583DFD4E2_OFFSET UNITYSDK_OFFSET(0x10819560)
#define CLASS_2_4237F569373F13B0_METHOD_2_13D8773148BD1DCD_OFFSET UNITYSDK_OFFSET(0x108195D0)
#define CLASS_2_4237F569373F13B0_METHOD_2_1AF099404F24215A_OFFSET UNITYSDK_OFFSET(0x1081C7C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_1EA0C3C861855A26_OFFSET UNITYSDK_OFFSET(0x1081C6C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_247244D4DA8509BE_OFFSET UNITYSDK_OFFSET(0x1081CDA0)
#define CLASS_2_4237F569373F13B0_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1081C4B0)
#define CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_1_OFFSET UNITYSDK_OFFSET(0x1081F490)
#define CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x1081C390)
#define CLASS_2_4237F569373F13B0_METHOD_2_2EAA21E8B2B8E133_OFFSET UNITYSDK_OFFSET(0x1081F330)
#define CLASS_2_4237F569373F13B0_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0x1081F480)
#define CLASS_2_4237F569373F13B0_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x1081B8C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x10819300)
#define CLASS_2_4237F569373F13B0_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x1081B6D0)
#define CLASS_2_4237F569373F13B0_METHOD_2_48BE260CBBBC7A6C_OFFSET UNITYSDK_OFFSET(0x1081BB30)
#define CLASS_2_4237F569373F13B0_METHOD_2_4A958D3D056F27B7_OFFSET UNITYSDK_OFFSET(0x1081B930)
#define CLASS_2_4237F569373F13B0_METHOD_2_4BDAB3BC63FC60BE_OFFSET UNITYSDK_OFFSET(0x1081CB80)
#define CLASS_2_4237F569373F13B0_METHOD_2_596DCAABFD5AB5A9_OFFSET UNITYSDK_OFFSET(0x1081F120)
#define CLASS_2_4237F569373F13B0_METHOD_2_5F99BC72BBDD3BF5_OFFSET UNITYSDK_OFFSET(0x1081E3C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1081A270)
#define CLASS_2_4237F569373F13B0_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x1081C550)
#define CLASS_2_4237F569373F13B0_METHOD_2_734CC582838F149E_OFFSET UNITYSDK_OFFSET(0x1081B600)
#define CLASS_2_4237F569373F13B0_METHOD_2_752327E536CECC02_OFFSET UNITYSDK_OFFSET(0x1081DFD0)
#define CLASS_2_4237F569373F13B0_METHOD_2_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x1081AC60)
#define CLASS_2_4237F569373F13B0_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1081C730)
#define CLASS_2_4237F569373F13B0_METHOD_2_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x1081D5B0)
#define CLASS_2_4237F569373F13B0_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x1081C080)
#define CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_1_OFFSET UNITYSDK_OFFSET(0x1081C420)
#define CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x1081B5B0)
#define CLASS_2_4237F569373F13B0_METHOD_2_9CFEBCB9273F8FFB_OFFSET UNITYSDK_OFFSET(0x108191D0)
#define CLASS_2_4237F569373F13B0_METHOD_2_AFC142D734823FB1_OFFSET UNITYSDK_OFFSET(0x1081E130)
#define CLASS_2_4237F569373F13B0_METHOD_2_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x1081A480)
#define CLASS_2_4237F569373F13B0_METHOD_2_BCBAC5DE94A2D917_OFFSET UNITYSDK_OFFSET(0x1081D040)
#define CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1081F520)
#define CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1081F5B0)
#define CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1081F2A0)
#define CLASS_2_4237F569373F13B0_METHOD_2_CAB09625B03CCCA7_OFFSET UNITYSDK_OFFSET(0x1081BA00)
#define CLASS_2_4237F569373F13B0_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x1081C660)
#define CLASS_2_4237F569373F13B0_METHOD_2_EC73283227CA25E8_OFFSET UNITYSDK_OFFSET(0x1081BD80)
#define CLASS_2_4237F569373F13B0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1081E6C0)
#define CLASS_2_4237F569373F13B0_METHOD_2_F3F3BFEE37D154A3_OFFSET UNITYSDK_OFFSET(0x1081D0A0)
#define CLASS_2_4237F569373F13B0_METHOD_2_F4E4A159FF109016_OFFSET UNITYSDK_OFFSET(0x1081E6D0)
#define CLASS_2_4237F569373F13B0_METHOD_2_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0x1081DC50)
#define CLASS_2_4237F569373F13B0_METHOD_2_FB61A10508D8E380_OFFSET UNITYSDK_OFFSET(0x1081C890)
#define CLASS_2_4237F569373F13B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1081C1F0)
#define CLASS_2_4237F569373F13B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1081C110)

inline static constexpr unsigned int Class_2_4237F569373F13B0_TypeDefinitionIndex = 77452;

class Class_2_4237F569373F13B0 : public ::Class_1_C836D00248E6EFFE
{
public:
	static ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>** StaticGet_Field_2_9()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4237F569373F13B0_TypeDefinitionIndex)->GetStaticField(0x3C040);
	}
	::MoleMole::MonoConfigurableCollider* Field_2_1; // 0x50
	::MoleMole::Battle::ColliderEventDispatcher* Field_2_4; // 0x58
	::System::String* Field_2_15; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_6; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*>* Field_2_7; // 0x70
	::Class_1_8289F2785D9AA990* Field_2_12; // 0x78
	::MoleMole::Battle::Entity* Field_2_8; // 0x80
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_5; // 0x88
	::Class_3_F41D242A20F8FE06* Field_2_13; // 0x90
	::Class_3_87D60E227EA9E985* Field_2_0; // 0x98
	::UnityEngine::Collider* Field_2_2; // 0xA0
	::System::Int32 Field_2_3; // 0xA8
	::Struct_2_FC595D1A561D8C6F Field_2_14; // 0xAC
	::System::Boolean Field_2_11; // 0xC8
	::System::Boolean Field_2_10; // 0xC9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9CFEBCB9273F8FFB(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_9CFEBCB9273F8FFB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::Void Method_2_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_734CC582838F149E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_734CC582838F149E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A958D3D056F27B7(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_4A958D3D056F27B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CAB09625B03CCCA7(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CAB09625B03CCCA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_48BE260CBBBC7A6C(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_48BE260CBBBC7A6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748_1(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_98511BB23D2E3748_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_2_1EA0C3C861855A26(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_1EA0C3C861855A26_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1AF099404F24215A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_1AF099404F24215A_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB61A10508D8E380(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_FB61A10508D8E380_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BDAB3BC63FC60BE(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_4BDAB3BC63FC60BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCBAC5DE94A2D917(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_BCBAC5DE94A2D917_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_13D8773148BD1DCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_13D8773148BD1DCD_OFFSET))(this);
	}

	::System::Void Method_2_088B50B583DFD4E2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_088B50B583DFD4E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_752327E536CECC02(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_752327E536CECC02_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F7810952FE14E15C_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_2_5F99BC72BBDD3BF5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_5F99BC72BBDD3BF5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F4E4A159FF109016(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F4E4A159FF109016_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F3F3BFEE37D154A3(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_F3F3BFEE37D154A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_247244D4DA8509BE(::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_247244D4DA8509BE_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_0254BCE02D3CF10C(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Transform* a4)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_0254BCE02D3CF10C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2EAA21E8B2B8E133(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2EAA21E8B2B8E133_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_596DCAABFD5AB5A9(::MoleMole::Battle::Entity* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_596DCAABFD5AB5A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Boolean Method_2_2A6B87C525933554_1(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_2A6B87C525933554_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC73283227CA25E8(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_EC73283227CA25E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_AFC142D734823FB1(::MoleMole::Battle::Entity* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_AFC142D734823FB1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4237F569373F13B0_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}
};

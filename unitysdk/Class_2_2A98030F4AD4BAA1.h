#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7D4F1B8FC35E82D.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BC1F0DE405AE0D4;
class Class_1_4F54BF4C6B55D9A9;
class Class_1_B87B48EBDCE76E87;
class Class_1_F8E6AA28A352CA0E;
class Class_2_2A98030F4AD4BAA1_Class_1_9F51B00CD5DB549F;
class Class_2_2A98030F4AD4BAA1_Class_1_E4E1541F984B635D;
class Class_2_7B2654787DC492CD;
namespace RPG::Client { class ChenLingStackDropProxy; }
namespace RPG::GameCore { class LevelPedestrianV2ChenLingStackOffsetInfo; }
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo_ChenLingStack; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_041ABD736B82E9F1_OFFSET UNITYSDK_OFFSET(0x15C91070)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_04F7BD7F299911C7_OFFSET UNITYSDK_OFFSET(0x15C905A0)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_09ADA625BB4E0352_OFFSET UNITYSDK_OFFSET(0x15C92060)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x15C90FE0)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15C90790)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x15C8EEC0)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_388F6655552B4D3E_OFFSET UNITYSDK_OFFSET(0x15C91E50)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x15C8FF50)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15C91230)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x15C90160)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_5577A9D510D644FB_OFFSET UNITYSDK_OFFSET(0x15C8DA60)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_63EDAB3EFF913F92_OFFSET UNITYSDK_OFFSET(0x15C8DE80)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_66E67324E0AB3AD4_OFFSET UNITYSDK_OFFSET(0x15C91B40)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_6BF0B1C95F527C3E_OFFSET UNITYSDK_OFFSET(0x15C91380)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x15C8E320)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_7FBFC04DB341E38F_OFFSET UNITYSDK_OFFSET(0x15C8FC40)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_82575C3C676FF783_OFFSET UNITYSDK_OFFSET(0x15C90830)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x15C8F190)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15C911C0)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15C8EF40)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_B8D7E7FB781EE394_OFFSET UNITYSDK_OFFSET(0x15C8F560)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_BBC3576C1739CB7F_OFFSET UNITYSDK_OFFSET(0x15C91810)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_D2967792C8AA78E6_OFFSET UNITYSDK_OFFSET(0x15C8EBC0)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_E146CE61ABF70C1C_OFFSET UNITYSDK_OFFSET(0x15C8F0A0)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x15C91280)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_E83C51340BE6FC16_OFFSET UNITYSDK_OFFSET(0x15C8F300)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_EB5F8FD6460806D7_OFFSET UNITYSDK_OFFSET(0x15C8FA50)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_EB7D2E1A5D72711D_OFFSET UNITYSDK_OFFSET(0x15C8E680)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_EC90937CEA9AFCA9_OFFSET UNITYSDK_OFFSET(0x15C8EFC0)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15C8E0D0)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_FA1645600B45B128_OFFSET UNITYSDK_OFFSET(0x15C8E230)
#define CLASS_2_2A98030F4AD4BAA1_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x15C8E580)
#define CLASS_2_2A98030F4AD4BAA1__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C92210)
#define CLASS_2_2A98030F4AD4BAA1__CTOR_OFFSET UNITYSDK_OFFSET(0x15C8DD00)

inline static constexpr unsigned int Class_2_2A98030F4AD4BAA1_TypeDefinitionIndex = 69336;

class Class_2_2A98030F4AD4BAA1 : public ::Class_1_E7D4F1B8FC35E82D
{
public:
	static ::System::Single* StaticGet_JLOLCHCLBOI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2A98030F4AD4BAA1_TypeDefinitionIndex)->GetStaticField(0x4A40);
	}
	// static const ::System::Single ODHKHLHPIAM; // 0x0
	// static const ::System::Single BMHCEOKJIPB; // 0x0
	// static const ::System::Single DOKKKDKPJCG; // 0x0
	// static const ::System::Single PLLGNDGIDBK; // 0x0
	::System::Collections::Generic::List_1<::Class_1_B87B48EBDCE76E87*>* NNOHIEKGFJA; // 0x20
	::Class_1_B87B48EBDCE76E87* BCMKMMEPCMJ; // 0x28
	::System::Collections::Generic::List_1<::Class_1_B87B48EBDCE76E87*>* KEFLEMEGPNA; // 0x30
	::Class_2_7B2654787DC492CD* NFCIHBOIBOP; // 0x38
	::System::Collections::Generic::HashSet_1<::Class_1_B87B48EBDCE76E87*>* DLLEDDKIOCJ; // 0x40
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>* JCKHHGCDAAM; // 0x48
	::RPG::Client::ChenLingStackDropProxy* AKHDANNKLAL; // 0x50
	::System::Collections::Generic::List_1<::Class_2_2A98030F4AD4BAA1_Class_1_9F51B00CD5DB549F*>* PDOIBEHBBOL; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* INNECGBHKMB; // 0x60
	::Class_1_4F54BF4C6B55D9A9* DKOFBCEICPO; // 0x68
	::UnityEngine::GameObject* PHMKPFPFGDF; // 0x70
	::System::Collections::Generic::List_1<::Class_2_2A98030F4AD4BAA1_Class_1_E4E1541F984B635D*>* GFPJBPBCHCL; // 0x78
	::Struct_2_085541A9CFF64383 FEKJGGNNLLI; // 0x80
	::System::Int32 MJBOFNNMDPE; // 0x88
	::System::Boolean LGNGBOPCNIO; // 0x8C
	::System::Boolean GMCHEBEKICB; // 0x8D
	::System::Boolean DBPJOCPHCAF; // 0x8E
	::System::Boolean PPIGLCIEIIM; // 0x8F
	::UnityEngine::Vector3 MIFKHBDOGLN; // 0x90
	::System::Nullable_1<::UnityEngine::Vector3> GFILAANHFOA; // 0x9C
	::System::Int32 GMJDPIINCFK; // 0xAC
	::System::Int32 KADCICPAAKK; // 0xB0
	::System::Single OOACJDJLBIN; // 0xB4
	::UnityEngine::Quaternion NCMEPPHLGEG; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1__CCTOR_OFFSET))();
	}

	static ::Class_2_2A98030F4AD4BAA1* Method_2_5577A9D510D644FB(::Class_1_F8E6AA28A352CA0E* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack* a2, ::Class_1_2BC1F0DE405AE0D4* a3, ::Struct_2_085541A9CFF64383 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Int32 a7)
	{
		return ((::Class_2_2A98030F4AD4BAA1*(*)(::Class_1_F8E6AA28A352CA0E*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*, ::Class_1_2BC1F0DE405AE0D4*, ::Struct_2_085541A9CFF64383, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_5577A9D510D644FB_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_63EDAB3EFF913F92(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_63EDAB3EFF913F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_EC90937CEA9AFCA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_EC90937CEA9AFCA9_OFFSET))(this);
	}

	::System::Boolean Method_2_E146CE61ABF70C1C(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_E146CE61ABF70C1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E83C51340BE6FC16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_E83C51340BE6FC16_OFFSET))(this);
	}

	::System::Boolean Method_2_B8D7E7FB781EE394(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_B8D7E7FB781EE394_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B10EBB5408EF02E(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BD9E95D1AEEBF9B(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_7FBFC04DB341E38F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_7FBFC04DB341E38F_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	static ::System::Void Method_2_04F7BD7F299911C7(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_04F7BD7F299911C7_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_2_82575C3C676FF783(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_82575C3C676FF783_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_0AB718BEE9EA06D7(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB5F8FD6460806D7(::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_EB5F8FD6460806D7_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_041ABD736B82E9F1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_041ABD736B82E9F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_6BF0B1C95F527C3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_6BF0B1C95F527C3E_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_2_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBC3576C1739CB7F(::Class_1_B87B48EBDCE76E87* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_BBC3576C1739CB7F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_66E67324E0AB3AD4(::Class_1_B87B48EBDCE76E87* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_66E67324E0AB3AD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EB7D2E1A5D72711D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_EB7D2E1A5D72711D_OFFSET))(this, a1);
	}

	::System::Void Method_2_388F6655552B4D3E(::Class_1_B87B48EBDCE76E87* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_388F6655552B4D3E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_09ADA625BB4E0352(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_09ADA625BB4E0352_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2967792C8AA78E6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_D2967792C8AA78E6_OFFSET))(this, a1);
	}

	::Class_1_B87B48EBDCE76E87* Method_2_FA1645600B45B128()
	{
		return ((::Class_1_B87B48EBDCE76E87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1_METHOD_2_FA1645600B45B128_OFFSET))(this);
	}
};

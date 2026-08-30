#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7D4F1B8FC35E82D.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BC1F0DE405AE0D4;
class Class_1_4F54BF4C6B55D9A9;
class Class_1_B87B48EBDCE76E87;
class Class_1_F8E6AA28A352CA0E;
class Class_2_9065242F5CF3F064;
class Class_2_D8E60A4D7D755F3F_Class_1_9F51B00CD5DB549F;
class Class_2_D8E60A4D7D755F3F_Class_1_E4E1541F984B635D;
namespace RPG::Client { class ChenLingStackDropProxy; }
namespace RPG::GameCore { class LevelPedestrianV2ChenLingStackOffsetInfo; }
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo_ChenLingStack; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_0169F0DBABDADCA6_OFFSET UNITYSDK_OFFSET(0x1B452DB0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_041ABD736B82E9F1_OFFSET UNITYSDK_OFFSET(0x1B453BD0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_04F7BD7F299911C7_OFFSET UNITYSDK_OFFSET(0x1B4530E0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x1B453B40)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1B4532D0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x1B451080)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_2FF8165EECCF923A_OFFSET UNITYSDK_OFFSET(0x1B453370)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x1B4523A0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_388F6655552B4D3E_OFFSET UNITYSDK_OFFSET(0x1B4549D0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1B453D90)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x1B451750)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_66E67324E0AB3AD4_OFFSET UNITYSDK_OFFSET(0x1B4546B0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_67E99E5CA0BBEF6F_OFFSET UNITYSDK_OFFSET(0x1B452650)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_8CB3ABD41F954D02_OFFSET UNITYSDK_OFFSET(0x1B451B00)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_8E4ED9FA27613068_OFFSET UNITYSDK_OFFSET(0x1B453ED0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B453D20)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_9A99B25922C65F46_OFFSET UNITYSDK_OFFSET(0x1B450EF0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x1B4519D0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1B452410)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_B8ADD1482F0B3E5B_OFFSET UNITYSDK_OFFSET(0x1B454BE0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_BBC3576C1739CB7F_OFFSET UNITYSDK_OFFSET(0x1B454370)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_D2967792C8AA78E6_OFFSET UNITYSDK_OFFSET(0x1B4520B0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_D5E2E9CBB5BC346D_OFFSET UNITYSDK_OFFSET(0x1B450A90)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_E146CE61ABF70C1C_OFFSET UNITYSDK_OFFSET(0x1B452570)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1B453DE0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_EA1CDF7B7BFCD14E_OFFSET UNITYSDK_OFFSET(0x1B452BA0)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_EC90937CEA9AFCA9_OFFSET UNITYSDK_OFFSET(0x1B452490)
#define CLASS_2_D8E60A4D7D755F3F_METHOD_2_FA1645600B45B128_OFFSET UNITYSDK_OFFSET(0x1B451670)
#define CLASS_2_D8E60A4D7D755F3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B454DC0)
#define CLASS_2_D8E60A4D7D755F3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B450D50)

inline static constexpr unsigned int Class_2_D8E60A4D7D755F3F_TypeDefinitionIndex = 69300;

class Class_2_D8E60A4D7D755F3F : public ::Class_1_E7D4F1B8FC35E82D
{
public:
	static ::System::Single* StaticGet_JLOLCHCLBOI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8E60A4D7D755F3F_TypeDefinitionIndex)->GetStaticField(0x14550);
	}
	// static const ::System::Single ODHKHLHPIAM; // 0x0
	// static const ::System::Single BMHCEOKJIPB; // 0x0
	// static const ::System::Single DOKKKDKPJCG; // 0x0
	// static const ::System::Single PLLGNDGIDBK; // 0x0
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>* JCKHHGCDAAM; // 0x20
	::System::Collections::Generic::List_1<::Class_2_D8E60A4D7D755F3F_Class_1_9F51B00CD5DB549F*>* PDOIBEHBBOL; // 0x28
	::System::Collections::Generic::List_1<::Class_1_B87B48EBDCE76E87*>* KEFLEMEGPNA; // 0x30
	::System::Collections::Generic::List_1<::Class_2_D8E60A4D7D755F3F_Class_1_E4E1541F984B635D*>* GFPJBPBCHCL; // 0x38
	::System::Collections::Generic::List_1<::Class_1_B87B48EBDCE76E87*>* NNOHIEKGFJA; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Int32>* INNECGBHKMB; // 0x48
	::Class_1_B87B48EBDCE76E87* BCMKMMEPCMJ; // 0x50
	::RPG::Client::ChenLingStackDropProxy* AKHDANNKLAL; // 0x58
	::System::Collections::Generic::HashSet_1<::Class_1_B87B48EBDCE76E87*>* DLLEDDKIOCJ; // 0x60
	::UnityEngine::GameObject* PHMKPFPFGDF; // 0x68
	::Class_2_9065242F5CF3F064* NFCIHBOIBOP; // 0x70
	::Class_1_4F54BF4C6B55D9A9* DKOFBCEICPO; // 0x78
	::UnityEngine::Quaternion NCMEPPHLGEG; // 0x80
	::Struct_2_085541A9CFF64383 FEKJGGNNLLI; // 0x90
	::System::Single OOACJDJLBIN; // 0x98
	::System::Boolean DBPJOCPHCAF; // 0x9C
	::System::Boolean LGNGBOPCNIO; // 0x9D
	::System::Boolean PPIGLCIEIIM; // 0x9E
	::System::Boolean GMCHEBEKICB; // 0x9F
	::UnityEngine::Vector3 MIFKHBDOGLN; // 0xA0
	::System::Int32 MJBOFNNMDPE; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F__CCTOR_OFFSET))();
	}

	static ::Class_2_D8E60A4D7D755F3F* Method_2_D5E2E9CBB5BC346D(::Class_1_F8E6AA28A352CA0E* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack* a2, ::Class_1_2BC1F0DE405AE0D4* a3, ::Struct_2_085541A9CFF64383 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Int32 a7)
	{
		return ((::Class_2_D8E60A4D7D755F3F*(*)(::Class_1_F8E6AA28A352CA0E*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*, ::Class_1_2BC1F0DE405AE0D4*, ::Struct_2_085541A9CFF64383, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_D5E2E9CBB5BC346D_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_9A99B25922C65F46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_9A99B25922C65F46_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_EC90937CEA9AFCA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_EC90937CEA9AFCA9_OFFSET))(this);
	}

	::System::Boolean Method_2_E146CE61ABF70C1C(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_E146CE61ABF70C1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_67E99E5CA0BBEF6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_67E99E5CA0BBEF6F_OFFSET))(this);
	}

	::System::Void Method_2_0169F0DBABDADCA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_0169F0DBABDADCA6_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	static ::System::Void Method_2_04F7BD7F299911C7(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_04F7BD7F299911C7_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_2_2FF8165EECCF923A(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_2FF8165EECCF923A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_0AB718BEE9EA06D7(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA1CDF7B7BFCD14E(::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_EA1CDF7B7BFCD14E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_041ABD736B82E9F1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_041ABD736B82E9F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_8E4ED9FA27613068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_8E4ED9FA27613068_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBC3576C1739CB7F(::Class_1_B87B48EBDCE76E87* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_BBC3576C1739CB7F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_66E67324E0AB3AD4(::Class_1_B87B48EBDCE76E87* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_66E67324E0AB3AD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8CB3ABD41F954D02(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_8CB3ABD41F954D02_OFFSET))(this, a1);
	}

	::System::Void Method_2_388F6655552B4D3E(::Class_1_B87B48EBDCE76E87* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_388F6655552B4D3E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B8ADD1482F0B3E5B(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_B8ADD1482F0B3E5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2967792C8AA78E6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_D2967792C8AA78E6_OFFSET))(this, a1);
	}

	::Class_1_B87B48EBDCE76E87* Method_2_FA1645600B45B128()
	{
		return ((::Class_1_B87B48EBDCE76E87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E60A4D7D755F3F_METHOD_2_FA1645600B45B128_OFFSET))(this);
	}
};

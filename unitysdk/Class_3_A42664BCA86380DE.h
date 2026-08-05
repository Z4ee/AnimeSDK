#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_05BFAB15000D9DD3;
class Class_2_3EB92686D65E00AD;
class Class_3_E3A7B298AF84D5C8;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_A42664BCA86380DE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14E8E710)
#define CLASS_3_A42664BCA86380DE_METHOD_3_13B01B1084F76626_OFFSET UNITYSDK_OFFSET(0x14E926C0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_1A40E6E03AB2641E_1_OFFSET UNITYSDK_OFFSET(0x14E8F5F0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_1A40E6E03AB2641E_OFFSET UNITYSDK_OFFSET(0x14E8EFF0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_1ADAA627726B3B38_OFFSET UNITYSDK_OFFSET(0x14E928C0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_1E4996E12000325D_OFFSET UNITYSDK_OFFSET(0x14E92240)
#define CLASS_3_A42664BCA86380DE_METHOD_3_2450C21B267142D4_OFFSET UNITYSDK_OFFSET(0x14E91700)
#define CLASS_3_A42664BCA86380DE_METHOD_3_29E45A41F530091D_OFFSET UNITYSDK_OFFSET(0x14E97280)
#define CLASS_3_A42664BCA86380DE_METHOD_3_38618B427CBC1790_OFFSET UNITYSDK_OFFSET(0x14E91390)
#define CLASS_3_A42664BCA86380DE_METHOD_3_4805283D59625FD9_1_OFFSET UNITYSDK_OFFSET(0x14E90A90)
#define CLASS_3_A42664BCA86380DE_METHOD_3_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x14E8F680)
#define CLASS_3_A42664BCA86380DE_METHOD_3_53D27661DD694647_OFFSET UNITYSDK_OFFSET(0x14E91B60)
#define CLASS_3_A42664BCA86380DE_METHOD_3_5C7720473B5EA7A0_OFFSET UNITYSDK_OFFSET(0x14E91E30)
#define CLASS_3_A42664BCA86380DE_METHOD_3_80445A51C61905E6_OFFSET UNITYSDK_OFFSET(0x14E94040)
#define CLASS_3_A42664BCA86380DE_METHOD_3_8A3E316C82E9B764_OFFSET UNITYSDK_OFFSET(0x14E8F080)
#define CLASS_3_A42664BCA86380DE_METHOD_3_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x14E97030)
#define CLASS_3_A42664BCA86380DE_METHOD_3_8ED5DB843E79106F_OFFSET UNITYSDK_OFFSET(0x14E907E0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_A52ACB285ECE1A55_1_OFFSET UNITYSDK_OFFSET(0x14E915A0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_A52ACB285ECE1A55_OFFSET UNITYSDK_OFFSET(0x14E91440)
#define CLASS_3_A42664BCA86380DE_METHOD_3_A7AF8FFB7EE78B19_OFFSET UNITYSDK_OFFSET(0x14E8FFF0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_A855BABF93498EDC_OFFSET UNITYSDK_OFFSET(0x14E93D90)
#define CLASS_3_A42664BCA86380DE_METHOD_3_ABC86004702C02B5_OFFSET UNITYSDK_OFFSET(0x14E95D20)
#define CLASS_3_A42664BCA86380DE_METHOD_3_B657C97BCCA720F2_OFFSET UNITYSDK_OFFSET(0x14E8F480)
#define CLASS_3_A42664BCA86380DE_METHOD_3_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x14E946D0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14E8FD80)
#define CLASS_3_A42664BCA86380DE_METHOD_3_BDE80D8605F009E4_OFFSET UNITYSDK_OFFSET(0x14E96620)
#define CLASS_3_A42664BCA86380DE_METHOD_3_C4944CF8B0C158A6_OFFSET UNITYSDK_OFFSET(0x14E90860)
#define CLASS_3_A42664BCA86380DE_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14E971F0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14E91300)
#define CLASS_3_A42664BCA86380DE_METHOD_3_CDC6627FF92D1439_OFFSET UNITYSDK_OFFSET(0x14E8FAA0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_CED5D882855A55E5_OFFSET UNITYSDK_OFFSET(0x14E901A0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_D2D818520BDB60FA_OFFSET UNITYSDK_OFFSET(0x14E93790)
#define CLASS_3_A42664BCA86380DE_METHOD_3_D3DD3597FB7A20D8_OFFSET UNITYSDK_OFFSET(0x14E8FE10)
#define CLASS_3_A42664BCA86380DE_METHOD_3_E1EC089DEA61859C_OFFSET UNITYSDK_OFFSET(0x14E90E40)
#define CLASS_3_A42664BCA86380DE_METHOD_3_E296E9C1ACC281AD_OFFSET UNITYSDK_OFFSET(0x14E924F0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_E2D18CAB0EDB6EB4_OFFSET UNITYSDK_OFFSET(0x14E96FD0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_E496D1F522F071ED_OFFSET UNITYSDK_OFFSET(0x14E909E0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_F0145305A0A4F2B4_OFFSET UNITYSDK_OFFSET(0x14E969E0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_F3B6A636EF10F66C_OFFSET UNITYSDK_OFFSET(0x14E95EF0)
#define CLASS_3_A42664BCA86380DE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14E8ECE0)
#define CLASS_3_A42664BCA86380DE_UPDATE_OFFSET UNITYSDK_OFFSET(0x14E8EE40)
#define CLASS_3_A42664BCA86380DE__CTOR_OFFSET UNITYSDK_OFFSET(0x14E8EFA0)

inline static constexpr unsigned int Class_3_A42664BCA86380DE_TypeDefinitionIndex = 85239;

class Class_3_A42664BCA86380DE : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_1A40E6E03AB2641E(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_1A40E6E03AB2641E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_B657C97BCCA720F2(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_B657C97BCCA720F2_OFFSET))(a1);
	}

	static ::System::Void Method_3_1A40E6E03AB2641E_1(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_1A40E6E03AB2641E_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_4805283D59625FD9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_4805283D59625FD9_OFFSET))();
	}

	static ::System::Void Method_3_CDC6627FF92D1439(::Class_2_05BFAB15000D9DD3* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_05BFAB15000D9DD3*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_CDC6627FF92D1439_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_D3DD3597FB7A20D8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_D3DD3597FB7A20D8_OFFSET))(a1);
	}

	static ::System::Void Method_3_CED5D882855A55E5(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_CED5D882855A55E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C4944CF8B0C158A6(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_C4944CF8B0C158A6_OFFSET))(a1);
	}

	static ::System::Void Method_3_E496D1F522F071ED(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_E496D1F522F071ED_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Single Method_3_38618B427CBC1790(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_38618B427CBC1790_OFFSET))(a1);
	}

	static ::System::Void Method_3_A7AF8FFB7EE78B19(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_A7AF8FFB7EE78B19_OFFSET))(a1);
	}

	static ::System::Void Method_3_2450C21B267142D4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_2450C21B267142D4_OFFSET))(a1);
	}

	static ::System::Void Method_3_8ED5DB843E79106F(::Class_3_E3A7B298AF84D5C8* a1, ::MoleMole::Config::MonsterStrengthType a2)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*, ::MoleMole::Config::MonsterStrengthType))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_8ED5DB843E79106F_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_A52ACB285ECE1A55(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_A52ACB285ECE1A55_OFFSET))(a1);
	}

	::System::Void Method_3_53D27661DD694647(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_53D27661DD694647_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5C7720473B5EA7A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_5C7720473B5EA7A0_OFFSET))(a1);
	}

	static ::System::Single Method_3_A52ACB285ECE1A55_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_A52ACB285ECE1A55_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_1E4996E12000325D(::Class_3_E3A7B298AF84D5C8* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_1E4996E12000325D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E296E9C1ACC281AD(::MoleMole::Battle::Entity* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_E296E9C1ACC281AD_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_13B01B1084F76626(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType a1)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_13B01B1084F76626_OFFSET))(a1);
	}

	static ::System::Void Method_3_1ADAA627726B3B38(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_1ADAA627726B3B38_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ABC86004702C02B5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_ABC86004702C02B5_OFFSET))(a1);
	}

	static ::System::Void Method_3_E1EC089DEA61859C(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_E1EC089DEA61859C_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_B76CD5CB3E297DF3_OFFSET))();
	}

	static ::System::Void Method_3_BDE80D8605F009E4(::Class_3_E3A7B298AF84D5C8* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_BDE80D8605F009E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D2D818520BDB60FA(::Class_2_3EB92686D65E00AD* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_3EB92686D65E00AD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_D2D818520BDB60FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F3B6A636EF10F66C(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_F3B6A636EF10F66C_OFFSET))(a1);
	}

	static ::System::Void Method_3_80445A51C61905E6(::MoleMole::Battle::Entity* a1, ::Class_3_E3A7B298AF84D5C8* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_80445A51C61905E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E2D18CAB0EDB6EB4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_E2D18CAB0EDB6EB4_OFFSET))(a1);
	}

	static ::System::Void Method_3_8A3E316C82E9B764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_8A3E316C82E9B764_OFFSET))(a1);
	}

	static ::System::Void Method_3_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_8DF47EF45ABD2A6C_OFFSET))();
	}

	static ::System::Single Method_3_F0145305A0A4F2B4(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Single(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_F0145305A0A4F2B4_OFFSET))(a1);
	}

	static ::System::Void Method_3_A855BABF93498EDC(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_A855BABF93498EDC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4805283D59625FD9_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_4805283D59625FD9_1_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_29E45A41F530091D(::Class_3_E3A7B298AF84D5C8* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_29E45A41F530091D_OFFSET))(a1, a2);
	}
};

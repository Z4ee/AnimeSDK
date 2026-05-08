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

#define CLASS_3_A42664BCA86380DE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x143E66A0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_13B01B1084F76626_OFFSET UNITYSDK_OFFSET(0x188FB870)
#define CLASS_3_A42664BCA86380DE_METHOD_3_179ACB135BB3FC5C_OFFSET UNITYSDK_OFFSET(0x143E7100)
#define CLASS_3_A42664BCA86380DE_METHOD_3_1A40E6E03AB2641E_1_OFFSET UNITYSDK_OFFSET(0x188F7D20)
#define CLASS_3_A42664BCA86380DE_METHOD_3_1A40E6E03AB2641E_OFFSET UNITYSDK_OFFSET(0x188F3D10)
#define CLASS_3_A42664BCA86380DE_METHOD_3_1DF1FA98B6A6B5EE_OFFSET UNITYSDK_OFFSET(0x188FB380)
#define CLASS_3_A42664BCA86380DE_METHOD_3_1E4996E12000325D_OFFSET UNITYSDK_OFFSET(0x188F5100)
#define CLASS_3_A42664BCA86380DE_METHOD_3_2450C21B267142D4_OFFSET UNITYSDK_OFFSET(0x188F8990)
#define CLASS_3_A42664BCA86380DE_METHOD_3_29326BC74A0B98F2_OFFSET UNITYSDK_OFFSET(0x188F7160)
#define CLASS_3_A42664BCA86380DE_METHOD_3_2FF45032311E7EB1_OFFSET UNITYSDK_OFFSET(0x188FBAF0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_38618B427CBC1790_OFFSET UNITYSDK_OFFSET(0x143E7180)
#define CLASS_3_A42664BCA86380DE_METHOD_3_4805283D59625FD9_1_OFFSET UNITYSDK_OFFSET(0x188F7E60)
#define CLASS_3_A42664BCA86380DE_METHOD_3_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x188F4B10)
#define CLASS_3_A42664BCA86380DE_METHOD_3_53D27661DD694647_OFFSET UNITYSDK_OFFSET(0x188FB0B0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_5C7720473B5EA7A0_OFFSET UNITYSDK_OFFSET(0x188FB3E0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_5CD5385DAD34A4A6_OFFSET UNITYSDK_OFFSET(0x188F86C0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_5DA5C50044B30385_OFFSET UNITYSDK_OFFSET(0x188FAAC0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_60ABCD55D7383B8E_OFFSET UNITYSDK_OFFSET(0x188F8F40)
#define CLASS_3_A42664BCA86380DE_METHOD_3_8A3E316C82E9B764_OFFSET UNITYSDK_OFFSET(0x188F3DA0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x188F4190)
#define CLASS_3_A42664BCA86380DE_METHOD_3_A52ACB285ECE1A55_1_OFFSET UNITYSDK_OFFSET(0x188F8DE0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_A52ACB285ECE1A55_OFFSET UNITYSDK_OFFSET(0x188F3BB0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_A7AF8FFB7EE78B19_OFFSET UNITYSDK_OFFSET(0x188F4350)
#define CLASS_3_A42664BCA86380DE_METHOD_3_A855BABF93498EDC_OFFSET UNITYSDK_OFFSET(0x188FA680)
#define CLASS_3_A42664BCA86380DE_METHOD_3_ABC86004702C02B5_OFFSET UNITYSDK_OFFSET(0x188F4F30)
#define CLASS_3_A42664BCA86380DE_METHOD_3_B657C97BCCA720F2_OFFSET UNITYSDK_OFFSET(0x143E6F80)
#define CLASS_3_A42664BCA86380DE_METHOD_3_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x188F53A0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x188FBA60)
#define CLASS_3_A42664BCA86380DE_METHOD_3_BDE80D8605F009E4_OFFSET UNITYSDK_OFFSET(0x188F7970)
#define CLASS_3_A42664BCA86380DE_METHOD_3_C4944CF8B0C158A6_OFFSET UNITYSDK_OFFSET(0x188FA930)
#define CLASS_3_A42664BCA86380DE_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x188FB7E0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x188F9120)
#define CLASS_3_A42664BCA86380DE_METHOD_3_D2D818520BDB60FA_OFFSET UNITYSDK_OFFSET(0x188FA090)
#define CLASS_3_A42664BCA86380DE_METHOD_3_D3DD3597FB7A20D8_OFFSET UNITYSDK_OFFSET(0x188F7790)
#define CLASS_3_A42664BCA86380DE_METHOD_3_D528B6AC38B34D15_OFFSET UNITYSDK_OFFSET(0x188F91B0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_E1EC089DEA61859C_OFFSET UNITYSDK_OFFSET(0x188F8210)
#define CLASS_3_A42664BCA86380DE_METHOD_3_E496D1F522F071ED_OFFSET UNITYSDK_OFFSET(0x188F7DB0)
#define CLASS_3_A42664BCA86380DE_METHOD_3_E675CC7DAB63A45F_OFFSET UNITYSDK_OFFSET(0x188F6A30)
#define CLASS_3_A42664BCA86380DE_METHOD_3_F0145305A0A4F2B4_OFFSET UNITYSDK_OFFSET(0x188F4500)
#define CLASS_3_A42664BCA86380DE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x143E6C70)
#define CLASS_3_A42664BCA86380DE_UPDATE_OFFSET UNITYSDK_OFFSET(0x143E6DD0)
#define CLASS_3_A42664BCA86380DE__CTOR_OFFSET UNITYSDK_OFFSET(0x143E6F30)

inline static constexpr unsigned int Class_3_A42664BCA86380DE_TypeDefinitionIndex = 48940;

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

	static ::System::Void Method_3_B657C97BCCA720F2(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_B657C97BCCA720F2_OFFSET))(a1);
	}

	static ::System::Void Method_3_179ACB135BB3FC5C(::Class_3_E3A7B298AF84D5C8* a1, ::MoleMole::Config::MonsterStrengthType a2)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*, ::MoleMole::Config::MonsterStrengthType))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_179ACB135BB3FC5C_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_38618B427CBC1790(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_38618B427CBC1790_OFFSET))(a1);
	}

	static ::System::Single Method_3_A52ACB285ECE1A55(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_A52ACB285ECE1A55_OFFSET))(a1);
	}

	static ::System::Void Method_3_1A40E6E03AB2641E(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_1A40E6E03AB2641E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_8DF47EF45ABD2A6C_OFFSET))();
	}

	static ::System::Single Method_3_F0145305A0A4F2B4(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Single(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_F0145305A0A4F2B4_OFFSET))(a1);
	}

	static ::System::Void Method_3_4805283D59625FD9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_4805283D59625FD9_OFFSET))();
	}

	static ::System::Void Method_3_ABC86004702C02B5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_ABC86004702C02B5_OFFSET))(a1);
	}

	static ::System::Void Method_3_1E4996E12000325D(::Class_3_E3A7B298AF84D5C8* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_1E4996E12000325D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_B76CD5CB3E297DF3_OFFSET))();
	}

	static ::System::Void Method_3_29326BC74A0B98F2(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_29326BC74A0B98F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D3DD3597FB7A20D8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_D3DD3597FB7A20D8_OFFSET))(a1);
	}

	static ::System::Void Method_3_BDE80D8605F009E4(::Class_3_E3A7B298AF84D5C8* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_BDE80D8605F009E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1A40E6E03AB2641E_1(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_1A40E6E03AB2641E_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_E496D1F522F071ED(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_E496D1F522F071ED_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_E675CC7DAB63A45F(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_E675CC7DAB63A45F_OFFSET))(a1);
	}

	static ::System::Void Method_3_E1EC089DEA61859C(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_E1EC089DEA61859C_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_5CD5385DAD34A4A6(::Class_2_05BFAB15000D9DD3* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_05BFAB15000D9DD3*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_5CD5385DAD34A4A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2450C21B267142D4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_2450C21B267142D4_OFFSET))(a1);
	}

	static ::System::Single Method_3_A52ACB285ECE1A55_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_A52ACB285ECE1A55_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_60ABCD55D7383B8E(::MoleMole::Battle::Entity* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_60ABCD55D7383B8E_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_D528B6AC38B34D15(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_D528B6AC38B34D15_OFFSET))(a1, a2);
	}

	::System::Void Method_3_53D27661DD694647(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_53D27661DD694647_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_1DF1FA98B6A6B5EE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_1DF1FA98B6A6B5EE_OFFSET))(a1);
	}

	static ::System::Void Method_3_8A3E316C82E9B764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_8A3E316C82E9B764_OFFSET))(a1);
	}

	static ::System::Void Method_3_4805283D59625FD9_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_4805283D59625FD9_1_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_13B01B1084F76626(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType a1)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_13B01B1084F76626_OFFSET))(a1);
	}

	static ::System::Void Method_3_5DA5C50044B30385(::MoleMole::Battle::Entity* a1, ::Class_3_E3A7B298AF84D5C8* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_5DA5C50044B30385_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D2D818520BDB60FA(::Class_2_3EB92686D65E00AD* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_3EB92686D65E00AD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_D2D818520BDB60FA_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5C7720473B5EA7A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_5C7720473B5EA7A0_OFFSET))(a1);
	}

	static ::System::Void Method_3_2FF45032311E7EB1(::Class_3_E3A7B298AF84D5C8* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_2FF45032311E7EB1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C4944CF8B0C158A6(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_C4944CF8B0C158A6_OFFSET))(a1);
	}

	static ::System::Void Method_3_A7AF8FFB7EE78B19(::Class_3_E3A7B298AF84D5C8* a1)
	{
		return ((::System::Void(*)(::Class_3_E3A7B298AF84D5C8*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_A7AF8FFB7EE78B19_OFFSET))(a1);
	}

	static ::System::Void Method_3_A855BABF93498EDC(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_METHOD_3_A855BABF93498EDC_OFFSET))(a1, a2);
	}
};

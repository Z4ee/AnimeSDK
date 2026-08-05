#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/Class_2_5F3F43A98D097A42_Enum_3_E780930DE1CECBEF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_8789B8149D32D3F2;
class Class_3_9CA249C88E9804C6;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigWindFieldProperty; }
namespace MoleMole::Config { class PatternShape; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }

#define CLASS_2_5F3F43A98D097A42_METHOD_2_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x14C61300)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_1BCE0DA867094A1E_OFFSET UNITYSDK_OFFSET(0x14C68220)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_20137FA294E860F3_OFFSET UNITYSDK_OFFSET(0x14C69280)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_211FA56B58F1A8B2_OFFSET UNITYSDK_OFFSET(0x14C67C10)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_2DB3296E56BB9BE7_OFFSET UNITYSDK_OFFSET(0x14C68950)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0x14C697F0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0x14C63460)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x14C62650)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_4BDEA15F76E72D18_OFFSET UNITYSDK_OFFSET(0x14C64EF0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_5FB0DC4E8DAA3EC5_OFFSET UNITYSDK_OFFSET(0x14C62BF0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_81D73E9E40EEBAD0_OFFSET UNITYSDK_OFFSET(0x14C662B0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x14C61CC0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_927ED2366981340D_OFFSET UNITYSDK_OFFSET(0x14C69500)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_9588AFB27191146D_OFFSET UNITYSDK_OFFSET(0x14C64A20)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_A1A7583D5F36A23C_OFFSET UNITYSDK_OFFSET(0x14C684E0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0x14C61210)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_AA8D0A0F7BE7C1EB_OFFSET UNITYSDK_OFFSET(0x14C65940)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x14C64C20)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_AEBE70633EEF1704_OFFSET UNITYSDK_OFFSET(0x14C68D30)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_1_OFFSET UNITYSDK_OFFSET(0x14C68050)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14C63D60)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x14C62B70)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_BC46A74DF805F47F_OFFSET UNITYSDK_OFFSET(0x14C690D0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14C64B90)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14C69040)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x14C69760)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C64B00)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x14C62A50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x14C63F20)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_DDCBB1EF892FBA58_OFFSET UNITYSDK_OFFSET(0x14C639E0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_E586D6D8F6F9325B_OFFSET UNITYSDK_OFFSET(0x14C63820)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x14C61E50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_F7A07702A3E8E5E6_OFFSET UNITYSDK_OFFSET(0x14C65780)
#define CLASS_2_5F3F43A98D097A42__CTOR_OFFSET UNITYSDK_OFFSET(0x14C634F0)

inline static constexpr unsigned int Class_2_5F3F43A98D097A42_TypeDefinitionIndex = 82918;

class Class_2_5F3F43A98D097A42 : public ::Class_1_C836D00248E6EFFE
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_23; // 0x50
	::UnityEngine::AnimationCurve* Field_2_31; // 0x58
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_21; // 0x60
	::UnityEngine::AnimationCurve* Field_2_24; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_10; // 0x70
	::Class_3_8789B8149D32D3F2* Field_2_1; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Battle::Entity*>* Field_2_7; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_27; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_C93CC3D2C2AC4067*>* Field_2_6; // 0x90
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_26; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9CA249C88E9804C6*>* Field_2_5; // 0xA0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_25; // 0xA8
	::MoleMole::Config::ConfigWindFieldProperty* Field_2_0; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_2_4; // 0xB8
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_20; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_2_11; // 0xC8
	::System::Single Field_2_8; // 0xD0
	::System::Single Field_2_13; // 0xD4
	::Class_2_5F3F43A98D097A42_Enum_3_E780930DE1CECBEF Field_2_9; // 0xD8
	::System::Single Field_2_19; // 0xDC
	::UnityEngine::Vector3 Field_2_18; // 0xE0
	::System::Single Field_2_14; // 0xEC
	::UnityEngine::Vector3 Field_2_16; // 0xF0
	::System::Single Field_2_15; // 0xFC
	::UnityEngine::Vector3 Field_2_17; // 0x100
	::System::Single Field_2_12; // 0x10C
	::System::Int32 Field_2_22; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_33B1098CBCE7AEF5_OFFSET))(this);
	}

	::System::Void Method_2_E586D6D8F6F9325B(::MoleMole::Battle::Entity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_E586D6D8F6F9325B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_9588AFB27191146D(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_9588AFB27191146D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Boolean Method_2_F7A07702A3E8E5E6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_F7A07702A3E8E5E6_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_2_AA8D0A0F7BE7C1EB(::MoleMole::Battle::Entity* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::MoleMole::Config::PatternShape* a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::Class_3_C93CC3D2C2AC4067*, ::MoleMole::Config::PatternShape*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_AA8D0A0F7BE7C1EB_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Single Method_2_2DB3296E56BB9BE7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_2DB3296E56BB9BE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FB0DC4E8DAA3EC5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_5FB0DC4E8DAA3EC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_BC46A74DF805F47F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_BC46A74DF805F47F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDCBB1EF892FBA58(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_DDCBB1EF892FBA58_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_AEBE70633EEF1704(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_AEBE70633EEF1704_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1BCE0DA867094A1E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_1BCE0DA867094A1E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_20137FA294E860F3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_20137FA294E860F3_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::Entity* Method_2_211FA56B58F1A8B2(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::PatternShape* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::PatternShape*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_211FA56B58F1A8B2_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_4BDEA15F76E72D18(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_4BDEA15F76E72D18_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_81D73E9E40EEBAD0(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::PatternShape* a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::PatternShape*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_81D73E9E40EEBAD0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_1_OFFSET))(this);
	}

	::System::Boolean Method_2_927ED2366981340D(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_927ED2366981340D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_A1A7583D5F36A23C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_A1A7583D5F36A23C_OFFSET))(this, a1);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}
};

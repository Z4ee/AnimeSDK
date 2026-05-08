#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/Class_2_5F3F43A98D097A42_Enum_3_E780930DE1CECBEF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0F138252A5783001;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_757A5862D4BBEE41;
class Class_3_8789B8149D32D3F2;
class Class_3_DFD5D1FDB9D2A4AC;
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

#define CLASS_2_5F3F43A98D097A42_METHOD_2_1BCE0DA867094A1E_OFFSET UNITYSDK_OFFSET(0x10078A40)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_20137FA294E860F3_OFFSET UNITYSDK_OFFSET(0x10079830)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_26DB7B943FB654E0_OFFSET UNITYSDK_OFFSET(0x10079AB0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_325839FCC7482990_OFFSET UNITYSDK_OFFSET(0x10079170)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0x10079550)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x10075250)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_4BDEA15F76E72D18_OFFSET UNITYSDK_OFFSET(0x100764C0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x10077770)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_5FB0DC4E8DAA3EC5_OFFSET UNITYSDK_OFFSET(0x10075800)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_81D73E9E40EEBAD0_OFFSET UNITYSDK_OFFSET(0x1007A7C0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x10073F50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_8A4FA7025C239134_OFFSET UNITYSDK_OFFSET(0x10079E50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_8C19339714663113_OFFSET UNITYSDK_OFFSET(0x10076FD0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x100748E0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_927ED2366981340D_OFFSET UNITYSDK_OFFSET(0x10076D70)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_9588AFB27191146D_OFFSET UNITYSDK_OFFSET(0x1007C150)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x10076070)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_A1A7583D5F36A23C_OFFSET UNITYSDK_OFFSET(0x10078D00)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0x10073E50)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_ACA02A72FF6E91EF_OFFSET UNITYSDK_OFFSET(0x10078620)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x10079560)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_AEBE70633EEF1704_OFFSET UNITYSDK_OFFSET(0x100782B0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_1_OFFSET UNITYSDK_OFFSET(0x1007C230)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x100775B0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x10075780)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_BC46A74DF805F47F_OFFSET UNITYSDK_OFFSET(0x10079320)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x100794C0)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1007C400)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x1007C490)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10076430)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x10075650)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x10074A70)
#define CLASS_2_5F3F43A98D097A42_METHOD_2_F7A07702A3E8E5E6_OFFSET UNITYSDK_OFFSET(0x100773F0)
#define CLASS_2_5F3F43A98D097A42__CTOR_OFFSET UNITYSDK_OFFSET(0x10076100)

inline static constexpr unsigned int Class_2_5F3F43A98D097A42_TypeDefinitionIndex = 56733;

class Class_2_5F3F43A98D097A42 : public ::Class_1_C836D00248E6EFFE
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_24; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_757A5862D4BBEE41*>* Field_2_4; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_DFD5D1FDB9D2A4AC*>* Field_2_3; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_20; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_7; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_18; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_2_5; // 0x80
	::Class_3_8789B8149D32D3F2* Field_2_0; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Battle::Entity*>* Field_2_2; // 0x90
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_22; // 0x98
	::UnityEngine::AnimationCurve* Field_2_26; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_21; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_2_6; // 0xB0
	::UnityEngine::AnimationCurve* Field_2_25; // 0xB8
	::MoleMole::Config::ConfigWindFieldProperty* Field_2_1; // 0xC0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_23; // 0xC8
	::System::Int32 Field_2_19; // 0xD0
	::System::Single Field_2_9; // 0xD4
	::UnityEngine::Vector3 Field_2_15; // 0xD8
	::UnityEngine::Vector3 Field_2_16; // 0xE4
	::System::Single Field_2_11; // 0xF0
	::UnityEngine::Vector3 Field_2_17; // 0xF4
	::System::Single Field_2_10; // 0x100
	::Class_2_5F3F43A98D097A42_Enum_3_E780930DE1CECBEF Field_2_8; // 0x104
	::System::Single Field_2_14; // 0x108
	::System::Single Field_2_13; // 0x10C
	::System::Single Field_2_12; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_4BDEA15F76E72D18(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_4BDEA15F76E72D18_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::Entity* Method_2_8C19339714663113(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::PatternShape* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::PatternShape*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_8C19339714663113_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_F7A07702A3E8E5E6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_F7A07702A3E8E5E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_AEBE70633EEF1704(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_AEBE70633EEF1704_OFFSET))(this, a1);
	}

	::System::Single Method_2_ACA02A72FF6E91EF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_ACA02A72FF6E91EF_OFFSET))(this, a1);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_BC46A74DF805F47F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_BC46A74DF805F47F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A1A7583D5F36A23C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_A1A7583D5F36A23C_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Boolean Method_2_20137FA294E860F3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_20137FA294E860F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_26DB7B943FB654E0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_26DB7B943FB654E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_8A4FA7025C239134(::MoleMole::Battle::Entity* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::MoleMole::Config::PatternShape* a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::PatternShape*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_8A4FA7025C239134_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_9588AFB27191146D(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_9588AFB27191146D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_5FB0DC4E8DAA3EC5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_5FB0DC4E8DAA3EC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Boolean Method_2_1BCE0DA867094A1E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_1BCE0DA867094A1E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_927ED2366981340D(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_927ED2366981340D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_B09E78EE7EE4F8FA_1_OFFSET))(this);
	}

	::System::Void Method_2_325839FCC7482990(::MoleMole::Battle::Entity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_325839FCC7482990_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_81D73E9E40EEBAD0(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::PatternShape* a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::PatternShape*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5F3F43A98D097A42_METHOD_2_81D73E9E40EEBAD0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};

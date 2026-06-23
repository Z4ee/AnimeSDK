#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_955D79091BFF8D4F.h"
#include "unitysdk/Enum_3_CAFEA053ACEED753.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_105013703884A094;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }

#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x1620A6B0)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_0A0296D150EB9DA4_OFFSET UNITYSDK_OFFSET(0x1620A1A0)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1620A4D0)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_51D68607B7E96876_OFFSET UNITYSDK_OFFSET(0x1620A570)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_60069FCD99486CD7_OFFSET UNITYSDK_OFFSET(0x1620A3A0)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_610DB96480511960_OFFSET UNITYSDK_OFFSET(0x1620A230)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_655EB97F58032004_OFFSET UNITYSDK_OFFSET(0x16209B10)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_6FC489C2F3EDE0B8_OFFSET UNITYSDK_OFFSET(0x162098B0)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x16209A80)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_A572622C7508F2B4_OFFSET UNITYSDK_OFFSET(0x16209780)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_AB4AABC1733EB727_OFFSET UNITYSDK_OFFSET(0x1620A300)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1620A440)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16209A10)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1620A2D0)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1620A200)
#define CLASS_2_A615C8F2C3E22D9A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1620A2C0)
#define CLASS_2_A615C8F2C3E22D9A__CTOR_OFFSET UNITYSDK_OFFSET(0x1620A2F0)

inline static constexpr unsigned int Class_2_A615C8F2C3E22D9A_TypeDefinitionIndex = 54420;

class Class_2_A615C8F2C3E22D9A : public ::Class_1_955D79091BFF8D4F
{
public:
	::MoleMole::Battle::Entity* Field_2_4; // 0x50
	::MoleMole::Config::ConfigPosRot* Field_2_0; // 0x58
	::MoleMole::Battle::Entity* Field_2_1; // 0x60
	::UnityEngine::Vector3 Field_2_6; // 0x68
	::Enum_3_CAFEA053ACEED753 Field_2_3; // 0x74
	::System::Single Field_2_2; // 0x78
	::UnityEngine::Vector3 Field_2_5; // 0x7C
	::UnityEngine::Vector3 Field_2_7; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A572622C7508F2B4(::Class_1_105013703884A094* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105013703884A094*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_A572622C7508F2B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6FC489C2F3EDE0B8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_6FC489C2F3EDE0B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_655EB97F58032004(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_655EB97F58032004_OFFSET))(this, a1);
	}

	::System::Void Method_2_610DB96480511960(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::ConfigPosRot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_610DB96480511960_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_0A0296D150EB9DA4()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_0A0296D150EB9DA4_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_2_AB4AABC1733EB727(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::ConfigPosRot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_AB4AABC1733EB727_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_60069FCD99486CD7(::Class_1_105013703884A094* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105013703884A094*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_60069FCD99486CD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_51D68607B7E96876(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_51D68607B7E96876_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A615C8F2C3E22D9A_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D75840096F50FEFC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_105013703884A094;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }

#define CLASS_1_955D79091BFF8D4F_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10939E90)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1093A0B0)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x1093A080)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_60069FCD99486CD7_OFFSET UNITYSDK_OFFSET(0x10939E40)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x1093A100)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_AB4AABC1733EB727_OFFSET UNITYSDK_OFFSET(0x1093A010)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10939F30)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10939EF0)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1093A090)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1093A060)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_E0C935AE223B555F_OFFSET UNITYSDK_OFFSET(0x10939F70)
#define CLASS_1_955D79091BFF8D4F__CTOR_OFFSET UNITYSDK_OFFSET(0x1093A190)

inline static constexpr unsigned int Class_1_955D79091BFF8D4F_TypeDefinitionIndex = 64318;

class Class_1_955D79091BFF8D4F : public ::System::Object
{
public:
	::Enum_3_D75840096F50FEFC Field_1_0; // 0x10
	::UnityEngine::Quaternion Field_1_4; // 0x14
	::System::Single Field_1_2; // 0x24
	::UnityEngine::Vector3 Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x34
	::UnityEngine::Vector3 Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60069FCD99486CD7(::Class_1_105013703884A094* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105013703884A094*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_60069FCD99486CD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_E0C935AE223B555F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_E0C935AE223B555F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AB4AABC1733EB727(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::ConfigPosRot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_AB4AABC1733EB727_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_413F493333BF3391_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_96F6E9EA89A38FD1_OFFSET))(this);
	}
};

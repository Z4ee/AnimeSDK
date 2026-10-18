#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BGCurveWithDetectProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }
namespace UnityEngine { class Collider; }

#define CLASS_2_35B7FCD1E11518D9_METHOD_2_2DE98C8482BC8A62_OFFSET UNITYSDK_OFFSET(0x164E8260)
#define CLASS_2_35B7FCD1E11518D9_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x164E7910)
#define CLASS_2_35B7FCD1E11518D9_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x164E7980)
#define CLASS_2_35B7FCD1E11518D9_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x164E8900)
#define CLASS_2_35B7FCD1E11518D9_METHOD_2_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x164E7E60)
#define CLASS_2_35B7FCD1E11518D9_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x164E8010)
#define CLASS_2_35B7FCD1E11518D9_METHOD_2_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x164E8170)
#define CLASS_2_35B7FCD1E11518D9__CTOR_OFFSET UNITYSDK_OFFSET(0x164E77F0)

inline static constexpr unsigned int Class_2_35B7FCD1E11518D9_TypeDefinitionIndex = 54734;

class Class_2_35B7FCD1E11518D9 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::MonoProjectileBGCurve* HBHMBJKBCMN; // 0x48
	::UnityEngine::Collider* GEDMHBDAPGC; // 0x50
	::RPG::GameCore::BGCurveWithDetectProjectileData* FPGPHIEOMFL; // 0x58
	::UnityEngine::Vector3 JEKJEFELGLF; // 0x60
	::System::Single NKOAMJFKKLH; // 0x6C
	::UnityEngine::Vector3 CLIOGBBJILH; // 0x70
	::System::Boolean HGHPAOHCIAN; // 0x7C
	::System::Boolean HOAGFGHBLJD; // 0x7D
	::System::Boolean MDMAEPBKKEF; // 0x7E
	::System::Single FLBLLMPABOJ; // 0x80
	::UnityEngine::Vector3 MMMJAGICBDK; // 0x84

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_35B7FCD1E11518D9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35B7FCD1E11518D9_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35B7FCD1E11518D9_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35B7FCD1E11518D9_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_35B7FCD1E11518D9_METHOD_2_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_35B7FCD1E11518D9_METHOD_2_DF249C0E36759C3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DE98C8482BC8A62(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_35B7FCD1E11518D9_METHOD_2_2DE98C8482BC8A62_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35B7FCD1E11518D9_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}
};

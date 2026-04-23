#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BouncyProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_BE48FA26F3BF5148_METHOD_2_3261ACC0A77DB356_OFFSET UNITYSDK_OFFSET(0x980AD70)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x980A4E0)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_48B046DBD2CCBB5E_OFFSET UNITYSDK_OFFSET(0x980B030)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x980AFD0)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x980AF70)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x980A560)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_97FAD710C85F79F5_OFFSET UNITYSDK_OFFSET(0x980A770)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_C117F1BAC122F4D0_OFFSET UNITYSDK_OFFSET(0x980AE70)
#define CLASS_2_BE48FA26F3BF5148__CTOR_OFFSET UNITYSDK_OFFSET(0x980A400)

inline static constexpr unsigned int Class_2_BE48FA26F3BF5148_TypeDefinitionIndex = 50504;

class Class_2_BE48FA26F3BF5148 : public ::Class_1_1835888C1E19F013
{
public:
	::UnityEngine::Collider* Field_2_2; // 0x48
	::RPG::GameCore::BouncyProjectileData* Field_2_0; // 0x50
	::System::Boolean Field_2_4; // 0x58
	::System::Single Field_2_5; // 0x5C
	::UnityEngine::Vector3 Field_2_3; // 0x60
	::System::Single Field_2_1; // 0x6C

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_97FAD710C85F79F5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_97FAD710C85F79F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3261ACC0A77DB356(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_3261ACC0A77DB356_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C117F1BAC122F4D0(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_C117F1BAC122F4D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Boolean Method_2_48B046DBD2CCBB5E(::UnityEngine::Collider* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_48B046DBD2CCBB5E_OFFSET))(this, P0);
	}
};

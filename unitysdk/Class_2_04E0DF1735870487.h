#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D43919DCE1F00DCB.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A80764A8DE475761;
namespace RPG::GameCore { class FiveDimSimpleProjectileBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimSimpleProjectileMoveConfig; }
namespace RPG::GameCore { class FiveDimSimpleProjectilePropSpawnerParam; }

#define CLASS_2_04E0DF1735870487_METHOD_2_1609D51D5DF10FD0_OFFSET UNITYSDK_OFFSET(0x14FC33C0)
#define CLASS_2_04E0DF1735870487_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14FC2FF0)
#define CLASS_2_04E0DF1735870487_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14FC3140)
#define CLASS_2_04E0DF1735870487_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x14FC3090)
#define CLASS_2_04E0DF1735870487_METHOD_2_8F6DAA38CDF4D604_OFFSET UNITYSDK_OFFSET(0x14FC2ED0)
#define CLASS_2_04E0DF1735870487_METHOD_2_A693A537CF75EF88_OFFSET UNITYSDK_OFFSET(0x14FC2B70)
#define CLASS_2_04E0DF1735870487_METHOD_2_FCDA6C73F74BD98C_OFFSET UNITYSDK_OFFSET(0x14FC31A0)
#define CLASS_2_04E0DF1735870487__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC3490)

inline static constexpr unsigned int Class_2_04E0DF1735870487_TypeDefinitionIndex = 73115;

class Class_2_04E0DF1735870487 : public ::Class_1_D43919DCE1F00DCB
{
public:
	::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam* Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24
	::System::Single Field_2_3; // 0x28
	::System::Single Field_2_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E0DF1735870487__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A693A537CF75EF88(::Class_1_A80764A8DE475761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A80764A8DE475761*))((::PBYTE)hIl2Cpp + CLASS_2_04E0DF1735870487_METHOD_2_A693A537CF75EF88_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E0DF1735870487_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_04E0DF1735870487_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E0DF1735870487_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_FCDA6C73F74BD98C(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_04E0DF1735870487_METHOD_2_FCDA6C73F74BD98C_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FiveDimSimpleProjectileMoveConfig* Method_2_8F6DAA38CDF4D604()
	{
		return ((::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E0DF1735870487_METHOD_2_8F6DAA38CDF4D604_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig* Method_2_1609D51D5DF10FD0()
	{
		return ((::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E0DF1735870487_METHOD_2_1609D51D5DF10FD0_OFFSET))(this);
	}
};

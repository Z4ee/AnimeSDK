#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_61CAF00E1297CB12.h"
#include "unitysdk/Enum_3_B986CD89D081894B.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/Struct_2_519740F826A15881.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_183;

#define CLASS_1_72B9A77B5361D293_METHOD_1_5D87C89C097F586D_OFFSET UNITYSDK_OFFSET(0xFFF6240)
#define CLASS_1_72B9A77B5361D293_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xFFF6230)
#define CLASS_1_72B9A77B5361D293_METHOD_1_AA79701578860DC4_OFFSET UNITYSDK_OFFSET(0xFFF6340)
#define CLASS_1_72B9A77B5361D293_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xFFF62E0)
#define CLASS_1_72B9A77B5361D293_METHOD_1_FB24463ADA9D883B_OFFSET UNITYSDK_OFFSET(0xFFF6350)
#define CLASS_1_72B9A77B5361D293__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF6330)

inline static constexpr unsigned int Class_1_72B9A77B5361D293_TypeDefinitionIndex = 40375;

class Class_1_72B9A77B5361D293 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_1; // 0x10
	::MoleMole::Battle::ProceduralAnimDamperParam Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293__CTOR_OFFSET))(this);
	}

	::Enum_3_61CAF00E1297CB12 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_61CAF00E1297CB12(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_183* Method_1_5D87C89C097F586D(::Struct_2_519740F826A15881 a1)
	{
		return ((::Class_0_16E4307DCC419505_183*(*)(::PVOID, ::Struct_2_519740F826A15881))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_5D87C89C097F586D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_183* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_183*))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::MoleMole::Battle::ProceduralAnimDamperParam Method_1_AA79701578860DC4()
	{
		return ((::MoleMole::Battle::ProceduralAnimDamperParam(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_AA79701578860DC4_OFFSET))(this);
	}

	::System::Void Method_1_FB24463ADA9D883B(::MoleMole::Battle::ProceduralAnimDamperParam a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_FB24463ADA9D883B_OFFSET))(this, a1);
	}
};

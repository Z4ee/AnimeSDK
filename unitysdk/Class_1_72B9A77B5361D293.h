#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_61CAF00E1297CB12.h"
#include "unitysdk/Enum_3_B986CD89D081894B.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/Struct_2_519740F826A15881.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_184;

#define CLASS_1_72B9A77B5361D293_METHOD_1_5D87C89C097F586D_OFFSET UNITYSDK_OFFSET(0x18B0F760)
#define CLASS_1_72B9A77B5361D293_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18B0F750)
#define CLASS_1_72B9A77B5361D293_METHOD_1_AA79701578860DC4_OFFSET UNITYSDK_OFFSET(0x18B0F870)
#define CLASS_1_72B9A77B5361D293_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x18B0F800)
#define CLASS_1_72B9A77B5361D293_METHOD_1_FB24463ADA9D883B_OFFSET UNITYSDK_OFFSET(0x18B0F860)
#define CLASS_1_72B9A77B5361D293__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0F850)

inline static constexpr unsigned int Class_1_72B9A77B5361D293_TypeDefinitionIndex = 44924;

class Class_1_72B9A77B5361D293 : public ::System::Object
{
public:
	::MoleMole::Battle::ProceduralAnimDamperParam Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293__CTOR_OFFSET))(this);
	}

	::Enum_3_61CAF00E1297CB12 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_61CAF00E1297CB12(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_184* Method_1_5D87C89C097F586D(::Struct_2_519740F826A15881 a1)
	{
		return ((::Class_0_16E4307DCC419505_184*(*)(::PVOID, ::Struct_2_519740F826A15881))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_5D87C89C097F586D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_184*))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_FB24463ADA9D883B(::MoleMole::Battle::ProceduralAnimDamperParam a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_FB24463ADA9D883B_OFFSET))(this, a1);
	}

	::MoleMole::Battle::ProceduralAnimDamperParam Method_1_AA79701578860DC4()
	{
		return ((::MoleMole::Battle::ProceduralAnimDamperParam(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B9A77B5361D293_METHOD_1_AA79701578860DC4_OFFSET))(this);
	}
};

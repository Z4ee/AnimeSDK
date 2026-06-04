#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SpecialVisionUseType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F2415C7AC4F3ABF2_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xAADD4D0)
#define CLASS_1_F2415C7AC4F3ABF2_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xAADD6D0)
#define CLASS_1_F2415C7AC4F3ABF2_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xAADD690)
#define CLASS_1_F2415C7AC4F3ABF2_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0xAADD710)
#define CLASS_1_F2415C7AC4F3ABF2_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xAADD560)
#define CLASS_1_F2415C7AC4F3ABF2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xAADD770)
#define CLASS_1_F2415C7AC4F3ABF2_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xAADD5C0)
#define CLASS_1_F2415C7AC4F3ABF2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAADD760)
#define CLASS_1_F2415C7AC4F3ABF2__CTOR_OFFSET UNITYSDK_OFFSET(0xAADD4B0)

inline static constexpr unsigned int Class_1_F2415C7AC4F3ABF2_TypeDefinitionIndex = 56961;

class Class_1_F2415C7AC4F3ABF2 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::RPG::Client::SpecialVisionUseType Field_1_1; // 0x14
	::System::Boolean Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::System::Int32 Field_1_4; // 0x20
	::System::Single Field_1_5; // 0x24

	::System::Void _ctor(::RPG::Client::SpecialVisionUseType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SpecialVisionUseType, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2415C7AC4F3ABF2__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2415C7AC4F3ABF2_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2415C7AC4F3ABF2_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2415C7AC4F3ABF2_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2415C7AC4F3ABF2_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2415C7AC4F3ABF2_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2415C7AC4F3ABF2_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2415C7AC4F3ABF2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2415C7AC4F3ABF2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CelestialBodyData;
class OrbitData;
class VisibilityConfig;

#define SOLARSYSTEMDATA_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xD093960)
#define SOLARSYSTEMDATA_METHOD_1_571FA3C9F915CC8F_OFFSET UNITYSDK_OFFSET(0xD094210)
#define SOLARSYSTEMDATA_METHOD_1_5C7EB0202CB9C7CB_OFFSET UNITYSDK_OFFSET(0xD093FE0)
#define SOLARSYSTEMDATA_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0xD0938E0)
#define SOLARSYSTEMDATA_METHOD_1_6775604F93DD7110_OFFSET UNITYSDK_OFFSET(0xD093BF0)
#define SOLARSYSTEMDATA_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xD093C80)
#define SOLARSYSTEMDATA_METHOD_1_79F36DD86C7D8759_OFFSET UNITYSDK_OFFSET(0xD094050)
#define SOLARSYSTEMDATA_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD093850)
#define SOLARSYSTEMDATA_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xD094100)
#define SOLARSYSTEMDATA_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD0940C0)
#define SOLARSYSTEMDATA_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xD093620)
#define SOLARSYSTEMDATA_METHOD_1_C114FBFE85EC91AE_OFFSET UNITYSDK_OFFSET(0xD093B60)
#define SOLARSYSTEMDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD0941D0)
#define SOLARSYSTEMDATA_METHOD_1_CD4D09F643B17112_OFFSET UNITYSDK_OFFSET(0xD093F70)
#define SOLARSYSTEMDATA_METHOD_1_E77C8B76199615A0_OFFSET UNITYSDK_OFFSET(0xD093A10)
#define SOLARSYSTEMDATA_METHOD_1_EF50DBEEF0D75E16_OFFSET UNITYSDK_OFFSET(0xD0939C0)
#define SOLARSYSTEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0935F0)

inline static constexpr unsigned int SolarSystemData_TypeDefinitionIndex = 44645;

class SolarSystemData : public ::System::Object
{
public:
	// static const ::System::Int32 MAX_BODIES = 0x14; // 0x0
	::System::Single timeScale; // 0x10
	::System::Single currentTime; // 0x14
	::System::Single updateInterval; // 0x18
	::System::Single lastUpdateTime; // 0x1C
	::Il2CppArray<::OrbitData*>* orbitDataArray; // 0x20
	::Il2CppArray<::CelestialBodyData*>* bodyDataArray; // 0x28
	::System::Int32 activeBodyCount; // 0x30
	::VisibilityConfig* visibilityConfig; // 0x38
	::Il2CppArray<::UnityEngine::Vector3>* directionCache; // 0x40
	::Il2CppArray<::System::Single>* distanceCache; // 0x48
	::Il2CppArray<::System::Boolean>* horizonVisibilityCache; // 0x50
	::Il2CppArray<::System::Single>* angularSizeCache; // 0x58
	::Il2CppArray<::UnityEngine::Vector3>* skyPositionCache; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF50DBEEF0D75E16(::VisibilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::VisibilityConfig*))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_EF50DBEEF0D75E16_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E77C8B76199615A0(::CelestialBodyType a1, ::OrbitData* a2, ::CelestialBodyData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType, ::OrbitData*, ::CelestialBodyData*))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_E77C8B76199615A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C114FBFE85EC91AE(::CelestialBodyType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_C114FBFE85EC91AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6775604F93DD7110(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_6775604F93DD7110_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CD4D09F643B17112(::CelestialBodyType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_CD4D09F643B17112_OFFSET))(this, a1);
	}

	::CelestialBodyData* Method_1_5C7EB0202CB9C7CB(::CelestialBodyType a1)
	{
		return ((::CelestialBodyData*(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_5C7EB0202CB9C7CB_OFFSET))(this, a1);
	}

	::OrbitData* Method_1_79F36DD86C7D8759(::CelestialBodyType a1)
	{
		return ((::OrbitData*(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_79F36DD86C7D8759_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_571FA3C9F915CC8F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_METHOD_1_571FA3C9F915CC8F_OFFSET))(this, a1, a2);
	}
};

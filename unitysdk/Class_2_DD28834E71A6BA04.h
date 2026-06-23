#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AC327AA661D91B2.h"
#include "unitysdk/UnityEngine/ParticleSystem_MainModule.h"

namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_DD28834E71A6BA04_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x13131380)
#define CLASS_2_DD28834E71A6BA04_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13131350)
#define CLASS_2_DD28834E71A6BA04_METHOD_2_D80E4E30B3C7E143_OFFSET UNITYSDK_OFFSET(0x131311D0)
#define CLASS_2_DD28834E71A6BA04_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13131360)
#define CLASS_2_DD28834E71A6BA04_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x13131370)
#define CLASS_2_DD28834E71A6BA04_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x131311C0)
#define CLASS_2_DD28834E71A6BA04__CTOR_OFFSET UNITYSDK_OFFSET(0x13131300)

inline static constexpr unsigned int Class_2_DD28834E71A6BA04_TypeDefinitionIndex = 41581;

class Class_2_DD28834E71A6BA04 : public ::Class_1_0AC327AA661D91B2
{
public:
	::UnityEngine::ParticleSystem_MainModule Field_2_2; // 0x20
	::System::Boolean Field_2_0; // 0x28
	::System::Boolean Field_2_1; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD28834E71A6BA04__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD28834E71A6BA04_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_0AC327AA661D91B2* Method_2_D80E4E30B3C7E143(::MoleMole::Config::HollowChessboardParticleModuleConfig* a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::Class_1_0AC327AA661D91B2*(*)(::PVOID, ::MoleMole::Config::HollowChessboardParticleModuleConfig*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_DD28834E71A6BA04_METHOD_2_D80E4E30B3C7E143_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD28834E71A6BA04_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD28834E71A6BA04_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD28834E71A6BA04_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD28834E71A6BA04_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}
};

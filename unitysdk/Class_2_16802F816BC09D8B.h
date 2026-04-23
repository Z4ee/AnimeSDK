#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginProgress; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_16802F816BC09D8B_METHOD_2_03A1AC84763ACA7B_OFFSET UNITYSDK_OFFSET(0x1119D460)
#define CLASS_2_16802F816BC09D8B_METHOD_2_04577AC5AE05B41B_OFFSET UNITYSDK_OFFSET(0x1119D030)
#define CLASS_2_16802F816BC09D8B_METHOD_2_1AF20C9C575E47A0_OFFSET UNITYSDK_OFFSET(0x1119D550)
#define CLASS_2_16802F816BC09D8B_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0x1119D1A0)
#define CLASS_2_16802F816BC09D8B_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1119D5B0)
#define CLASS_2_16802F816BC09D8B_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x1119D0A0)
#define CLASS_2_16802F816BC09D8B_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x1119CF70)
#define CLASS_2_16802F816BC09D8B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1119CFE0)
#define CLASS_2_16802F816BC09D8B__CTOR_OFFSET UNITYSDK_OFFSET(0x1119D5A0)

inline static constexpr unsigned int Class_2_16802F816BC09D8B_TypeDefinitionIndex = 64426;

class Class_2_16802F816BC09D8B : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_1; // 0x18
	::System::Single Field_2_0; // 0x1C
	::System::Single Field_2_3; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16802F816BC09D8B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_16802F816BC09D8B_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16802F816BC09D8B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_04577AC5AE05B41B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16802F816BC09D8B_METHOD_2_04577AC5AE05B41B_OFFSET))(this, a1);
	}

	::System::Void Method_2_03A1AC84763ACA7B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16802F816BC09D8B_METHOD_2_03A1AC84763ACA7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16802F816BC09D8B_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16802F816BC09D8B_METHOD_2_1B3D8773D1869301_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginProgress* Method_2_1AF20C9C575E47A0()
	{
		return ((::RPG::Client::MonoEffectPluginProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16802F816BC09D8B_METHOD_2_1AF20C9C575E47A0_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_16802F816BC09D8B_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};

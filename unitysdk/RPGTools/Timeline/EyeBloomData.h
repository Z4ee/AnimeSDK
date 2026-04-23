#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_0545A2E78AEF671D_OFFSET UNITYSDK_OFFSET(0xB8DBA70)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_06C6B0B16AF9B0B4_OFFSET UNITYSDK_OFFSET(0xB8DB6E0)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB8DB680)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_741732AF4195334C_OFFSET UNITYSDK_OFFSET(0xB8DB960)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_865DD755B8787C08_OFFSET UNITYSDK_OFFSET(0xB8DB780)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8DB8F0)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_DCE8D7B2E8135673_OFFSET UNITYSDK_OFFSET(0xB8DBC00)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DB770)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EyeBloomData_TypeDefinitionIndex = 44855;

	class EyeBloomData : public ::System::Object
	{
	public:
		::System::Boolean EnableEyeBloomIntensity; // 0x10
		::System::Single EyeBloomIntensity; // 0x14
		::System::Boolean EnableEyeEffectProcs; // 0x18
		::System::Single EyeEffectProcs; // 0x1C
		::System::Boolean EnableEyeEffectColor; // 0x20
		::UnityEngine::Color EyeEffectColor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::RPGTools::Timeline::EyeBloomData* Method_1_06C6B0B16AF9B0B4()
		{
			return ((::RPGTools::Timeline::EyeBloomData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_06C6B0B16AF9B0B4_OFFSET))(this);
		}

		::RPGTools::Timeline::EyeBloomData* Method_1_865DD755B8787C08(::RPGTools::Timeline::EyeBloomData* a1)
		{
			return ((::RPGTools::Timeline::EyeBloomData*(*)(::PVOID, ::RPGTools::Timeline::EyeBloomData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_865DD755B8787C08_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::EyeBloomData* Method_1_741732AF4195334C(::RPGTools::Timeline::EyeBloomData* a1)
		{
			return ((::RPGTools::Timeline::EyeBloomData*(*)(::PVOID, ::RPGTools::Timeline::EyeBloomData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_741732AF4195334C_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::EyeBloomData* Method_1_0545A2E78AEF671D(::System::Single a1)
		{
			return ((::RPGTools::Timeline::EyeBloomData*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_0545A2E78AEF671D_OFFSET))(this, a1);
		}

		::UnityEngine::Color Method_1_DCE8D7B2E8135673(::UnityEngine::Color a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_DCE8D7B2E8135673_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}

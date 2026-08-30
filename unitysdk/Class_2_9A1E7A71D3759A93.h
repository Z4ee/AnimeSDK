#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginProgress; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_9A1E7A71D3759A93_METHOD_2_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0x1875ADE0)
#define CLASS_2_9A1E7A71D3759A93_METHOD_2_7613506EC3DD64A1_OFFSET UNITYSDK_OFFSET(0x1875B1B0)
#define CLASS_2_9A1E7A71D3759A93_METHOD_2_9DA796436610DAC6_OFFSET UNITYSDK_OFFSET(0x1875AD70)
#define CLASS_2_9A1E7A71D3759A93_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x1875ACB0)
#define CLASS_2_9A1E7A71D3759A93_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1875AD20)
#define CLASS_2_9A1E7A71D3759A93_METHOD_2_CF35203A2C63E7FB_OFFSET UNITYSDK_OFFSET(0x1875B2B0)
#define CLASS_2_9A1E7A71D3759A93_METHOD_2_FFBC3E5986CAC663_OFFSET UNITYSDK_OFFSET(0x1875AEF0)
#define CLASS_2_9A1E7A71D3759A93__CTOR_OFFSET UNITYSDK_OFFSET(0x1875B300)

inline static constexpr unsigned int Class_2_9A1E7A71D3759A93_TypeDefinitionIndex = 69859;

class Class_2_9A1E7A71D3759A93 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single GDLCJLFBFPG; // 0x18
	::System::Single HJKJOLPBAOO; // 0x1C
	::System::Single GHGGLAKNLAD; // 0x20
	::System::Single KCLBCNGCLHJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A1E7A71D3759A93__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_9A1E7A71D3759A93_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A1E7A71D3759A93_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9DA796436610DAC6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A1E7A71D3759A93_METHOD_2_9DA796436610DAC6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7613506EC3DD64A1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A1E7A71D3759A93_METHOD_2_7613506EC3DD64A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5B2CAD1A0582F9BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A1E7A71D3759A93_METHOD_2_5B2CAD1A0582F9BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFBC3E5986CAC663()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A1E7A71D3759A93_METHOD_2_FFBC3E5986CAC663_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginProgress* Method_2_CF35203A2C63E7FB()
	{
		return ((::RPG::Client::MonoEffectPluginProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A1E7A71D3759A93_METHOD_2_CF35203A2C63E7FB_OFFSET))(this);
	}
};

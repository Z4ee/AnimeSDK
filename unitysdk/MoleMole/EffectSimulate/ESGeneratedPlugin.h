#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPlugin.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_0F5FCD9311F1F043_OFFSET UNITYSDK_OFFSET(0x1922F3C0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_17D6658AB3662CFC_OFFSET UNITYSDK_OFFSET(0x1922F820)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x1922F1F0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x1922F250)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_3_OFFSET UNITYSDK_OFFSET(0x1922F2D0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_4_OFFSET UNITYSDK_OFFSET(0x1922F780)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_5_OFFSET UNITYSDK_OFFSET(0x1922FB80)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1922F190)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_336DFDB5749719BB_OFFSET UNITYSDK_OFFSET(0x1922FC20)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_5A6C775540DF4D71_OFFSET UNITYSDK_OFFSET(0x1922F420)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_63320E40C83A8B11_OFFSET UNITYSDK_OFFSET(0x1922F4B0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_634A76FECFEA4D77_OFFSET UNITYSDK_OFFSET(0x1922F720)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_7C59A089E6388962_OFFSET UNITYSDK_OFFSET(0x1922F570)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_8FAFE9E50DAA8169_OFFSET UNITYSDK_OFFSET(0x1922F8D0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_93097B60EF70000E_OFFSET UNITYSDK_OFFSET(0x1922F940)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_934BA889F3752EEB_OFFSET UNITYSDK_OFFSET(0x1922FCE0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_B02969298FA9638E_OFFSET UNITYSDK_OFFSET(0x1922F600)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_B9BF76B9DB6922FB_OFFSET UNITYSDK_OFFSET(0x1922F6B0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1922F350)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESGeneratedPlugin_TypeDefinitionIndex = 88742;

	class ESGeneratedPlugin : public ::MoleMole::EffectSimulate::ESPlugin
	{
	public:
		::System::Boolean HasBeenSampled; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_4_2685B6183E614529_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_2685B6183E614529_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_2_OFFSET))(this, a1);
		}

		::System::Void Method_4_2685B6183E614529_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_3_OFFSET))(this, a1);
		}

		static ::System::Void Method_4_0F5FCD9311F1F043(::MoleMole::EffectSimulate::ColorKeyframeCurve* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::ColorKeyframeCurve*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_0F5FCD9311F1F043_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5A6C775540DF4D71(::MoleMole::EffectSimulate::Vector3KeyframeCurve* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::Vector3KeyframeCurve*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_5A6C775540DF4D71_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_4_63320E40C83A8B11(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_63320E40C83A8B11_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Method_4_7C59A089E6388962(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_7C59A089E6388962_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Method_4_B02969298FA9638E(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_B02969298FA9638E_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_4_B9BF76B9DB6922FB(::MoleMole::EffectSimulate::Vector2KeyframeCurve* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::Vector2KeyframeCurve*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_B9BF76B9DB6922FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_634A76FECFEA4D77(::MoleMole::EffectSimulate::BoolKeyframeCurve* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::BoolKeyframeCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_634A76FECFEA4D77_OFFSET))(a1, a2);
		}

		::System::Void Method_4_2685B6183E614529_4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_4_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_4_17D6658AB3662CFC(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_17D6658AB3662CFC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_4_8FAFE9E50DAA8169(::MoleMole::EffectSimulate::FloatKeyframeCurve* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::FloatKeyframeCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_8FAFE9E50DAA8169_OFFSET))(a1, a2);
		}

		::System::Boolean Method_4_93097B60EF70000E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_93097B60EF70000E_OFFSET))(this);
		}

		::System::Void Method_4_2685B6183E614529_5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_2685B6183E614529_5_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_4_336DFDB5749719BB(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_336DFDB5749719BB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_4_934BA889F3752EEB(::MoleMole::EffectSimulate::Vector4KeyframeCurve* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::Vector4KeyframeCurve*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_METHOD_4_934BA889F3752EEB_OFFSET))(a1, a2);
		}
	};
}

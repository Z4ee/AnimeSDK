#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIMatAnimBehavior_2.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIMatTexUVAnimation_Struct_2_652A2884C5236065_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::EffectSimulate { class UVCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_GET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1BDACDC0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1BDACB20)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1BDACC00)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1BDACCE0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1BDACF40)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_3BA5D8A9922E37AE_OFFSET UNITYSDK_OFFSET(0x1BDAC570)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_5713B8A224D0D751_OFFSET UNITYSDK_OFFSET(0x1BDACF90)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_7FD266B25805528E_OFFSET UNITYSDK_OFFSET(0x1BDAC3A0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_83A2D2FF4410F4BE_OFFSET UNITYSDK_OFFSET(0x1BDAC4D0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_A68A981870186A39_OFFSET UNITYSDK_OFFSET(0x1BDAC190)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_BB39E3A44FF3B23C_OFFSET UNITYSDK_OFFSET(0x1BDAC430)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x1BDAC360)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_E79EC5500172DAD1_OFFSET UNITYSDK_OFFSET(0x1BDACA80)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_F3DFE5666378398F_OFFSET UNITYSDK_OFFSET(0x1BDACA90)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_SET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1BDACE10)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1BDACB70)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1BDACC50)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1BDACD30)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDACEA0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIMatTexUVAnimation_TypeDefinitionIndex = 81788;

	class ESUIMatTexUVAnimation : public ::MoleMole::EffectSimulate::ESUIMatAnimBehavior_2<::MoleMole::EffectSimulate::UVCurve*, ::UnityEngine::Vector4>
	{
	public:
		::System::String* m_sSetPropName; // 0xA0
		::System::Single xBaseVal; // 0xA8
		::System::Single yBaseVal; // 0xAC
		::System::Single zBaseVal; // 0xB0
		::System::Single wBaseVal; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_5_A68A981870186A39()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_A68A981870186A39_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_5_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::Void Method_5_7FD266B25805528E(::UnityEngine::Material* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_7FD266B25805528E_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_5_BB39E3A44FF3B23C(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_BB39E3A44FF3B23C_OFFSET))(this, a1);
		}

		::System::Void Method_5_83A2D2FF4410F4BE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_83A2D2FF4410F4BE_OFFSET))(this, a1);
		}

		::System::String* Method_5_3BA5D8A9922E37AE(::MoleMole::EffectSimulate::UVCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::UVCurve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_3BA5D8A9922E37AE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_SET_ZKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_wKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_GET_WKEYFRAME_OFFSET))(this);
		}

		::System::Void set_wKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_SET_WKEYFRAME_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		static ::System::Void Method_5_F3DFE5666378398F(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::MoleMole::EffectSimulate::ESUIMatTexUVAnimation_Struct_2_652A2884C5236065_1& a3)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::EffectSimulate::ESUIMatTexUVAnimation_Struct_2_652A2884C5236065_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_F3DFE5666378398F_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_5_5713B8A224D0D751(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_5713B8A224D0D751_OFFSET))(this, a1);
		}

		static ::System::Single Method_5_E79EC5500172DAD1(::System::Single a1, ::MoleMole::EffectSimulate::ESUIMatTexUVAnimation_Struct_2_652A2884C5236065_1& a2)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::EffectSimulate::ESUIMatTexUVAnimation_Struct_2_652A2884C5236065_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATTEXUVANIMATION_METHOD_5_E79EC5500172DAD1_OFFSET))(a1, a2);
		}
	};
}

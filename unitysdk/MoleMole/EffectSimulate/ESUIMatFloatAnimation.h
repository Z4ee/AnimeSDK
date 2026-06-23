#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIMatAnimBehavior_2.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIMatFloatAnimation_Struct_2_9C1A4F1511EE364E_1.h"

namespace MoleMole::EffectSimulate { class FloatCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19112A80)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19112BF0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_4B15CC64E4FCF143_OFFSET UNITYSDK_OFFSET(0x19112940)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_72CB68C3957E4FFD_OFFSET UNITYSDK_OFFSET(0x191128A0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_96926F33B42654CB_OFFSET UNITYSDK_OFFSET(0x191128B0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x19112A40)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_DE3E1E5A94EC3E38_OFFSET UNITYSDK_OFFSET(0x191129D0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_FB4B868BEA22A20E_OFFSET UNITYSDK_OFFSET(0x191126A0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_FF5188F77C143723_OFFSET UNITYSDK_OFFSET(0x19112510)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19112AC0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19112B50)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIMatFloatAnimation_TypeDefinitionIndex = 78127;

	class ESUIMatFloatAnimation : public ::MoleMole::EffectSimulate::ESUIMatAnimBehavior_2<::MoleMole::EffectSimulate::FloatCurve*, ::System::Single>
	{
	public:
		::System::Single xBaseVal; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION__CTOR_OFFSET))(this);
		}

		::System::Single Method_5_FF5188F77C143723()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_FF5188F77C143723_OFFSET))(this);
		}

		::System::String* Method_5_FB4B868BEA22A20E(::MoleMole::EffectSimulate::FloatCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::FloatCurve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_FB4B868BEA22A20E_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_4B15CC64E4FCF143(::UnityEngine::Material* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_4B15CC64E4FCF143_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_DE3E1E5A94EC3E38(::UnityEngine::Material* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_DE3E1E5A94EC3E38_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_5_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_96926F33B42654CB(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::MoleMole::EffectSimulate::ESUIMatFloatAnimation_Struct_2_9C1A4F1511EE364E_1& a3)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::EffectSimulate::ESUIMatFloatAnimation_Struct_2_9C1A4F1511EE364E_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_96926F33B42654CB_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		static ::System::Single Method_5_72CB68C3957E4FFD(::System::Single a1, ::MoleMole::EffectSimulate::ESUIMatFloatAnimation_Struct_2_9C1A4F1511EE364E_1& a2)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::EffectSimulate::ESUIMatFloatAnimation_Struct_2_9C1A4F1511EE364E_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_METHOD_5_72CB68C3957E4FFD_OFFSET))(a1, a2);
		}
	};
}

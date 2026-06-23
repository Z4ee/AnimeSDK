#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIMatAnimBehavior_2.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIMatVectorAnimation_Struct_2_DDE3B9B869020265.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::EffectSimulate { class Vector4Curve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_GET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x170EFF60)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x170EFCC0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x170EFDA0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x170EFE80)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_3552A6615B9A8C78_OFFSET UNITYSDK_OFFSET(0x170EFAC0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x170F00E0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_7FD266B25805528E_OFFSET UNITYSDK_OFFSET(0x170EFB50)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_8181F1A8A772EA0A_OFFSET UNITYSDK_OFFSET(0x170EFAB0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_A1025C3B0B9B691C_OFFSET UNITYSDK_OFFSET(0x170EF5A0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_A68A981870186A39_OFFSET UNITYSDK_OFFSET(0x170EF3D0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_BB39E3A44FF3B23C_OFFSET UNITYSDK_OFFSET(0x170EFBE0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x170EFC80)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_SET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x170EFFB0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x170EFD10)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x170EFDF0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x170EFED0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x170F0040)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIMatVectorAnimation_TypeDefinitionIndex = 46916;

	class ESUIMatVectorAnimation : public ::MoleMole::EffectSimulate::ESUIMatAnimBehavior_2<::MoleMole::EffectSimulate::Vector4Curve*, ::UnityEngine::Vector4>
	{
	public:
		::System::Single xBaseVal; // 0xA0
		::System::Single yBaseVal; // 0xA4
		::System::Single zBaseVal; // 0xA8
		::System::Single wBaseVal; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_5_A68A981870186A39()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_A68A981870186A39_OFFSET))(this);
		}

		::System::String* Method_5_A1025C3B0B9B691C(::MoleMole::EffectSimulate::Vector4Curve* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::Vector4Curve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_A1025C3B0B9B691C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_7FD266B25805528E(::UnityEngine::Material* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_7FD266B25805528E_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_5_BB39E3A44FF3B23C(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_BB39E3A44FF3B23C_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_5_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_SET_ZKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_wKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_GET_WKEYFRAME_OFFSET))(this);
		}

		::System::Void set_wKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_SET_WKEYFRAME_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		static ::System::Void Method_5_3552A6615B9A8C78(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::MoleMole::EffectSimulate::ESUIMatVectorAnimation_Struct_2_DDE3B9B869020265& a3)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::EffectSimulate::ESUIMatVectorAnimation_Struct_2_DDE3B9B869020265&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_3552A6615B9A8C78_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_5_8181F1A8A772EA0A(::System::Single a1, ::MoleMole::EffectSimulate::ESUIMatVectorAnimation_Struct_2_DDE3B9B869020265& a2)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::EffectSimulate::ESUIMatVectorAnimation_Struct_2_DDE3B9B869020265&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATVECTORANIMATION_METHOD_5_8181F1A8A772EA0A_OFFSET))(a1, a2);
		}
	};
}

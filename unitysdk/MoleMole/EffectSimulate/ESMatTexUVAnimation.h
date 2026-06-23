#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESMatAnimBehavior_2.h"
#include "unitysdk/MoleMole/EffectSimulate/ESMatTexUVAnimation_Struct_2_652A2884C5236065_1.h"
#include "unitysdk/UnityEngine/NAPBatch/BatchItemValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::EffectSimulate { class UVCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A016350)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A0160B0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A016190)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A016270)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_141D753555787675_OFFSET UNITYSDK_OFFSET(0x1A016020)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_213C38CA5FA1A7E9_OFFSET UNITYSDK_OFFSET(0x1A0159A0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A0164F0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_3BA5D8A9922E37AE_OFFSET UNITYSDK_OFFSET(0x1A015B00)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_54E8DBCCA773657A_OFFSET UNITYSDK_OFFSET(0x1A015670)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_5B1C7E235BC8BD41_OFFSET UNITYSDK_OFFSET(0x1A015920)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_85BE9D03D509479D_OFFSET UNITYSDK_OFFSET(0x1A0156F0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_867E858DEBE0B46F_OFFSET UNITYSDK_OFFSET(0x1A016010)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1A016540)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x1A0158E0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1A015A40)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A0163A0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A016100)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A0161E0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A0162C0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A016430)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMatTexUVAnimation_TypeDefinitionIndex = 79558;

	class ESMatTexUVAnimation : public ::MoleMole::EffectSimulate::ESMatAnimBehavior_2<::MoleMole::EffectSimulate::UVCurve*, ::UnityEngine::Vector4>
	{
	public:
		::System::String* m_sSetPropName; // 0xB8
		::System::Single xBaseVal; // 0xC0
		::System::Single yBaseVal; // 0xC4
		::System::Single zBaseVal; // 0xC8
		::System::Single wBaseVal; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_5_54E8DBCCA773657A(::UnityEngine::Vector4 a1, ::UnityEngine::NAPBatch::BatchItemValueType& a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::NAPBatch::BatchItemValueType&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_54E8DBCCA773657A_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_5_85BE9D03D509479D()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_85BE9D03D509479D_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_5_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::Void Method_5_5B1C7E235BC8BD41(::UnityEngine::MaterialPropertyBlock* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_5B1C7E235BC8BD41_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_5_213C38CA5FA1A7E9(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_213C38CA5FA1A7E9_OFFSET))(this, a1);
		}

		::System::Void Method_5_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::String* Method_5_3BA5D8A9922E37AE(::MoleMole::EffectSimulate::UVCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::UVCurve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_3BA5D8A9922E37AE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_ZKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_wKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_WKEYFRAME_OFFSET))(this);
		}

		::System::Void set_wKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_WKEYFRAME_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_141D753555787675(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::MoleMole::EffectSimulate::ESMatTexUVAnimation_Struct_2_652A2884C5236065_1& a3)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::EffectSimulate::ESMatTexUVAnimation_Struct_2_652A2884C5236065_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_141D753555787675_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		static ::System::Single Method_5_867E858DEBE0B46F(::System::Single a1, ::MoleMole::EffectSimulate::ESMatTexUVAnimation_Struct_2_652A2884C5236065_1& a2)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::EffectSimulate::ESMatTexUVAnimation_Struct_2_652A2884C5236065_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_METHOD_5_867E858DEBE0B46F_OFFSET))(a1, a2);
		}
	};
}

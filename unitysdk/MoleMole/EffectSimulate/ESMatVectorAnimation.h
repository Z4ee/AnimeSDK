#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESMatAnimBehavior_2.h"
#include "unitysdk/MoleMole/EffectSimulate/ESMatVectorAnimation_Struct_2_DDE3B9B869020265_1.h"
#include "unitysdk/UnityEngine/NAPBatch/BatchItemValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::EffectSimulate { class Vector4Curve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19BC7A60)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19BC77C0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19BC78A0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19BC7980)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_1367934296657450_OFFSET UNITYSDK_OFFSET(0x19BC75C0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_213C38CA5FA1A7E9_OFFSET UNITYSDK_OFFSET(0x19BC76E0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_3306C8E1BEF2340E_OFFSET UNITYSDK_OFFSET(0x19BC75D0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19BC7BE0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_54E8DBCCA773657A_OFFSET UNITYSDK_OFFSET(0x19BC6E40)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_5B1C7E235BC8BD41_OFFSET UNITYSDK_OFFSET(0x19BC7660)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_85BE9D03D509479D_OFFSET UNITYSDK_OFFSET(0x19BC6EC0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_A1025C3B0B9B691C_OFFSET UNITYSDK_OFFSET(0x19BC70B0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x19BC7780)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19BC7AB0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19BC7810)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19BC78F0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19BC79D0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC7B40)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMatVectorAnimation_TypeDefinitionIndex = 88738;

	class ESMatVectorAnimation : public ::MoleMole::EffectSimulate::ESMatAnimBehavior_2<::MoleMole::EffectSimulate::Vector4Curve*, ::UnityEngine::Vector4>
	{
	public:
		::System::Single xBaseVal; // 0xB8
		::System::Single yBaseVal; // 0xBC
		::System::Single zBaseVal; // 0xC0
		::System::Single wBaseVal; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_5_54E8DBCCA773657A(::UnityEngine::Vector4 a1, ::UnityEngine::NAPBatch::BatchItemValueType& a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::NAPBatch::BatchItemValueType&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_54E8DBCCA773657A_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_5_85BE9D03D509479D()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_85BE9D03D509479D_OFFSET))(this);
		}

		::System::String* Method_5_A1025C3B0B9B691C(::MoleMole::EffectSimulate::Vector4Curve* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::Vector4Curve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_A1025C3B0B9B691C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_5B1C7E235BC8BD41(::UnityEngine::MaterialPropertyBlock* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_5B1C7E235BC8BD41_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_5_213C38CA5FA1A7E9(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_213C38CA5FA1A7E9_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_5_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_ZKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_wKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_WKEYFRAME_OFFSET))(this);
		}

		::System::Void set_wKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_WKEYFRAME_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		static ::System::Single Method_5_1367934296657450(::System::Single a1, ::MoleMole::EffectSimulate::ESMatVectorAnimation_Struct_2_DDE3B9B869020265_1& a2)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::EffectSimulate::ESMatVectorAnimation_Struct_2_DDE3B9B869020265_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_1367934296657450_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3306C8E1BEF2340E(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::MoleMole::EffectSimulate::ESMatVectorAnimation_Struct_2_DDE3B9B869020265_1& a3)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::EffectSimulate::ESMatVectorAnimation_Struct_2_DDE3B9B869020265_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_METHOD_5_3306C8E1BEF2340E_OFFSET))(a1, a2, a3);
		}
	};
}

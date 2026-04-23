#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateParamTransition_Duration.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_METHOD_2_0724EFB1A18E7075_OFFSET UNITYSDK_OFFSET(0xB1CCB60)
#define RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_METHOD_2_BF302FCDF545D0AF_OFFSET UNITYSDK_OFFSET(0xB1CCE20)
#define RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_METHOD_2_E968CB1D462997C6_OFFSET UNITYSDK_OFFSET(0xB1CCA20)
#define RPG_CLIENT_STATEPARAMTRANSITION_FLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0xB1CCF20)

namespace RPG::Client
{
	inline static constexpr unsigned int StateParamTransition_Float_TypeDefinitionIndex = 63477;

	class StateParamTransition_Float : public ::RPG::Client::StateParamTransition_Duration
	{
	public:
		::System::Single value; // 0x20
		::System::Single _time; // 0x24
		::System::Single _startValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_FLOAT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_E968CB1D462997C6(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_METHOD_2_E968CB1D462997C6_OFFSET))(this, a1);
		}

		::System::Void Method_2_0724EFB1A18E7075(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_METHOD_2_0724EFB1A18E7075_OFFSET))(this, a1);
		}

		::System::Void Method_2_BF302FCDF545D0AF(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_METHOD_2_BF302FCDF545D0AF_OFFSET))(this, a1);
		}
	};
}

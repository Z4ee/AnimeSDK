#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace System { class String; }

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FINDFLOAT_OFFSET UNITYSDK_OFFSET(0xC160670)
#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE__CTOR_OFFSET UNITYSDK_OFFSET(0xC160770)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoValueEvaluateConfigure_TypeDefinitionIndex = 64203;

	class MonoValueEvaluateConfigure : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*>* FloatEvaluators; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE__CTOR_OFFSET))(this);
		}

		::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* FindFloat(::System::String* a1)
		{
			return ((::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FINDFLOAT_OFFSET))(this, a1);
		}
	};
}

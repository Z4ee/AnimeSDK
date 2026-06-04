#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_14B9DE76B950689C_OFFSET UNITYSDK_OFFSET(0x19D083E0)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_2FF3F5180B061BCC_OFFSET UNITYSDK_OFFSET(0x19CF4660)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_5E5B82F243AF3ADC_OFFSET UNITYSDK_OFFSET(0x19D02E90)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_EDD1718D71B64B8E_OFFSET UNITYSDK_OFFSET(0x19D08320)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF4610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvAITarget_TypeDefinitionIndex = 22600;

	class TargetFetchAdvAITarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EDD1718D71B64B8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAITarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAITarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_EDD1718D71B64B8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2FF3F5180B061BCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_2FF3F5180B061BCC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E5B82F243AF3ADC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_5E5B82F243AF3ADC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14B9DE76B950689C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_14B9DE76B950689C_OFFSET))(a1, a2);
		}
	};
}

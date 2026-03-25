#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_METHOD_3_1578C07DD4CC866E_OFFSET UNITYSDK_OFFSET(0x178A0340)
#define RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_METHOD_3_C19CA4B012FF8815_OFFSET UNITYSDK_OFFSET(0x17889CA0)
#define RPG_GAMECORE_TIMEREWINDSETSPECULARMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x17889C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindSetSpecularMat_TypeDefinitionIndex = 18958;

	class TimeRewindSetSpecularMat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* OverrideFadeIn; // 0x20
		::RPG::GameCore::DynamicFloat* OverrideFadeOut; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETSPECULARMAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1578C07DD4CC866E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindSetSpecularMat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindSetSpecularMat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_METHOD_3_1578C07DD4CC866E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C19CA4B012FF8815(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindSetSpecularMat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindSetSpecularMat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_METHOD_3_C19CA4B012FF8815_OFFSET))(a1, a2);
		}
	};
}

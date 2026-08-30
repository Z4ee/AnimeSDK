#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_METHOD_3_303DF4E3E7CCF69C_OFFSET UNITYSDK_OFFSET(0x1D7BBF50)
#define RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_METHOD_3_DC462CC554AFEA7B_OFFSET UNITYSDK_OFFSET(0x1D7BBF10)
#define RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BBF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableAdvEntityDitherWithPlayer_TypeDefinitionIndex = 20331;

	class EnableAdvEntityDitherWithPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DC462CC554AFEA7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_METHOD_3_DC462CC554AFEA7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_303DF4E3E7CCF69C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_METHOD_3_303DF4E3E7CCF69C_OFFSET))(a1, a2);
		}
	};
}

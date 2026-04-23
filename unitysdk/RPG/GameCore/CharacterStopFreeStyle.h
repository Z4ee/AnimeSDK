#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERSTOPFREESTYLE_METHOD_3_3087A48B3C2CD3F5_OFFSET UNITYSDK_OFFSET(0x187D8570)
#define RPG_GAMECORE_CHARACTERSTOPFREESTYLE_METHOD_3_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x187D87B0)
#define RPG_GAMECORE_CHARACTERSTOPFREESTYLE_METHOD_3_D41DDEED6565FA0B_OFFSET UNITYSDK_OFFSET(0x187D84E0)
#define RPG_GAMECORE_CHARACTERSTOPFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x187D8540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterStopFreeStyle_TypeDefinitionIndex = 20759;

	class CharacterStopFreeStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single NormalizedTransitionDuration; // 0x28
		::System::Boolean WaitTransitionFinish; // 0x2C
		::System::String* LayerName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTOPFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D41DDEED6565FA0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterStopFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterStopFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTOPFREESTYLE_METHOD_3_D41DDEED6565FA0B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3087A48B3C2CD3F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterStopFreeStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterStopFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTOPFREESTYLE_METHOD_3_3087A48B3C2CD3F5_OFFSET))(a1, a2);
		}

		::System::Boolean Method_3_CE18697B63E52504()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTOPFREESTYLE_METHOD_3_CE18697B63E52504_OFFSET))(this);
		}
	};
}

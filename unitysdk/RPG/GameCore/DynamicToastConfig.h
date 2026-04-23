#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DYNAMICTOASTCONFIG_METHOD_2_125697B156F1C21A_OFFSET UNITYSDK_OFFSET(0x18892B20)
#define RPG_GAMECORE_DYNAMICTOASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18892C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicToastConfig_TypeDefinitionIndex = 22833;

	class DynamicToastConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Content; // 0x10
		::RPG::GameCore::TargetEvaluator* DisplayTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICTOASTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_125697B156F1C21A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicToastConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicToastConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICTOASTCONFIG_METHOD_2_125697B156F1C21A_OFFSET))(a1, a2);
		}
	};
}

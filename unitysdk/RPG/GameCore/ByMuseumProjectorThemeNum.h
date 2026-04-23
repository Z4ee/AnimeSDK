#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_25B874263C7A1DAC_OFFSET UNITYSDK_OFFSET(0x1875B780)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_5CFB784A7DC92288_OFFSET UNITYSDK_OFFSET(0x1875B6B0)
#define RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1875B730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByMuseumProjectorThemeNum_TypeDefinitionIndex = 19516;

	class ByMuseumProjectorThemeNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 ThemeNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5CFB784A7DC92288(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMuseumProjectorThemeNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_5CFB784A7DC92288_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25B874263C7A1DAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMUSEUMPROJECTORTHEMENUM_METHOD_4_25B874263C7A1DAC_OFFSET))(a1, a2);
		}
	};
}

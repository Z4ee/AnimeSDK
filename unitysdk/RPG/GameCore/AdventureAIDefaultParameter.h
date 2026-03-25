#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VisionBaseConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREAIDEFAULTPARAMETER_METHOD_2_715822110F6185CE_OFFSET UNITYSDK_OFFSET(0x16F49B90)
#define RPG_GAMECORE_ADVENTUREAIDEFAULTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F49E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAIDefaultParameter_TypeDefinitionIndex = 14177;

	class AdventureAIDefaultParameter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AlertLimitMin; // 0x10
		::System::Single AlertLimitMax; // 0x14
		::System::Single AlertGuardLimitMin; // 0x18
		::System::Single AlertGuardLimitMax; // 0x1C
		::System::Single AlertDeclineSpeed; // 0x20
		::System::Single AlertDeclineProtectTime; // 0x24
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VisionBaseConfig*>* VisionConfigs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAIDEFAULTPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_715822110F6185CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAIDefaultParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAIDefaultParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAIDEFAULTPARAMETER_METHOD_2_715822110F6185CE_OFFSET))(a1, a2);
		}
	};
}

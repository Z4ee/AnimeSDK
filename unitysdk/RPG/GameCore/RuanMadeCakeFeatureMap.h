#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RUANMADECAKEFEATUREMAP_METHOD_2_979ED58C3E9AD8AB_OFFSET UNITYSDK_OFFSET(0x19BF99B0)
#define RPG_GAMECORE_RUANMADECAKEFEATUREMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF9A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeatureMap_TypeDefinitionIndex = 16608;

	class RuanMadeCakeFeatureMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RuanMadeCakeFeatureConfig*>* FeatureMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATUREMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_979ED58C3E9AD8AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeatureMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeatureMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATUREMAP_METHOD_2_979ED58C3E9AD8AB_OFFSET))(a1, a2);
		}
	};
}

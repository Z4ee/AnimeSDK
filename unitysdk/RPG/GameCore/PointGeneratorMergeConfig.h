#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointGeneratorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_POINTGENERATORMERGECONFIG_METHOD_3_47ECD3F993326AFC_OFFSET UNITYSDK_OFFSET(0x18C375B0)
#define RPG_GAMECORE_POINTGENERATORMERGECONFIG_METHOD_3_9D73104F48B8F1A7_OFFSET UNITYSDK_OFFSET(0x18C37850)
#define RPG_GAMECORE_POINTGENERATORMERGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C375A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointGeneratorMergeConfig_TypeDefinitionIndex = 14793;

	class PointGeneratorMergeConfig : public ::RPG::GameCore::PointGeneratorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PointGeneratorConfig*>* Generators; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORMERGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D73104F48B8F1A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointGeneratorMergeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointGeneratorMergeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORMERGECONFIG_METHOD_3_9D73104F48B8F1A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47ECD3F993326AFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointGeneratorMergeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointGeneratorMergeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORMERGECONFIG_METHOD_3_47ECD3F993326AFC_OFFSET))(a1, a2);
		}
	};
}

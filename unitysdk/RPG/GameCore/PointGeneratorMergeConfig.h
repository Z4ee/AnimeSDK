#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointGeneratorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_POINTGENERATORMERGECONFIG_METHOD_3_45A51BE34CE0AFF9_OFFSET UNITYSDK_OFFSET(0x1D7B45F0)
#define RPG_GAMECORE_POINTGENERATORMERGECONFIG_METHOD_3_90EDCBD9A517F1F2_OFFSET UNITYSDK_OFFSET(0x1D7B4840)
#define RPG_GAMECORE_POINTGENERATORMERGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B45E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointGeneratorMergeConfig_TypeDefinitionIndex = 15455;

	class PointGeneratorMergeConfig : public ::RPG::GameCore::PointGeneratorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PointGeneratorConfig*>* Generators; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORMERGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90EDCBD9A517F1F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointGeneratorMergeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointGeneratorMergeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORMERGECONFIG_METHOD_3_90EDCBD9A517F1F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45A51BE34CE0AFF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointGeneratorMergeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointGeneratorMergeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORMERGECONFIG_METHOD_3_45A51BE34CE0AFF9_OFFSET))(a1, a2);
		}
	};
}

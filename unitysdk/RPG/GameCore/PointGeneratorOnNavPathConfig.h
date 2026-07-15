#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointGeneratorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_METHOD_3_CD9A4F61F5B63703_OFFSET UNITYSDK_OFFSET(0x1BA13B90)
#define RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_METHOD_3_ECCBF057757545FD_OFFSET UNITYSDK_OFFSET(0x1BA139E0)
#define RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA139C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointGeneratorOnNavPathConfig_TypeDefinitionIndex = 15018;

	class PointGeneratorOnNavPathConfig : public ::RPG::GameCore::PointGeneratorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Source; // 0x10
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Single DistanceStart; // 0x20
		::System::Single DistanceEnd; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD9A4F61F5B63703(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointGeneratorOnNavPathConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointGeneratorOnNavPathConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_METHOD_3_CD9A4F61F5B63703_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ECCBF057757545FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointGeneratorOnNavPathConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointGeneratorOnNavPathConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_METHOD_3_ECCBF057757545FD_OFFSET))(a1, a2);
		}
	};
}

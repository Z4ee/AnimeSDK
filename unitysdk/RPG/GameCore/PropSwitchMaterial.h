#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSWITCHMATERIAL_METHOD_3_30CCBD148FDAD1F4_OFFSET UNITYSDK_OFFSET(0x17570110)
#define RPG_GAMECORE_PROPSWITCHMATERIAL_METHOD_3_BD03B23894186EDF_OFFSET UNITYSDK_OFFSET(0x1756FF20)
#define RPG_GAMECORE_PROPSWITCHMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x17570030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSwitchMaterial_TypeDefinitionIndex = 20349;

	class PropSwitchMaterial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* MatID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSWITCHMATERIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BD03B23894186EDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSwitchMaterial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSwitchMaterial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSWITCHMATERIAL_METHOD_3_BD03B23894186EDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30CCBD148FDAD1F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSwitchMaterial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSwitchMaterial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSWITCHMATERIAL_METHOD_3_30CCBD148FDAD1F4_OFFSET))(a1, a2);
		}
	};
}

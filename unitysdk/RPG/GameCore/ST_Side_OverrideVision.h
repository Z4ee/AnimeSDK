#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VisionBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_METHOD_4_071E93ED4315636F_OFFSET UNITYSDK_OFFSET(0x1B78B2B0)
#define RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_METHOD_4_2E28EF1486BADE38_OFFSET UNITYSDK_OFFSET(0x1B78B270)
#define RPG_GAMECORE_ST_SIDE_OVERRIDEVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B78B2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_OverrideVision_TypeDefinitionIndex = 19330;

	class ST_Side_OverrideVision : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* VisionSetName; // 0x18
		::Il2CppArray<::RPG::GameCore::VisionBaseConfig*>* Visions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDEVISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2E28EF1486BADE38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_OverrideVision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_OverrideVision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_METHOD_4_2E28EF1486BADE38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_071E93ED4315636F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_OverrideVision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_OverrideVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_METHOD_4_071E93ED4315636F_OFFSET))(a1, a2);
		}
	};
}

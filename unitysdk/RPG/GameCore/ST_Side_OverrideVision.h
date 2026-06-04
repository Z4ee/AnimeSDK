#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VisionBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_METHOD_4_071E93ED4315636F_OFFSET UNITYSDK_OFFSET(0x19C0C0B0)
#define RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_METHOD_4_44F18418FE0E4C82_OFFSET UNITYSDK_OFFSET(0x19C1AC90)
#define RPG_GAMECORE_ST_SIDE_OVERRIDEVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C0C060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_OverrideVision_TypeDefinitionIndex = 18979;

	class ST_Side_OverrideVision : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* VisionSetName; // 0x18
		::Il2CppArray<::RPG::GameCore::VisionBaseConfig*>* Visions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDEVISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_44F18418FE0E4C82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_OverrideVision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_OverrideVision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_METHOD_4_44F18418FE0E4C82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_071E93ED4315636F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_OverrideVision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_OverrideVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_METHOD_4_071E93ED4315636F_OFFSET))(a1, a2);
		}
	};
}

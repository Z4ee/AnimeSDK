#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_METHOD_3_2E4A7DB54D4A08EA_OFFSET UNITYSDK_OFFSET(0x1738FF70)
#define RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_METHOD_3_963BE80151BEF9A7_OFFSET UNITYSDK_OFFSET(0x17390000)
#define RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1738FFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleItemComponentConfig_TypeDefinitionIndex = 17350;

	class MarbleItemComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::MarbleItemType ItemType; // 0x10
		::RPG::GameCore::MarbleShapeType Shape; // 0x14
		::System::Single Radius; // 0x18
		::RPG::MVector2 Size; // 0x1C
		::System::UInt32 SkillId; // 0x24
		::System::Boolean RandomPos; // 0x28
		::System::Boolean AvoidCollision; // 0x29
		::Il2CppArray<::System::UInt32>* AppearRound; // 0x30
		::RPG::GameCore::MarbleItemFeature Feature; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E4A7DB54D4A08EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleItemComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleItemComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_METHOD_3_2E4A7DB54D4A08EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_963BE80151BEF9A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleItemComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleItemComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_METHOD_3_963BE80151BEF9A7_OFFSET))(a1, a2);
		}
	};
}

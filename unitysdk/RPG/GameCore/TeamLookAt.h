#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FaceDirectionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMLOOKAT_METHOD_3_02A798B34DDE9818_OFFSET UNITYSDK_OFFSET(0x1C1469D0)
#define RPG_GAMECORE_TEAMLOOKAT_METHOD_3_1C8405416D93B38D_OFFSET UNITYSDK_OFFSET(0x1C146A10)
#define RPG_GAMECORE_TEAMLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C146A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLookAt_TypeDefinitionIndex = 21640;

	class TeamLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x18
		::RPG::GameCore::FaceDirectionType TargetType; // 0x1C
		::System::Single AngleOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02A798B34DDE9818(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLOOKAT_METHOD_3_02A798B34DDE9818_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1C8405416D93B38D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLOOKAT_METHOD_3_1C8405416D93B38D_OFFSET))(a1, a2);
		}
	};
}

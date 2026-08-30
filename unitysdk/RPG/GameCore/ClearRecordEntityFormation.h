#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARRECORDENTITYFORMATION_METHOD_3_07959B6C750FE6DF_OFFSET UNITYSDK_OFFSET(0x1E348640)
#define RPG_GAMECORE_CLEARRECORDENTITYFORMATION_METHOD_3_5AAA2A9C4BB85C04_OFFSET UNITYSDK_OFFSET(0x1E348680)
#define RPG_GAMECORE_CLEARRECORDENTITYFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E348670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearRecordEntityFormation_TypeDefinitionIndex = 22513;

	class ClearRecordEntityFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARRECORDENTITYFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07959B6C750FE6DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearRecordEntityFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearRecordEntityFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARRECORDENTITYFORMATION_METHOD_3_07959B6C750FE6DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5AAA2A9C4BB85C04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearRecordEntityFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearRecordEntityFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARRECORDENTITYFORMATION_METHOD_3_5AAA2A9C4BB85C04_OFFSET))(a1, a2);
		}
	};
}

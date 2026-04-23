#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_AlertLevel.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_6FED1BC65BD3B40D_OFFSET UNITYSDK_OFFSET(0x18DEB540)
#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_EFF4598C53629F23_OFFSET UNITYSDK_OFFSET(0x18DEB610)
#define RPG_GAMECORE_ST_BYALERTLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEB5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByAlertLevel_TypeDefinitionIndex = 18993;

	class ST_ByAlertLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_AlertLevel AlertLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6FED1BC65BD3B40D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAlertLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAlertLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_6FED1BC65BD3B40D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EFF4598C53629F23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_EFF4598C53629F23_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJsonList; }

#define RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_METHOD_3_27ADC2AFAD5AEF8D_OFFSET UNITYSDK_OFFSET(0x19C295D0)
#define RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_METHOD_3_532EBAF907C00B2C_OFFSET UNITYSDK_OFFSET(0x19C29550)
#define RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C295A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAudienceGroupVisible_TypeDefinitionIndex = 20660;

	class SetAudienceGroupVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicJsonList* GroupMemberList; // 0x18
		::System::Boolean Visible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_532EBAF907C00B2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAudienceGroupVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAudienceGroupVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_METHOD_3_532EBAF907C00B2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27ADC2AFAD5AEF8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAudienceGroupVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAudienceGroupVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_METHOD_3_27ADC2AFAD5AEF8D_OFFSET))(a1, a2);
		}
	};
}

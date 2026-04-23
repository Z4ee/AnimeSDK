#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_METHOD_3_4F827CBB7611E609_OFFSET UNITYSDK_OFFSET(0x18663150)
#define RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_METHOD_3_9D34A904EE945122_OFFSET UNITYSDK_OFFSET(0x186630D0)
#define RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x18663120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetHoyoGroupNpcAnimSpeedRatio_TypeDefinitionIndex = 20015;

	class AdvSetHoyoGroupNpcAnimSpeedRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* AnimSpeedRatio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D34A904EE945122(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_METHOD_3_9D34A904EE945122_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4F827CBB7611E609(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_METHOD_3_4F827CBB7611E609_OFFSET))(a1, a2);
		}
	};
}

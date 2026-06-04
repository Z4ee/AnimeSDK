#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrackNpcPerceiveValueConfig; }

#define RPG_GAMECORE_TRACKNPCPERCEIVECONFIG_METHOD_2_A620285B11B74D1D_OFFSET UNITYSDK_OFFSET(0x19DED5E0)
#define RPG_GAMECORE_TRACKNPCPERCEIVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DED6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcPerceiveConfig_TypeDefinitionIndex = 20954;

	class TrackNpcPerceiveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TrackNpcPerceiveValueConfig* Visible; // 0x10
		::RPG::GameCore::TrackNpcPerceiveValueConfig* Invisible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCPERCEIVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A620285B11B74D1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNpcPerceiveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNpcPerceiveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCPERCEIVECONFIG_METHOD_2_A620285B11B74D1D_OFFSET))(a1, a2);
		}
	};
}

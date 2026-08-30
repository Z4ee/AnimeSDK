#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrackNpcAlertValueConfig; }

#define RPG_GAMECORE_TRACKNPCALERTCONFIG_METHOD_2_4128180D10E9FBA4_OFFSET UNITYSDK_OFFSET(0x1D5D69A0)
#define RPG_GAMECORE_TRACKNPCALERTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D6A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcAlertConfig_TypeDefinitionIndex = 21932;

	class TrackNpcAlertConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TrackNpcAlertValueConfig* Visible; // 0x10
		::RPG::GameCore::TrackNpcAlertValueConfig* Invisible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCALERTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4128180D10E9FBA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNpcAlertConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNpcAlertConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCALERTCONFIG_METHOD_2_4128180D10E9FBA4_OFFSET))(a1, a2);
		}
	};
}

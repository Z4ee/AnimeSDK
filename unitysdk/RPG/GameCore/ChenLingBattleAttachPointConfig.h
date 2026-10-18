#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG_METHOD_2_7A15A4BEFCA3DBD5_OFFSET UNITYSDK_OFFSET(0x1D5821D0)
#define RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D582450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAttachPointConfig_TypeDefinitionIndex = 15713;

	class ChenLingBattleAttachPointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPointName; // 0x10
		::RPG::MVector3 Offset; // 0x18
		::RPG::MVector3 Rotation; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7A15A4BEFCA3DBD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAttachPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAttachPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG_METHOD_2_7A15A4BEFCA3DBD5_OFFSET))(a1, a2);
		}
	};
}

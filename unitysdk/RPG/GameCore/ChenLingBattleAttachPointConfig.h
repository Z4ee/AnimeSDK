#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG_METHOD_2_905FA83FF24AF8E4_OFFSET UNITYSDK_OFFSET(0x1961EA20)
#define RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1961EBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAttachPointConfig_TypeDefinitionIndex = 14939;

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

		static ::System::Void Method_2_905FA83FF24AF8E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAttachPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAttachPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG_METHOD_2_905FA83FF24AF8E4_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG_METHOD_6_35CF6D5A7ADABD73_OFFSET UNITYSDK_OFFSET(0x1764CC60)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG_METHOD_6_998F9D104D51F17D_OFFSET UNITYSDK_OFFSET(0x1764C9B0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1764CB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicCurrentRoomMarkTypeConfig_TypeDefinitionIndex = 18181;

	class RogueParamRogueMagicCurrentRoomMarkTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_998F9D104D51F17D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomMarkTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomMarkTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG_METHOD_6_998F9D104D51F17D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_35CF6D5A7ADABD73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomMarkTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomMarkTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG_METHOD_6_35CF6D5A7ADABD73_OFFSET))(a1, a2);
		}
	};
}

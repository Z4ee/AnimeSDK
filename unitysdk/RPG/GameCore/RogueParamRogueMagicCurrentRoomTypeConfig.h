#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_METHOD_6_8326F357FC4875B2_OFFSET UNITYSDK_OFFSET(0x19BAFFF0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_METHOD_6_DD03D995FC58231C_OFFSET UNITYSDK_OFFSET(0x19BAFD40)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BAFEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicCurrentRoomTypeConfig_TypeDefinitionIndex = 18791;

	class RogueParamRogueMagicCurrentRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DD03D995FC58231C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_METHOD_6_DD03D995FC58231C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8326F357FC4875B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_METHOD_6_8326F357FC4875B2_OFFSET))(a1, a2);
		}
	};
}

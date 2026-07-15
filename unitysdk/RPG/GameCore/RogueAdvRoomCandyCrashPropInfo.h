#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPINFO_METHOD_2_3F0F567355260DA1_OFFSET UNITYSDK_OFFSET(0x1C49FF40)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A0090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashPropInfo_TypeDefinitionIndex = 17161;

	class RogueAdvRoomCandyCrashPropInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::Int32 InitState; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3F0F567355260DA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashPropInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashPropInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPINFO_METHOD_2_3F0F567355260DA1_OFFSET))(a1, a2);
		}
	};
}

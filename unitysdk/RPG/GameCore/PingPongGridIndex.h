#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGGRIDINDEX_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x174B1910)
#define RPG_GAMECORE_PINGPONGGRIDINDEX_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x174B1900)
#define RPG_GAMECORE_PINGPONGGRIDINDEX_METHOD_2_DBC7377967355536_OFFSET UNITYSDK_OFFSET(0x174B1780)
#define RPG_GAMECORE_PINGPONGGRIDINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x174B18F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongGridIndex_TypeDefinitionIndex = 15570;

	class PingPongGridIndex : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 z; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGRIDINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DBC7377967355536(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongGridIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongGridIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGRIDINDEX_METHOD_2_DBC7377967355536_OFFSET))(a1, a2);
		}

		::System::Single Method_2_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGRIDINDEX_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
		}

		::System::Single Method_2_5323F2DF46A044DA_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGRIDINDEX_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
		}
	};
}

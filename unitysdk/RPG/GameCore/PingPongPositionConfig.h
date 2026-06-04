#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PingPongPositionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongFloatPos; }
namespace RPG::GameCore { class PingPongGridIndex; }

#define RPG_GAMECORE_PINGPONGPOSITIONCONFIG_METHOD_2_7933B39090E9698F_OFFSET UNITYSDK_OFFSET(0x19A0F350)
#define RPG_GAMECORE_PINGPONGPOSITIONCONFIG_METHOD_2_DB2B44FABAA6A6B5_1_OFFSET UNITYSDK_OFFSET(0x19A0F4F0)
#define RPG_GAMECORE_PINGPONGPOSITIONCONFIG_METHOD_2_DB2B44FABAA6A6B5_OFFSET UNITYSDK_OFFSET(0x19A0F4A0)
#define RPG_GAMECORE_PINGPONGPOSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0F490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongPositionConfig_TypeDefinitionIndex = 16142;

	class PingPongPositionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PingPongPositionType Type; // 0x10
		::RPG::GameCore::PingPongGridIndex* GridIndex; // 0x18
		::RPG::GameCore::PingPongFloatPos* FloatPos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPOSITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7933B39090E9698F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongPositionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongPositionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPOSITIONCONFIG_METHOD_2_7933B39090E9698F_OFFSET))(a1, a2);
		}

		::System::Single Method_2_DB2B44FABAA6A6B5()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPOSITIONCONFIG_METHOD_2_DB2B44FABAA6A6B5_OFFSET))(this);
		}

		::System::Single Method_2_DB2B44FABAA6A6B5_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPOSITIONCONFIG_METHOD_2_DB2B44FABAA6A6B5_1_OFFSET))(this);
		}
	};
}

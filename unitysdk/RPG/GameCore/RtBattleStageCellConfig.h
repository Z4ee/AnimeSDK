#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RTBATTLESTAGECELLCONFIG_METHOD_2_6ECC487FD84CC055_OFFSET UNITYSDK_OFFSET(0x1D49B7E0)
#define RPG_GAMECORE_RTBATTLESTAGECELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49B990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleStageCellConfig_TypeDefinitionIndex = 17839;

	class RtBattleStageCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::IVec2 Pos; // 0x10
		::Il2CppArray<::System::String*>* Tags; // 0x18
		::System::Int32 Order; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGECELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6ECC487FD84CC055(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleStageCellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleStageCellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGECELLCONFIG_METHOD_2_6ECC487FD84CC055_OFFSET))(a1, a2);
		}
	};
}

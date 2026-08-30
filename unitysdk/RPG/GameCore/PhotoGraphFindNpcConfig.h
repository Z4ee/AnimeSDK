#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphFindNpc; }

#define RPG_GAMECORE_PHOTOGRAPHFINDNPCCONFIG_METHOD_2_8AD5B652E60BE004_OFFSET UNITYSDK_OFFSET(0x1D434800)
#define RPG_GAMECORE_PHOTOGRAPHFINDNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4348F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphFindNpcConfig_TypeDefinitionIndex = 21379;

	class PhotoGraphFindNpcConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PhotoGraphFindNpc*>* NpcInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFINDNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8AD5B652E60BE004(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphFindNpcConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphFindNpcConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFINDNPCCONFIG_METHOD_2_8AD5B652E60BE004_OFFSET))(a1, a2);
		}
	};
}

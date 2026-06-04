#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterWaveParamConfig; }

#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST_METHOD_2_63FC84F9770DDABE_OFFSET UNITYSDK_OFFSET(0x199B39E0)
#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x199B3AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterWaveParamConfigList_TypeDefinitionIndex = 17269;

	class MonsterWaveParamConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MonsterWaveParamConfig*>* ConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_63FC84F9770DDABE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterWaveParamConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterWaveParamConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST_METHOD_2_63FC84F9770DDABE_OFFSET))(a1, a2);
		}
	};
}

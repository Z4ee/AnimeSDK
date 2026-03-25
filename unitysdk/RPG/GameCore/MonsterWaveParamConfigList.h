#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterWaveParamConfig; }

#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST_METHOD_2_A6CFB9277F4E08B3_OFFSET UNITYSDK_OFFSET(0x17457840)
#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17457940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterWaveParamConfigList_TypeDefinitionIndex = 16669;

	class MonsterWaveParamConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MonsterWaveParamConfig*>* ConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A6CFB9277F4E08B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterWaveParamConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterWaveParamConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST_METHOD_2_A6CFB9277F4E08B3_OFFSET))(a1, a2);
		}
	};
}

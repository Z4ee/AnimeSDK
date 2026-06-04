#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameObjectPoolConfigTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GAMEOBJECTPOOLCONFIG_METHOD_2_0D832C8EAE5623F5_OFFSET UNITYSDK_OFFSET(0x197C2CF0)
#define RPG_GAMECORE_GAMEOBJECTPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197C9560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameObjectPoolConfig_TypeDefinitionIndex = 17359;

	class GameObjectPoolConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameObjectPoolConfigTemplate*>* ConfigTemplates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0D832C8EAE5623F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameObjectPoolConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameObjectPoolConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLCONFIG_METHOD_2_0D832C8EAE5623F5_OFFSET))(a1, a2);
		}
	};
}

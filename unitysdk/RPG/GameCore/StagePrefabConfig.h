#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageTypePrefabs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGEPREFABCONFIG_METHOD_2_ACC913841008953F_OFFSET UNITYSDK_OFFSET(0x1CAE9B20)
#define RPG_GAMECORE_STAGEPREFABCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE9C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePrefabConfig_TypeDefinitionIndex = 16186;

	class StagePrefabConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageTypePrefabs*>* StagePrefabMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPREFABCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ACC913841008953F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePrefabConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePrefabConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPREFABCONFIG_METHOD_2_ACC913841008953F_OFFSET))(a1, a2);
		}
	};
}

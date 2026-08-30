#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageRegionConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGEREGIONCOLLECTION_METHOD_2_25DD8A078B7F0A7D_OFFSET UNITYSDK_OFFSET(0x1CAE9E50)
#define RPG_GAMECORE_STAGEREGIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE9FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionCollection_TypeDefinitionIndex = 18969;

	class StageRegionCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::StageRegionVisualState>* NearBlockDistMappingVisualState; // 0x10
		::Il2CppArray<::RPG::GameCore::StageRegionConfig*>* RegionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_25DD8A078B7F0A7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageRegionCollection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageRegionCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONCOLLECTION_METHOD_2_25DD8A078B7F0A7D_OFFSET))(a1, a2);
		}
	};
}

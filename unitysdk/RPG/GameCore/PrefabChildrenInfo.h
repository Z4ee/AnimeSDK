#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PREFABCHILDRENINFO_METHOD_2_9F0F78723A458023_OFFSET UNITYSDK_OFFSET(0x17510D10)
#define RPG_GAMECORE_PREFABCHILDRENINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17510DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PrefabChildrenInfo_TypeDefinitionIndex = 17500;

	class PrefabChildrenInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* TerrainTexMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCHILDRENINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9F0F78723A458023(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PrefabChildrenInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PrefabChildrenInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCHILDRENINFO_METHOD_2_9F0F78723A458023_OFFSET))(a1, a2);
		}
	};
}

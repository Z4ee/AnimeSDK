#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class MDVPositionVariant; }
namespace System { class String; }

#define RPG_GAMECORE_MDVREGIONVARIANT_METHOD_2_F9BF15956122ABDA_OFFSET UNITYSDK_OFFSET(0x173723D0)
#define RPG_GAMECORE_MDVREGIONVARIANT__CTOR_OFFSET UNITYSDK_OFFSET(0x17372540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MDVRegionVariant_TypeDefinitionIndex = 17509;

	class MDVRegionVariant : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VarientPrefabPath; // 0x10
		::RPG::GameCore::HoyoTagContainer* RegionTags; // 0x18
		::Il2CppArray<::RPG::GameCore::MDVPositionVariant*>* PositionVarients; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MDVREGIONVARIANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F9BF15956122ABDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MDVRegionVariant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MDVRegionVariant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MDVREGIONVARIANT_METHOD_2_F9BF15956122ABDA_OFFSET))(a1, a2);
		}
	};
}

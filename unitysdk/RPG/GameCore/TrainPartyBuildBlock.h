#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYBUILDBLOCK_METHOD_2_CCCEAA141AB198FB_OFFSET UNITYSDK_OFFSET(0x19DF1E30)
#define RPG_GAMECORE_TRAINPARTYBUILDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF1F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildBlock_TypeDefinitionIndex = 15458;

	class TrainPartyBuildBlock : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockName; // 0x10
		::System::String* BlockAlias; // 0x18
		::Il2CppArray<::RPG::GameCore::TrainPartyBuildStaticItem*>* StaticItems; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CCCEAA141AB198FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildBlock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildBlock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDBLOCK_METHOD_2_CCCEAA141AB198FB_OFFSET))(a1, a2);
		}
	};
}

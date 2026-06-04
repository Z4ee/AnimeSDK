#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEITEMALIAS_METHOD_2_5166834B372C63DE_OFFSET UNITYSDK_OFFSET(0x19CABA10)
#define RPG_GAMECORE_STAGEITEMALIAS__CTOR_OFFSET UNITYSDK_OFFSET(0x19CABB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageItemAlias_TypeDefinitionIndex = 21027;

	class StageItemAlias : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEITEMALIAS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5166834B372C63DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageItemAlias*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageItemAlias*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEITEMALIAS_METHOD_2_5166834B372C63DE_OFFSET))(a1, a2);
		}
	};
}

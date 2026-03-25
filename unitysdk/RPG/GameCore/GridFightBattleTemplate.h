#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightWaveMonsterInfo; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTBATTLETEMPLATE_METHOD_2_ABCDA0B53F005523_OFFSET UNITYSDK_OFFSET(0x17253AD0)
#define RPG_GAMECORE_GRIDFIGHTBATTLETEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17253CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBattleTemplate_TypeDefinitionIndex = 16666;

	class GridFightBattleTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TemplateName; // 0x10
		::System::UInt32 EliteGroup; // 0x18
		::Il2CppArray<::RPG::GameCore::GridFightWaveMonsterInfo*>* GridFightWaveList; // 0x20
		::Il2CppArray<::System::UInt32>* AffixIDList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBATTLETEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ABCDA0B53F005523(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightBattleTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightBattleTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBATTLETEMPLATE_METHOD_2_ABCDA0B53F005523_OFFSET))(a1, a2);
		}
	};
}

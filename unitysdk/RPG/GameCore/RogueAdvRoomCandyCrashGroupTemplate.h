#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashPropInfo; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPTEMPLATE_METHOD_2_293DBB9EFE652660_OFFSET UNITYSDK_OFFSET(0x18CE6A40)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE6B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashGroupTemplate_TypeDefinitionIndex = 16983;

	class RogueAdvRoomCandyCrashGroupTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueAdvRoomCandyCrashPropInfo*>* Props; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_293DBB9EFE652660(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPTEMPLATE_METHOD_2_293DBB9EFE652660_OFFSET))(a1, a2);
		}
	};
}

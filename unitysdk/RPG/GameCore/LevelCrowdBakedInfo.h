#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelCrowdMemberBakedInfo; }

#define RPG_GAMECORE_LEVELCROWDBAKEDINFO_METHOD_2_169117A642B805FB_OFFSET UNITYSDK_OFFSET(0x17330440)
#define RPG_GAMECORE_LEVELCROWDBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17330560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCrowdBakedInfo_TypeDefinitionIndex = 15730;

	class LevelCrowdBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelCrowdMemberBakedInfo*>* MemberList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCROWDBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_169117A642B805FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelCrowdBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCrowdBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCROWDBAKEDINFO_METHOD_2_169117A642B805FB_OFFSET))(a1, a2);
		}
	};
}

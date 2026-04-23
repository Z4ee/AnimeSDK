#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ColliderConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELCROWDMEMBERBAKEDINFO_METHOD_2_EDAB2FB5B6EED135_OFFSET UNITYSDK_OFFSET(0x18A3E350)
#define RPG_GAMECORE_LEVELCROWDMEMBERBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3E470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCrowdMemberBakedInfo_TypeDefinitionIndex = 16255;

	class LevelCrowdMemberBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::Il2CppArray<::RPG::GameCore::ColliderConfig*>* AdditiveColliders; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCROWDMEMBERBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EDAB2FB5B6EED135(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelCrowdMemberBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCrowdMemberBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCROWDMEMBERBAKEDINFO_METHOD_2_EDAB2FB5B6EED135_OFFSET))(a1, a2);
		}
	};
}

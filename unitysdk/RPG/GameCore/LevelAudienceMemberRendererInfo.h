#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIENCEMEMBERRENDERERINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1986DC30)
#define RPG_GAMECORE_LEVELAUDIENCEMEMBERRENDERERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1986DD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudienceMemberRendererInfo_TypeDefinitionIndex = 16467;

	class LevelAudienceMemberRendererInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::NPCBodySize NpcBodySize; // 0x10
		::Il2CppArray<::System::String*>* Identities; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERRENDERERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAudienceMemberRendererInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudienceMemberRendererInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERRENDERERINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

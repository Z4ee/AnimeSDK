#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_0B97624EA2BF3959;
class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_1370A4CB3E88D236_OFFSET UNITYSDK_OFFSET(0x1CEA3600)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_6476EF1A63A93B6F_OFFSET UNITYSDK_OFFSET(0x1CEA37A0)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_A2DB4DB2D9A8551B_OFFSET UNITYSDK_OFFSET(0x1CEA35C0)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_F42BE948202CD848_OFFSET UNITYSDK_OFFSET(0x1CEA3770)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA35F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckCharacterDie_TypeDefinitionIndex = 23174;

	class ByCheckCharacterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x20
		::Class_1_0B97624EA2BF3959* OverrideConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A2DB4DB2D9A8551B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCharacterDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCharacterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_A2DB4DB2D9A8551B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1370A4CB3E88D236(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_1370A4CB3E88D236_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F42BE948202CD848(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_F42BE948202CD848_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6476EF1A63A93B6F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_6476EF1A63A93B6F_OFFSET))(a1, a2);
		}
	};
}

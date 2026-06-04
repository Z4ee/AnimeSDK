#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_1FEE0E915F6A398D_OFFSET UNITYSDK_OFFSET(0x194FF1F0)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_646B201E5DDC111C_OFFSET UNITYSDK_OFFSET(0x194FF170)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_B31C504FCF3370DE_OFFSET UNITYSDK_OFFSET(0x194FEFC0)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_EC5D0F97D38DC4E0_OFFSET UNITYSDK_OFFSET(0x194FEEF0)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x194FEF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierDeathSource_TypeDefinitionIndex = 21796;

	class ByCheckModifierDeathSource : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ModifierDeathSource DeathSource; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EC5D0F97D38DC4E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierDeathSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierDeathSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_EC5D0F97D38DC4E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B31C504FCF3370DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_B31C504FCF3370DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_646B201E5DDC111C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_646B201E5DDC111C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FEE0E915F6A398D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_METHOD_4_1FEE0E915F6A398D_OFFSET))(a1, a2);
		}
	};
}

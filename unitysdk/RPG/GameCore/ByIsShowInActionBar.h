#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_50F96F0ED040E34C_OFFSET UNITYSDK_OFFSET(0x1B2A4810)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_5CF84FF71A109B16_OFFSET UNITYSDK_OFFSET(0x1B2A4980)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_D7645C8B8D49BE09_OFFSET UNITYSDK_OFFSET(0x1B2A49B0)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_E17D366E8DBA2685_OFFSET UNITYSDK_OFFSET(0x1B2A47D0)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A4800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsShowInActionBar_TypeDefinitionIndex = 23506;

	class ByIsShowInActionBar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E17D366E8DBA2685(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsShowInActionBar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsShowInActionBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_E17D366E8DBA2685_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_50F96F0ED040E34C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_50F96F0ED040E34C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5CF84FF71A109B16(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsShowInActionBar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsShowInActionBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_5CF84FF71A109B16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7645C8B8D49BE09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_METHOD_4_D7645C8B8D49BE09_OFFSET))(a1, a2);
		}
	};
}

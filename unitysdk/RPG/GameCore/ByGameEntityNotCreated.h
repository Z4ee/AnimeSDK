#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_1CD3B477C41891B8_OFFSET UNITYSDK_OFFSET(0x1CF1B220)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B466100803BB90E0_OFFSET UNITYSDK_OFFSET(0x1CF1B410)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B552F142E8D84A57_OFFSET UNITYSDK_OFFSET(0x1CF1B3E0)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B6217744C594489D_OFFSET UNITYSDK_OFFSET(0x1CF1B260)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1B250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGameEntityNotCreated_TypeDefinitionIndex = 20073;

	class ByGameEntityNotCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* UniqueName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1CD3B477C41891B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGameEntityNotCreated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGameEntityNotCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_1CD3B477C41891B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B6217744C594489D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B6217744C594489D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B552F142E8D84A57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B552F142E8D84A57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B466100803BB90E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B466100803BB90E0_OFFSET))(a1, a2);
		}
	};
}

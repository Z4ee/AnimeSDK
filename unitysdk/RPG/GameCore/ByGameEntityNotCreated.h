#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B3A49284EEBE38F2_OFFSET UNITYSDK_OFFSET(0x1954A1F0)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B5108C4456E817FB_OFFSET UNITYSDK_OFFSET(0x19549FA0)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B6217744C594489D_OFFSET UNITYSDK_OFFSET(0x1954A070)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_FEA30264F6A92EA7_OFFSET UNITYSDK_OFFSET(0x1954A270)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1954A020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGameEntityNotCreated_TypeDefinitionIndex = 19171;

	class ByGameEntityNotCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* UniqueName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B5108C4456E817FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGameEntityNotCreated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGameEntityNotCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B5108C4456E817FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B6217744C594489D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B6217744C594489D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3A49284EEBE38F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B3A49284EEBE38F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FEA30264F6A92EA7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_FEA30264F6A92EA7_OFFSET))(a1, a2);
		}
	};
}

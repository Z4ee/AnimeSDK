#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_26A2874AC0B5185F_OFFSET UNITYSDK_OFFSET(0x194F8A10)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_4B149E007B7787C3_OFFSET UNITYSDK_OFFSET(0x194F8990)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_63C4D12E597B5410_OFFSET UNITYSDK_OFFSET(0x194F8850)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_6E02F0B058B0306A_OFFSET UNITYSDK_OFFSET(0x194F8780)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x194F8800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckBloodLinkDead_TypeDefinitionIndex = 21781;

	class ByCheckBloodLinkDead : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6E02F0B058B0306A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckBloodLinkDead*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckBloodLinkDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_6E02F0B058B0306A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63C4D12E597B5410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_63C4D12E597B5410_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B149E007B7787C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_4B149E007B7787C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26A2874AC0B5185F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_26A2874AC0B5185F_OFFSET))(a1, a2);
		}
	};
}

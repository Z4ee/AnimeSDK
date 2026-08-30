#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_091955F44F6A0038_OFFSET UNITYSDK_OFFSET(0x1CDB92D0)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_B61411D24DA6E94B_OFFSET UNITYSDK_OFFSET(0x1CDB9310)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_CDCFCCC98E039071_OFFSET UNITYSDK_OFFSET(0x1CDB9450)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_EF7941BB3124AEA8_OFFSET UNITYSDK_OFFSET(0x1CDB9480)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB9300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamAnchorContinous_TypeDefinitionIndex = 19782;

	class ByPamAnchorContinous : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_091955F44F6A0038(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamAnchorContinous*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamAnchorContinous*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_091955F44F6A0038_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B61411D24DA6E94B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_B61411D24DA6E94B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CDCFCCC98E039071(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamAnchorContinous*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamAnchorContinous*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_CDCFCCC98E039071_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF7941BB3124AEA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_EF7941BB3124AEA8_OFFSET))(a1, a2);
		}
	};
}

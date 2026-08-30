#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_1F4FC1D4539A28E5_OFFSET UNITYSDK_OFFSET(0x1CF2F9D0)
#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_36AC0F843718E960_OFFSET UNITYSDK_OFFSET(0x1CF2FBA0)
#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_6A8E20DFA72D4737_OFFSET UNITYSDK_OFFSET(0x1CF2FBE0)
#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_EF98E74910E89850_OFFSET UNITYSDK_OFFSET(0x1CF2FA20)
#define RPG_GAMECORE_BYISAUTOBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2FA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAutoBattle_TypeDefinitionIndex = 22316;

	class ByIsAutoBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::OperationTypeMask ApplyOpMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1F4FC1D4539A28E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAutoBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_1F4FC1D4539A28E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF98E74910E89850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_EF98E74910E89850_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_36AC0F843718E960(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_36AC0F843718E960_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6A8E20DFA72D4737(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_6A8E20DFA72D4737_OFFSET))(a1, a2);
		}
	};
}

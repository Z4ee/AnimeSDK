#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_03D6026FFB27BE08_OFFSET UNITYSDK_OFFSET(0x1B2BE780)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_0A6156F8F6D30EBF_OFFSET UNITYSDK_OFFSET(0x1B2BE580)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_0A7545CF49C7D846_OFFSET UNITYSDK_OFFSET(0x1B2BE7B0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_7F73FCD9B91B0D1E_OFFSET UNITYSDK_OFFSET(0x1B2BE5C0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2BE5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeak_TypeDefinitionIndex = 22671;

	class ByTargetIsStanceWeak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackerType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0A6156F8F6D30EBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_0A6156F8F6D30EBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F73FCD9B91B0D1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_7F73FCD9B91B0D1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_03D6026FFB27BE08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeak*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_03D6026FFB27BE08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0A7545CF49C7D846(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_0A7545CF49C7D846_OFFSET))(a1, a2);
		}
	};
}

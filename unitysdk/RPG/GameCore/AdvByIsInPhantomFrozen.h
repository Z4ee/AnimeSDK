#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_20723FE107E10DA0_OFFSET UNITYSDK_OFFSET(0x1BE14C70)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_62CA5A5B965F0053_OFFSET UNITYSDK_OFFSET(0x1BE14A80)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_88DFF3A54E5DC81A_OFFSET UNITYSDK_OFFSET(0x1BE14AC0)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_A7249BB191FE91F6_OFFSET UNITYSDK_OFFSET(0x1BE14C40)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE14AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByIsInPhantomFrozen_TypeDefinitionIndex = 19809;

	class AdvByIsInPhantomFrozen : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_62CA5A5B965F0053(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsInPhantomFrozen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_62CA5A5B965F0053_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88DFF3A54E5DC81A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_88DFF3A54E5DC81A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A7249BB191FE91F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_A7249BB191FE91F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_20723FE107E10DA0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_20723FE107E10DA0_OFFSET))(a1, a2);
		}
	};
}

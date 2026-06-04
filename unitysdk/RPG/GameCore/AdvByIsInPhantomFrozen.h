#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_7E141E5D8B4CA8B7_OFFSET UNITYSDK_OFFSET(0x1941C2F0)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_88DFF3A54E5DC81A_OFFSET UNITYSDK_OFFSET(0x1941C170)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_95258C82849E7B5E_OFFSET UNITYSDK_OFFSET(0x1941C370)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_D9DD872FC9DD16D4_OFFSET UNITYSDK_OFFSET(0x1941C0A0)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1941C120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByIsInPhantomFrozen_TypeDefinitionIndex = 19451;

	class AdvByIsInPhantomFrozen : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D9DD872FC9DD16D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsInPhantomFrozen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_D9DD872FC9DD16D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88DFF3A54E5DC81A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_88DFF3A54E5DC81A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E141E5D8B4CA8B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_7E141E5D8B4CA8B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95258C82849E7B5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_95258C82849E7B5E_OFFSET))(a1, a2);
		}
	};
}

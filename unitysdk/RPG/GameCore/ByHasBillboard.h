#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_84B40662F38CC2D2_OFFSET UNITYSDK_OFFSET(0x1A8C5F10)
#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_85B970375FC732ED_OFFSET UNITYSDK_OFFSET(0x1A8C6090)
#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_87F2E5A3B1C87B83_OFFSET UNITYSDK_OFFSET(0x1A8C5E70)
#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_E0A929357C3255E8_OFFSET UNITYSDK_OFFSET(0x1A8C60F0)
#define RPG_GAMECORE_BYHASBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C5ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasBillboard_TypeDefinitionIndex = 21613;

	class ByHasBillboard : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_87F2E5A3B1C87B83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasBillboard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasBillboard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_87F2E5A3B1C87B83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_84B40662F38CC2D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_84B40662F38CC2D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85B970375FC732ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_85B970375FC732ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E0A929357C3255E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_E0A929357C3255E8_OFFSET))(a1, a2);
		}
	};
}

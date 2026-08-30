#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_CFE378CCD0FF66A1_OFFSET UNITYSDK_OFFSET(0x1C3012A0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_DAA7EA24D9526AC5_OFFSET UNITYSDK_OFFSET(0x1C301070)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_E2D7BE74808448DE_OFFSET UNITYSDK_OFFSET(0x1C301270)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_F165D56D331D2338_OFFSET UNITYSDK_OFFSET(0x1C3010B0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3010A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackName_TypeDefinitionIndex = 22785;

	class ByCheckModifierCallBackName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DAA7EA24D9526AC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_DAA7EA24D9526AC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F165D56D331D2338(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_F165D56D331D2338_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E2D7BE74808448DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_E2D7BE74808448DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CFE378CCD0FF66A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_CFE378CCD0FF66A1_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessAbilityProperty.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_CHESSSETDYNAMICVALUEBYPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1708DF90)
#define RPG_GAMECORE_CHESSSETDYNAMICVALUEBYPROPERTY_METHOD_4_6B1284213D92F329_OFFSET UNITYSDK_OFFSET(0x1708DD70)
#define RPG_GAMECORE_CHESSSETDYNAMICVALUEBYPROPERTY_METHOD_4_9428259889EDDF11_OFFSET UNITYSDK_OFFSET(0x1708DCA0)
#define RPG_GAMECORE_CHESSSETDYNAMICVALUEBYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1708DD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessSetDynamicValueByProperty_TypeDefinitionIndex = 21987;

	class ChessSetDynamicValueByProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::ChessAbilityProperty Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSETDYNAMICVALUEBYPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9428259889EDDF11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessSetDynamicValueByProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessSetDynamicValueByProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSETDYNAMICVALUEBYPROPERTY_METHOD_4_9428259889EDDF11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B1284213D92F329(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessSetDynamicValueByProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessSetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSETDYNAMICVALUEBYPROPERTY_METHOD_4_6B1284213D92F329_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSETDYNAMICVALUEBYPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

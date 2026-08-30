#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayEffectType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_565B5F070BF5A659_OFFSET UNITYSDK_OFFSET(0x1C2F8D10)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_5F0F1B508C27EF76_OFFSET UNITYSDK_OFFSET(0x1C2F8D40)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_9C73BCD71AD5456A_OFFSET UNITYSDK_OFFSET(0x1C2F8B50)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C62852E63DF9B7E3_OFFSET UNITYSDK_OFFSET(0x1C2F8B90)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F8B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckActionDelayEffectType_TypeDefinitionIndex = 23210;

	class ByCheckActionDelayEffectType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ActionDelayEffectType EffectType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9C73BCD71AD5456A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_9C73BCD71AD5456A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C62852E63DF9B7E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C62852E63DF9B7E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_565B5F070BF5A659(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_565B5F070BF5A659_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5F0F1B508C27EF76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_5F0F1B508C27EF76_OFFSET))(a1, a2);
		}
	};
}
